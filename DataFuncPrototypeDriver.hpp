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

	class DriverTest;

	
	class DLL_EXPORT_IMPORT DataFuncPrototypeDriver {
//#ifdef UNIT_TEST
		friend class DataFuncPrototypeDriverTest;
//#endif

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

			MC::DataFuncPrototypeDriver::Builder input(std::istream& is);

			MC::DataFuncPrototypeDriver::Builder input(std::string filename);

			MC::DataFuncPrototypeDriver::Builder output(std::ostream& os);

			MC::DataFuncPrototypeDriver::Builder output(std::string filename);

			MC::DataFuncPrototypeDriver::Builder debug(std::ostream& os);

			MC::DataFuncPrototypeDriver::Builder debug(std::string filename);

			MC::DataFuncPrototypeDriver::Builder heap(int heapSize);

			DataFuncPrototypeDriver build();

		};
		int parse(); //successful: 0, otherwise: failed

		virtual ~DataFuncPrototypeDriver();

	private:
		DataFuncPrototypeDriver(std::istream* in,
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
