#ifndef __PrototypeScanner_HPP__
#define __PrototypeScanner_HPP__

#if ! defined(yyFlexLexerOnce)
#include "FlexLexer.h"
#endif

#include "datafuncprototype.grammar.hh"
#include "location.hh"

namespace MC {

class DataFuncPrototypeScanner : public yyFlexLexer {
public:

	explicit DataFuncPrototypeScanner(std::istream *in) : yyFlexLexer(in) {
	};

	~DataFuncPrototypeScanner() override = default;

	//get rid of override virtual function warning
	using FlexLexer::yylex;

	virtual int yylex(MC::DataFuncPrototypeParser::semantic_type *const lval, MC::DataFuncPrototypeParser::location_type *location);
	// YY_DECL defined in scanner.ll
	// Method body created by flex in lexer.yy.cc

private:
	MC::DataFuncPrototypeParser::semantic_type *yylval = nullptr;
};

}

#endif /* END __SCANNER_HPP__ */
