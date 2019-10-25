#ifndef __DataFuncProto_h__
#define __DataFuncProto_h__
#include <stdint.h>
#include "const_value.h"
struct DataOrPropertyProto
{
	int kind;
	uint32_t modifiers;
	std::string type;
	std::string name;
	MC::const_value opt_value;
	DataOrPropertyProto()
	: opt_value(0)
	{}
};

struct FuncProto
{
	uint32_t modifiers;
	std::string return_type;
	std::string func_name;
	std::vector<std::string> parameter_types;
	std::vector<std::string> template_parameters_type;
	FuncProto() {}
};

#define IDENTIFIER_PROTO 0
#define FUNC_PROTO 1
#define DATA_PROTO 2
#define PROPERTY_PROTO 3
#define CONST_PROTO 4


struct DataFuncProto
{
	int name_kind;
	union
	{
		std::string *identifier_proto;
		DataOrPropertyProto *data_property_proto;
		FuncProto *func_proto;		
	};
	public:
		DataFuncProto(const std::string& identifier)
		{
			this->name_kind = IDENTIFIER_PROTO;
			identifier_proto = new std::string(identifier);			
		}
		DataFuncProto(
					uint32_t modifiers, 
					const std::string& return_type, 
					const std::string& func_name, 
					const std::vector<std::string>& parameter_types)
		{
			this->name_kind = FUNC_PROTO;
			func_proto = new FuncProto;
			func_proto->modifiers = modifiers;
			func_proto->return_type = return_type;
			func_proto->func_name = func_name;
			func_proto->parameter_types = parameter_types;
		}
		DataFuncProto(
					uint32_t modifiers, 
					const std::string& return_type, 
					const std::string& func_name, 
					const std::string& parameter_type)
		{
			this->name_kind = FUNC_PROTO;
			func_proto = new FuncProto;
			func_proto->modifiers = modifiers;
			func_proto->return_type = return_type;
			func_proto->func_name = func_name;
			func_proto->parameter_types.push_back(parameter_type);
		}
		DataFuncProto(int kind,
					uint32_t modifiers,
					const std::string& type,
					const std::string& data_name,
					const MC::const_value& opt_value)
		{			
			this->name_kind = kind;
			data_property_proto = new DataOrPropertyProto;
			data_property_proto->kind = kind;
			data_property_proto->modifiers = modifiers;
			data_property_proto->type = type;
			data_property_proto->name = data_name;
			data_property_proto->opt_value = opt_value;
		}		
		virtual ~DataFuncProto()
		{
			if (name_kind == FUNC_PROTO)
			{
				delete func_proto;			
			}			
			else if (name_kind == IDENTIFIER_PROTO)
			{			
				delete identifier_proto;
			}
			else
			{
				delete data_property_proto;
			}
		}

};
#endif /* __DataFuncProto_h__ */