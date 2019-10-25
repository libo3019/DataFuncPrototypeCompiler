#ifndef __DataFuncPrototypeDriver_HPP__
#define __DataFuncPrototypeDriver_HPP__

#include <string>
#include <cstddef>
#include <istream>
#include "DataFuncPrototypeScanner.hpp"
#include "datafuncprototype.grammar.hh"
#include "const_value.h"
#include "DLL.h"
#define DEFAULT_HEAP_SIZE 1024*1024*300

namespace MC {

	class DLL_EXPORT_IMPORT DataFuncPrototypeCompiler {

	public:
		std::vector<DataFuncProto *> *data_func_protos;
	public:
class DLL_EXPORT_IMPORT Builder {
		private:
			std::istream* in;
			std::ostream* out;
			std::ostream* deb;
			int heapSize = DEFAULT_HEAP_SIZE;

		public:
			Builder();

			MC::DataFuncPrototypeCompiler::Builder input(std::istream& is);

			MC::DataFuncPrototypeCompiler::Builder input(std::string filename);

			MC::DataFuncPrototypeCompiler::Builder output(std::ostream& os);

			MC::DataFuncPrototypeCompiler::Builder output(std::string filename);

			MC::DataFuncPrototypeCompiler::Builder debug(std::ostream& os);

			MC::DataFuncPrototypeCompiler::Builder debug(std::string filename);

			MC::DataFuncPrototypeCompiler::Builder heap(int heapSize);

			DataFuncPrototypeCompiler build();

		};
		int parse(); //successful: 0, otherwise: failed

		virtual ~DataFuncPrototypeCompiler();

	private:
		DataFuncPrototypeCompiler(std::istream* in,
			   std::ostream* out,
			   std::ostream* deb,
			   int heapSize);
		std::istream* in;
		std::ostream* out;
		std::ostream* deb;
		int heapSize;

		MC::DataFuncPrototypeParser* parser = nullptr;
		MC::DataFuncPrototypeScanner* scanner = nullptr;		
	};

} /* end namespace MC */

#endif /* END __MCDRIVER_HPP__ */
