#include <cctype>
#include <fstream>
#include <iostream>
#include "datafuncprototype.grammar.hh"
#include "DataFuncPrototypeCompiler.h"
#include <gc.h>
using token = MC::DataFuncPrototypeParser::token;

MC::DataFuncPrototypeCompiler::Builder::Builder() {
	in = &std::cin;
	out = &std::cout;
	deb = nullptr;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::input(std::string filename) {
	auto* file = new std::ifstream(filename);
	if (!file->good()) {
		printf("File '%s' can't be opened.\n", filename.c_str());
		exit(EXIT_FAILURE);
	}
	in = file;
	return *this;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::input(std::istream& is) {
	if (!is.good() && is.eof()) {
		return *this;
	}
	in = &is;
	return *this;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::output(std::string filename) {
	auto* file = new std::ofstream(filename);
	if (!file->good()) {
		printf("File '%s' can't opened!\n", filename.c_str());
		exit(EXIT_FAILURE);
	}
	out = file;
	return *this;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::output(std::ostream& os) {
	if (!os.good() && os.eof()) {
		return *this;
	}
	out = &os;
	return *this;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::debug(std::string filename) {
	auto* file = new std::ofstream(filename);
	if (!file->good()) {
		exit(EXIT_FAILURE);
	}
	deb = file;
	return *this;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::debug(std::ostream& os) {
	if (!os.good() && os.eof()) {
		return *this;
	}
	deb = &os;
	return *this;
}

MC::DataFuncPrototypeCompiler::Builder MC::DataFuncPrototypeCompiler::Builder::heap(int heapSize) {
	this->heapSize = heapSize;
	return *this;
}

MC::DataFuncPrototypeCompiler MC::DataFuncPrototypeCompiler::Builder::build() {
	return DataFuncPrototypeCompiler(in, out, deb, heapSize);
};


MC::DataFuncPrototypeCompiler::DataFuncPrototypeCompiler(std::istream* in,
				   std::ostream* out,
				   std::ostream* deb,
				   int size)
	: in(in), out(out), deb(deb), heapSize(size), scanner(nullptr), parser(nullptr) {
	data_func_protos = new std::vector<DataFuncProto *>();
}

MC::DataFuncPrototypeCompiler::~DataFuncPrototypeCompiler() {
	delete scanner;
	scanner = nullptr;
	delete parser;
	parser = nullptr;
	size_t idx, size = data_func_protos->size();
	for (idx = 0; idx < size; ++idx)
		delete (*data_func_protos)[idx];
	delete data_func_protos;
}

int MC::DataFuncPrototypeCompiler::parse() {
	if (!in->good() || in->eof()) {
		std::cout << "File can't be opened or file is empty." << std::endl;
		return 1;
	}

	delete scanner;
	try {
		scanner = new MC::DataFuncPrototypeScanner(in);
	} catch (std::bad_alloc& ba) {
		std::cerr << "Failed to allocate scanner: (" << ba.what() << "), exiting!!\n";
		exit(EXIT_FAILURE);
	}

	delete parser;
	try {
		parser = new MC::DataFuncPrototypeParser((*scanner) /* scanner */,
								(*this) /* driver */ );
	} catch (std::bad_alloc& ba) {
		std::cerr << "Failed to allocate parser: (" << ba.what() << "), exiting!!\n";
		exit(EXIT_FAILURE);
	}

	int ret = parser->parse();
	printf("Heap size = %zd\n", GC_get_heap_size());
	GC_gcollect();
	return ret;
}