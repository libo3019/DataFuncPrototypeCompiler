#include <iostream>
#include <cstring>

#include "DataFuncPrototypeCompiler.h"
#include "const_value.h"
#include "gc.h"

int main(const int argc, const char **argv) {

	GC_INIT();

	MC::DataFuncPrototypeCompiler::Builder builder;

	for (int i = 1; i < argc; i++) {
		if (std::strncmp(argv[i], "-i", 2) == 0) {
			i++;
			if (i < argc) {
				builder.input(std::string(argv[i]));
			} else {
				std::cout << "Unspecified input file name." << std::endl;
				return (EXIT_FAILURE);
			}
		} else if (std::strncmp(argv[i], "-o", 2) == 0) {
			i++;
			if (i < argc) {
				builder.output(std::string(argv[i]));
			} else {
				std::cout << "Unspecified output file name." << std::endl;
				return (EXIT_FAILURE);
			}
		} else if (std::strncmp(argv[i], "-d", 2) == 0) {
			i++;
			if (i < argc) {
				builder.debug(std::string(argv[i]));
			} else {
				std::cout << "Unspecified debug file name." << std::endl;
				return (EXIT_FAILURE);
			}
		} else if (std::strncmp(argv[i], "-f", 2) == 0) {
			builder.debug(std::cout);
		} else if (std::strncmp(argv[i], "--heap", 6) == 0) {
			i++;
			if (i < argc) {
				builder.heap(atoi(argv[i]));
			} else {
				std::cout << "Unspecified heap size." << std::endl;
				return (EXIT_FAILURE);
			}
		} else if (std::strncmp(argv[i], "-h", 2) == 0) {
			std::cout << "Use -i <path_to_file> to specify input file (defaults to standard input)" << std::endl;
			std::cout << "Use -o <path_to_file> to specify output file (defaults to standard output)" << std::endl;
			std::cout << "Use -d <path_to_file> to specify debug file (none by default)" << std::endl;
			std::cout << "Use -f to print debug to standard output" << std::endl;
			std::cout << "Use --heap <heap_size> to set the heap size" << std::endl;
			std::cout << "Use -h to get help." << std::endl;
			return (EXIT_SUCCESS);
		} else {
			std::cout << "Invalid arguments" << std::endl;
			return (EXIT_FAILURE);
		}
	}

	MC::DataFuncPrototypeCompiler data_func_compiler = builder.build();

	const int accept(0);
	if (data_func_compiler.parse() == accept) {
		std::cout << "Parsing successful!" << std::endl;
		size_t idxProto, size = (*data_func_compiler.data_func_protos).size();
		for (idxProto = 0; idxProto < size; ++idxProto)
		{

			if ((*data_func_compiler.data_func_protos)[idxProto]->name_kind == FUNC_PROTO)
			{
				std::cout << "This is a func" << std::endl;
				std::cout << "Modifier is " << (*data_func_compiler.data_func_protos)[idxProto]->func_proto->modifiers << std::endl;
				std::cout << "return type is " << (*data_func_compiler.data_func_protos)[idxProto]->func_proto->return_type << std::endl;
				std::cout << "function name is " << (*data_func_compiler.data_func_protos)[idxProto]->func_proto->func_name << std::endl;
				std::cout << "parameters list:" << std::endl;
				for (size_t idx = 0; idx < (*data_func_compiler.data_func_protos)[idxProto]->func_proto->parameter_types.size(); ++idx)
				{
					printf("   paramater[%zd] = %s\n", idx, (*data_func_compiler.data_func_protos)[idxProto]->func_proto->parameter_types[idx].c_str());
				}
			}
			else if ((*data_func_compiler.data_func_protos)[idxProto]->name_kind == DATA_PROTO)
			{
				std::cout << "This is a data" << std::endl;
				std::cout << "Modifier is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->modifiers << std::endl;
				std::cout << "type is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->type << std::endl;
				std::cout << "data_name is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->name << std::endl;
				std::cout << "opt_value is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->opt_value.long_value_ << std::endl;
			}
			else if ((*data_func_compiler.data_func_protos)[idxProto]->name_kind == PROPERTY_PROTO)
			{
				std::cout << "This is a property" << std::endl;
				std::cout << "Modifier is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->modifiers << std::endl;
				std::cout << "type is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->type << std::endl;
				std::cout << "data_name is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->name << std::endl;
				std::cout << "opt_value is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->opt_value.long_value_ << std::endl;
			}
			else if ((*data_func_compiler.data_func_protos)[idxProto]->name_kind == CONST_PROTO)
			{				
				std::cout << "This is a const" << std::endl;
				std::cout << "Modifier is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->modifiers << std::endl;
				std::cout << "type is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->type << std::endl;
				std::cout << "data_name is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->name << std::endl;
				std::cout << "opt_value is " << (*data_func_compiler.data_func_protos)[idxProto]->data_property_proto->opt_value.long_value_ << std::endl;
			}
			else
			{
				std::cout << "This is a identifier: " << *((*data_func_compiler.data_func_protos)[idxProto]->identifier_proto) << std::endl;
			}
		}
	} else {
		std::cerr << "Parsing failed!" << std::endl;
	}

	return EXIT_SUCCESS;
}


