// A Bison parser, made by GNU Bison 3.3.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.



// First part of user prologue.
#line 59 "datafuncprototype.grammar.yy" // lalr1.cc:429

/*------------------------------------------------------------------
 * yacc-able Java 2 grammar
 * see notes at end
 */

#line 47 "datafuncprototype.grammar.cc" // lalr1.cc:429

#include "datafuncprototype.grammar.hh"


// Unqualified %code blocks.
#line 46 "datafuncprototype.grammar.yy" // lalr1.cc:435

	#include <iostream>
	#include <cstdlib>
	#include <fstream>
	#include <cstdint>
	#include "DataFuncPrototypeCompiler.h"

	#undef yylex
	#define yylex scanner.yylex
	
	#include <stdio.h>

#line 66 "datafuncprototype.grammar.cc" // lalr1.cc:435


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "datafuncprototype.grammar.yy" // lalr1.cc:510
namespace MC {
#line 161 "datafuncprototype.grammar.cc" // lalr1.cc:510

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  DataFuncPrototypeParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  DataFuncPrototypeParser::DataFuncPrototypeParser (DataFuncPrototypeScanner &scanner_yyarg, DataFuncPrototypeCompiler &compiler_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      compiler (compiler_yyarg)
  {}

  DataFuncPrototypeParser::~DataFuncPrototypeParser ()
  {}

  DataFuncPrototypeParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  DataFuncPrototypeParser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
    , location (std::move (that.location))
  {
    switch (this->type_get ())
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.move< DataFuncProto* > (std::move (that.value));
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        value.move< MC::EModifier > (std::move (that.value));
        break;

      case 5: // "bool"
        value.move< bool > (std::move (that.value));
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        value.move< const_value > (std::move (that.value));
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.move< double > (std::move (that.value));
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.move< int > (std::move (that.value));
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.move< long long > (std::move (that.value));
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        value.move< std::string > (std::move (that.value));
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.move< std::vector<DataFuncProto*> > (std::move (that.value));
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.move< std::vector<std::string> > (std::move (that.value));
        break;

      case 128: // modifiers
        value.move< uint32_t > (std::move (that.value));
        break;

      case 22: // "null"
        value.move< void* > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  DataFuncPrototypeParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->type_get ())
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.copy< DataFuncProto* > (YY_MOVE (that.value));
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        value.copy< MC::EModifier > (YY_MOVE (that.value));
        break;

      case 5: // "bool"
        value.copy< bool > (YY_MOVE (that.value));
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        value.copy< const_value > (YY_MOVE (that.value));
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.copy< double > (YY_MOVE (that.value));
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.copy< int > (YY_MOVE (that.value));
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.copy< long long > (YY_MOVE (that.value));
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.copy< std::vector<DataFuncProto*> > (YY_MOVE (that.value));
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.copy< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case 128: // modifiers
        value.copy< uint32_t > (YY_MOVE (that.value));
        break;

      case 22: // "null"
        value.copy< void* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  DataFuncPrototypeParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  DataFuncPrototypeParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.move< DataFuncProto* > (YY_MOVE (s.value));
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        value.move< MC::EModifier > (YY_MOVE (s.value));
        break;

      case 5: // "bool"
        value.move< bool > (YY_MOVE (s.value));
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        value.move< const_value > (YY_MOVE (s.value));
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.move< double > (YY_MOVE (s.value));
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.move< int > (YY_MOVE (s.value));
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.move< long long > (YY_MOVE (s.value));
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        value.move< std::string > (YY_MOVE (s.value));
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.move< std::vector<DataFuncProto*> > (YY_MOVE (s.value));
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.move< std::vector<std::string> > (YY_MOVE (s.value));
        break;

      case 128: // modifiers
        value.move< uint32_t > (YY_MOVE (s.value));
        break;

      case 22: // "null"
        value.move< void* > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  DataFuncPrototypeParser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  DataFuncPrototypeParser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  DataFuncPrototypeParser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  DataFuncPrototypeParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  DataFuncPrototypeParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  DataFuncPrototypeParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  DataFuncPrototypeParser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  DataFuncPrototypeParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  DataFuncPrototypeParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  DataFuncPrototypeParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  DataFuncPrototypeParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  DataFuncPrototypeParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  DataFuncPrototypeParser::symbol_number_type
  DataFuncPrototypeParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  DataFuncPrototypeParser::stack_symbol_type::stack_symbol_type ()
  {}

  DataFuncPrototypeParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.YY_MOVE_OR_COPY< DataFuncProto* > (YY_MOVE (that.value));
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        value.YY_MOVE_OR_COPY< MC::EModifier > (YY_MOVE (that.value));
        break;

      case 5: // "bool"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        value.YY_MOVE_OR_COPY< const_value > (YY_MOVE (that.value));
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.YY_MOVE_OR_COPY< double > (YY_MOVE (that.value));
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.YY_MOVE_OR_COPY< long long > (YY_MOVE (that.value));
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.YY_MOVE_OR_COPY< std::vector<DataFuncProto*> > (YY_MOVE (that.value));
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.YY_MOVE_OR_COPY< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case 128: // modifiers
        value.YY_MOVE_OR_COPY< uint32_t > (YY_MOVE (that.value));
        break;

      case 22: // "null"
        value.YY_MOVE_OR_COPY< void* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  DataFuncPrototypeParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.move< DataFuncProto* > (YY_MOVE (that.value));
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        value.move< MC::EModifier > (YY_MOVE (that.value));
        break;

      case 5: // "bool"
        value.move< bool > (YY_MOVE (that.value));
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        value.move< const_value > (YY_MOVE (that.value));
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.move< double > (YY_MOVE (that.value));
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.move< int > (YY_MOVE (that.value));
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.move< long long > (YY_MOVE (that.value));
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.move< std::vector<DataFuncProto*> > (YY_MOVE (that.value));
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.move< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      case 128: // modifiers
        value.move< uint32_t > (YY_MOVE (that.value));
        break;

      case 22: // "null"
        value.move< void* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  DataFuncPrototypeParser::stack_symbol_type&
  DataFuncPrototypeParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.move< DataFuncProto* > (that.value);
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        value.move< MC::EModifier > (that.value);
        break;

      case 5: // "bool"
        value.move< bool > (that.value);
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        value.move< const_value > (that.value);
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.move< double > (that.value);
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.move< int > (that.value);
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.move< long long > (that.value);
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        value.move< std::string > (that.value);
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.move< std::vector<DataFuncProto*> > (that.value);
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.move< std::vector<std::string> > (that.value);
        break;

      case 128: // modifiers
        value.move< uint32_t > (that.value);
        break;

      case 22: // "null"
        value.move< void* > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  DataFuncPrototypeParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  DataFuncPrototypeParser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  DataFuncPrototypeParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  DataFuncPrototypeParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  DataFuncPrototypeParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  DataFuncPrototypeParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  DataFuncPrototypeParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  DataFuncPrototypeParser::debug_level_type
  DataFuncPrototypeParser::debug_level () const
  {
    return yydebug_;
  }

  void
  DataFuncPrototypeParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  DataFuncPrototypeParser::state_type
  DataFuncPrototypeParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  DataFuncPrototypeParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  DataFuncPrototypeParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  DataFuncPrototypeParser::operator() ()
  {
    return parse ();
  }

  int
  DataFuncPrototypeParser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        yylhs.value.emplace< DataFuncProto* > ();
        break;

      case 3: // ABSTRACT
      case 9: // FINAL
      case 21: // NATIVE
      case 25: // PRIVATE
      case 26: // PROTECTED
      case 27: // PUBLIC
      case 32: // STATIC
      case 35: // SYNCHRONIZED
      case 36: // TRANSIENT
      case 37: // VOLATILE
      case 129: // modifier
        yylhs.value.emplace< MC::EModifier > ();
        break;

      case 5: // "bool"
        yylhs.value.emplace< bool > ();
        break;

      case 106: // opt_value
      case 107: // value
      case 108: // const_expression
      case 109: // expression
      case 110: // shift_expression
      case 111: // additive_expression
      case 112: // multiplicative_expression
      case 113: // unary_expression
      case 114: // unary_expression_not_plus_minus
      case 115: // postfix_expression
      case 116: // primary
      case 117: // primary_no_new_array
      case 122: // literal
        yylhs.value.emplace< const_value > ();
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        yylhs.value.emplace< double > ();
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        yylhs.value.emplace< int > ();
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        yylhs.value.emplace< long long > ();
        break;

      case 4: // BOOLEAN
      case 6: // BYTE
      case 7: // CHAR
      case 8: // DOUBLE
      case 10: // FLOAT
      case 11: // VOID
      case 16: // "identifier"
      case 18: // INT
      case 19: // LONG
      case 20: // GENERIC
      case 28: // SHORT
      case 33: // STRING
      case 34: // "string"
      case 93: // overloading_operator
      case 101: // name
      case 105: // param
      case 123: // type
      case 124: // primitive_type
      case 125: // numeric_type
      case 126: // integral_type
      case 127: // floating_point_type
        yylhs.value.emplace< std::string > ();
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        yylhs.value.emplace< std::vector<DataFuncProto*> > ();
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        yylhs.value.emplace< std::vector<std::string> > ();
        break;

      case 128: // modifiers
        yylhs.value.emplace< uint32_t > ();
        break;

      case 22: // "null"
        yylhs.value.emplace< void* > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 4:
#line 203 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = std::vector<DataFuncProto*>();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[1].value.as < DataFuncProto* > ());
									*(compiler.data_func_protos) = yylhs.value.as < std::vector<DataFuncProto*> > ();
}
#line 1445 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 5:
#line 208 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::vector<DataFuncProto*> > () = std::vector<DataFuncProto*>();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[1].value.as < DataFuncProto* > ());
									*(compiler.data_func_protos) = yylhs.value.as < std::vector<DataFuncProto*> > ();
}
#line 1454 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 6:
#line 212 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::vector<DataFuncProto*> > () = std::vector<DataFuncProto*>();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[1].value.as < DataFuncProto* > ());
									*(compiler.data_func_protos) = yylhs.value.as < std::vector<DataFuncProto*> > ();
}
#line 1463 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 7:
#line 216 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = yystack_[1].value.as < std::vector<DataFuncProto*> > ();
									*(compiler.data_func_protos) = yylhs.value.as < std::vector<DataFuncProto*> > ();
}
#line 1472 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 8:
#line 220 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = yystack_[1].value.as < std::vector<DataFuncProto*> > ();
									*(compiler.data_func_protos) = yylhs.value.as < std::vector<DataFuncProto*> > ();
}
#line 1481 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 9:
#line 224 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = yystack_[1].value.as < std::vector<DataFuncProto*> > ();
									*(compiler.data_func_protos) = yylhs.value.as < std::vector<DataFuncProto*> > ();
}
#line 1490 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 10:
#line 231 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {printf("data\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(DATA_PROTO, yystack_[3].value.as < uint32_t > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > (), yystack_[0].value.as < const_value > ());}
#line 1496 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 11:
#line 232 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {printf("data\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(DATA_PROTO, PRIVATE_MODIFIER, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > (), yystack_[0].value.as < const_value > ());}
#line 1502 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 12:
#line 235 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = yystack_[2].value.as < std::vector<DataFuncProto*> > ();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[0].value.as < DataFuncProto* > ());
}
#line 1511 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 13:
#line 239 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = std::vector<DataFuncProto*>();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[0].value.as < DataFuncProto* > ());
}
#line 1520 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 14:
#line 244 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$+");}
#line 1526 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 15:
#line 245 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$-");}
#line 1532 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 16:
#line 246 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$*");}
#line 1538 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 17:
#line 247 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$/");}
#line 1544 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 18:
#line 248 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$%");}
#line 1550 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 19:
#line 249 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$=");}
#line 1556 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 20:
#line 250 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$&&");}
#line 1562 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 21:
#line 251 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$||");}
#line 1568 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 22:
#line 252 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$!");}
#line 1574 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 23:
#line 253 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$>");}
#line 1580 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 24:
#line 254 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$>=");}
#line 1586 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 25:
#line 255 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$<");}
#line 1592 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 26:
#line 256 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$<=");}
#line 1598 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 27:
#line 257 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$==");}
#line 1604 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 28:
#line 258 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$!=");}
#line 1610 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 29:
#line 259 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$<<");}
#line 1616 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 30:
#line 260 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$>>");}
#line 1622 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 31:
#line 261 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$>>>");}
#line 1628 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 32:
#line 262 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$&");}
#line 1634 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 33:
#line 263 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$^");}
#line 1640 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 34:
#line 264 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$|");}
#line 1646 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 35:
#line 267 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$++");}
#line 1652 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 36:
#line 268 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$--");}
#line 1658 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 37:
#line 269 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$+=");}
#line 1664 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 38:
#line 270 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$-=");}
#line 1670 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 39:
#line 271 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$*=");}
#line 1676 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 40:
#line 272 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$/=");}
#line 1682 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 41:
#line 273 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$%=");}
#line 1688 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 42:
#line 274 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$<<=");}
#line 1694 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 43:
#line 275 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$>>=");}
#line 1700 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 44:
#line 276 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$>>>=");}
#line 1706 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 45:
#line 277 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$&=");}
#line 1712 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 46:
#line 278 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$|=");}
#line 1718 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 47:
#line 279 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$^=");}
#line 1724 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 48:
#line 280 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$[]");}
#line 1730 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 49:
#line 281 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$()");}
#line 1736 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 50:
#line 282 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = std::string("$~");}
#line 1742 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 51:
#line 286 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
				printf("func\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(yystack_[6].value.as < uint32_t > (), yystack_[5].value.as < std::string > (), yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());
}
#line 1750 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 52:
#line 289 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
				yylhs.value.as < DataFuncProto* > () = new DataFuncProto(yystack_[5].value.as < uint32_t > (), yystack_[4].value.as < std::string > (), yystack_[2].value.as < std::string > (), std::string("void"));
}
#line 1758 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 53:
#line 292 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
				printf("func\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PRIVATE_MODIFIER, yystack_[5].value.as < std::string > (), yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());
}
#line 1766 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 54:
#line 295 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
   yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PRIVATE_MODIFIER, yystack_[4].value.as < std::string > (), yystack_[2].value.as < std::string > (), std::string("void"));
}
#line 1774 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 55:
#line 300 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = yystack_[2].value.as < std::vector<DataFuncProto*> > ();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[0].value.as < DataFuncProto* > ());
}
#line 1783 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 56:
#line 304 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
								yylhs.value.as < std::vector<DataFuncProto*> > () = std::vector<DataFuncProto*>();
								yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[0].value.as < DataFuncProto* > ());
}
#line 1792 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 57:
#line 311 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {printf("func\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(yystack_[5].value.as < uint32_t > (), yystack_[4].value.as < std::string > (), yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());}
#line 1798 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 58:
#line 312 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(yystack_[4].value.as < uint32_t > (), yystack_[3].value.as < std::string > (), yystack_[2].value.as < std::string > (), std::string("void"));}
#line 1804 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 59:
#line 313 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {printf("func\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PRIVATE_MODIFIER, yystack_[4].value.as < std::string > (), yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());}
#line 1810 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 60:
#line 314 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PRIVATE_MODIFIER, yystack_[3].value.as < std::string > (), yystack_[2].value.as < std::string > (), std::string("void"));}
#line 1816 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 61:
#line 317 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = yystack_[2].value.as < std::vector<DataFuncProto*> > ();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[0].value.as < DataFuncProto* > ());
}
#line 1825 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 62:
#line 321 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
									yylhs.value.as < std::vector<DataFuncProto*> > () = std::vector<DataFuncProto*>();
									yylhs.value.as < std::vector<DataFuncProto*> > ().push_back(yystack_[0].value.as < DataFuncProto* > ());
}
#line 1834 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 63:
#line 328 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {printf("func\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(yystack_[4].value.as < uint32_t > (), yystack_[3].value.as < std::string > (), yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());}
#line 1840 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 64:
#line 329 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(yystack_[3].value.as < uint32_t > (), yystack_[2].value.as < std::string > (), yystack_[2].value.as < std::string > (), std::string("void"));}
#line 1846 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 65:
#line 330 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {printf("func\n");yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PRIVATE_MODIFIER, yystack_[3].value.as < std::string > (), yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::vector<std::string> > ());}
#line 1852 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 66:
#line 331 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PRIVATE_MODIFIER, yystack_[2].value.as < std::string > (), yystack_[2].value.as < std::string > (), std::string("void"));}
#line 1858 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 67:
#line 336 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PROPERTY_PROTO, yystack_[4].value.as < uint32_t > (), yystack_[3].value.as < std::string > (), yystack_[2].value.as < std::string > (), yystack_[0].value.as < const_value > ());
									
}
#line 1866 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 68:
#line 339 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(PROPERTY_PROTO, PRIVATE_MODIFIER, yystack_[3].value.as < std::string > (), yystack_[2].value.as < std::string > (), yystack_[0].value.as < const_value > ());}
#line 1872 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 69:
#line 345 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(CONST_PROTO, yystack_[4].value.as < uint32_t > (), yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > (), yystack_[0].value.as < const_value > ());
									
}
#line 1880 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 70:
#line 348 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < DataFuncProto* > () = new DataFuncProto(CONST_PROTO, PRIVATE_MODIFIER, yystack_[2].value.as < std::string > (), yystack_[1].value.as < std::string > (), yystack_[0].value.as < const_value > ());}
#line 1886 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 71:
#line 352 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 1892 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 72:
#line 355 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::vector<std::string> > () = yystack_[0].value.as < std::vector<std::string> > ();}
#line 1898 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 73:
#line 356 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::vector<std::string> > () = yystack_[0].value.as < std::vector<std::string> > ();}
#line 1904 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 74:
#line 359 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
		yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>();
		yylhs.value.as < std::vector<std::string> > ().push_back("...");
}
#line 1913 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 75:
#line 363 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
		yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > ();
		yylhs.value.as < std::vector<std::string> > ().push_back("...");
		}
#line 1922 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 76:
#line 368 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
		yylhs.value.as < std::vector<std::string> > () = yystack_[2].value.as < std::vector<std::string> > ();
		yylhs.value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ());
		}
#line 1931 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 77:
#line 372 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
		yylhs.value.as < std::vector<std::string> > () = std::vector<std::string>();
		yylhs.value.as < std::vector<std::string> > ().push_back(yystack_[0].value.as < std::string > ());
		}
#line 1940 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 78:
#line 378 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 1946 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 79:
#line 379 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > ();}
#line 1952 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 80:
#line 382 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 1958 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 81:
#line 383 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = NULL;}
#line 1964 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 82:
#line 386 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 1970 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 83:
#line 389 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 1976 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 84:
#line 392 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 1982 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 85:
#line 395 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 1988 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 86:
#line 396 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () << yystack_[0].value.as < const_value > ();}
#line 1994 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 87:
#line 397 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () >> yystack_[0].value.as < const_value > ();}
#line 2000 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 88:
#line 398 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {unsigned long left = (unsigned long)yystack_[2].value.as < const_value > ();
																 unsigned long right = (unsigned long)yystack_[0].value.as < const_value > ();
																 unsigned long val = left >> right;
																 yylhs.value.as < const_value > () = const_value((long)val);}
#line 2009 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 89:
#line 404 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2015 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 90:
#line 405 "datafuncprototype.grammar.yy" // lalr1.cc:919
    { yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () + yystack_[0].value.as < const_value > ();}
#line 2021 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 91:
#line 406 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () - yystack_[0].value.as < const_value > ();}
#line 2027 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 92:
#line 409 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2033 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 93:
#line 410 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () * yystack_[0].value.as < const_value > ();}
#line 2039 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 94:
#line 411 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {{yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () / yystack_[0].value.as < const_value > ();}}
#line 2045 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 95:
#line 412 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {{yylhs.value.as < const_value > () = yystack_[2].value.as < const_value > () % yystack_[0].value.as < const_value > ();}}
#line 2051 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 96:
#line 414 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2057 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 97:
#line 415 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = -yystack_[0].value.as < const_value > ();}
#line 2063 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 98:
#line 416 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2069 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 99:
#line 420 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2075 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 100:
#line 421 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = ~yystack_[0].value.as < const_value > ();}
#line 2081 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 101:
#line 422 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = !yystack_[0].value.as < const_value > ();}
#line 2087 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 102:
#line 425 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2093 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 103:
#line 428 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = yystack_[0].value.as < const_value > ();}
#line 2099 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 104:
#line 431 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > ()  = yystack_[0].value.as < const_value > ();}
#line 2105 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 105:
#line 432 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > ()  = yystack_[1].value.as < const_value > ();}
#line 2111 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 106:
#line 435 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < int > () = yystack_[0].value.as < int > ();}
#line 2117 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 107:
#line 436 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < int > () = yystack_[0].value.as < int > ();}
#line 2123 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 108:
#line 437 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < int > () = yystack_[0].value.as < int > ();}
#line 2129 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 109:
#line 438 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < int > () = yystack_[0].value.as < int > ();}
#line 2135 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 110:
#line 441 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < long long > () = yystack_[0].value.as < long long > ();}
#line 2141 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 111:
#line 442 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < long long > () = yystack_[0].value.as < long long > ();}
#line 2147 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 112:
#line 445 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < double > () = yystack_[0].value.as < double > ();}
#line 2153 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 113:
#line 446 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < double > () = yystack_[0].value.as < double > ();}
#line 2159 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 114:
#line 449 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < long long > () = yystack_[0].value.as < long long > ();}
#line 2165 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 115:
#line 450 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < long long > () = yystack_[0].value.as < long long > ();}
#line 2171 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 116:
#line 451 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < long long > () = yystack_[0].value.as < long long > ();}
#line 2177 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 117:
#line 454 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = const_value(yystack_[0].value.as < long long > ());}
#line 2183 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 118:
#line 455 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = const_value(yystack_[0].value.as < double > ());}
#line 2189 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 119:
#line 456 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = const_value(yystack_[0].value.as < bool > ());}
#line 2195 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 120:
#line 457 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = const_value(yystack_[0].value.as < int > ());}
#line 2201 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 121:
#line 458 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = const_value(yystack_[0].value.as < std::string > ());}
#line 2207 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 122:
#line 459 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < const_value > () = const_value(yystack_[0].value.as < void* > ());}
#line 2213 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 123:
#line 462 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2219 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 124:
#line 463 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2225 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 125:
#line 466 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2231 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 126:
#line 467 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2237 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 127:
#line 468 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2243 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 128:
#line 469 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2249 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 129:
#line 472 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2255 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 130:
#line 473 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2261 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 131:
#line 476 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2267 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 132:
#line 477 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2273 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 133:
#line 478 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2279 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 134:
#line 479 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2285 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 135:
#line 480 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2291 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 136:
#line 481 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2297 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 137:
#line 484 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2303 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 138:
#line 485 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();}
#line 2309 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 139:
#line 490 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < uint32_t > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2315 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 140:
#line 491 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {
	yylhs.value.as < uint32_t > () = yystack_[1].value.as < uint32_t > (); 
	yylhs.value.as < uint32_t > () |= yystack_[0].value.as < MC::EModifier > ();
	printf("complete modifiers multiple\n");
}
#line 2325 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 141:
#line 498 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2331 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 142:
#line 499 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2337 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 143:
#line 500 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2343 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 144:
#line 501 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2349 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 145:
#line 502 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2355 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 146:
#line 503 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2361 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 147:
#line 504 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2367 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 148:
#line 505 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2373 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 149:
#line 506 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2379 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;

  case 150:
#line 507 "datafuncprototype.grammar.yy" // lalr1.cc:919
    {yylhs.value.as < MC::EModifier > () = yystack_[0].value.as < MC::EModifier > ();}
#line 2385 "datafuncprototype.grammar.cc" // lalr1.cc:919
    break;


#line 2389 "datafuncprototype.grammar.cc" // lalr1.cc:919
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  DataFuncPrototypeParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  DataFuncPrototypeParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char DataFuncPrototypeParser::yypact_ninf_ = -128;

  const signed char DataFuncPrototypeParser::yytable_ninf_ = -72;

  const short
  DataFuncPrototypeParser::yypact_[] =
  {
      21,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,   -75,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,   451,     7,   -31,   -24,  -128,   -19,  -128,
      -6,  -128,   -31,   -31,   -40,   -15,  -128,  -128,  -128,  -128,
      63,  -128,  -128,    39,  -128,  -128,  -128,   417,  -128,   417,
    -128,   336,  -128,  -128,  -128,    99,  -128,   341,    33,   451,
     -17,    -4,  -128,    12,  -128,    30,   417,  -128,    39,   417,
    -128,   336,  -128,  -128,     8,  -128,    52,  -128,    81,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,    31,    35,    38,   304,   129,    73,
    -128,    39,   157,   341,    46,   304,  -128,    87,    53,    39,
    -128,   274,  -128,  -128,  -128,   176,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,   304,
     304,   304,   304,   304,  -128,  -128,   -14,    59,     6,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
      51,  -128,    12,  -128,    55,    64,   209,    73,  -128,  -128,
      66,  -128,  -128,  -128,    71,  -128,  -128,  -128,  -128,    74,
     304,   304,   304,   304,   304,   304,   304,   304,  -128,  -128,
    -128,   241,  -128,    75,  -128,  -128,  -128,    59,    59,    59,
       6,     6,  -128,  -128,  -128,  -128,    76,  -128,  -128
  };

  const unsigned char
  DataFuncPrototypeParser::yydefact_[] =
  {
       0,   145,   126,   131,   136,   138,   146,   137,   128,   124,
     133,   134,   135,   147,   143,   142,   141,   132,   144,   127,
     148,   149,   150,     0,     0,     3,     3,    13,     3,    56,
       3,    62,     3,     3,     0,     0,   123,   125,   129,   130,
       0,   139,   124,     0,     1,     2,     4,     2,     9,     2,
       8,     2,     7,     6,     5,     0,    71,     0,    81,     0,
       0,     0,   140,     0,    12,     0,     0,    55,     0,     0,
      61,     0,    66,    74,     0,    72,    73,    77,    78,    50,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,    81,
      11,     0,     0,     0,    81,     0,    70,     0,     0,     0,
      65,     0,    79,    48,    49,     0,   119,   112,   113,   109,
     115,   106,   122,   108,   116,   107,   111,   110,   121,     0,
       0,     0,     0,     0,    80,    83,    84,    85,    89,    92,
      98,    99,   102,   103,   120,   114,   118,   117,   104,    60,
       0,    68,     0,    64,     0,     0,     0,    81,    10,    82,
       0,    75,    76,    54,     0,   100,    96,    97,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    69,
      63,     0,    58,     0,    67,    53,   105,    86,    87,    88,
      90,    91,    93,    94,    95,    52,     0,    57,    51
  };

  const short
  DataFuncPrototypeParser::yypgoto_[] =
  {
    -128,   -12,  -128,  -128,  -128,    28,   105,  -128,   107,  -128,
     108,  -128,  -128,   -35,  -116,  -128,  -128,    27,  -115,    -3,
      41,    17,  -128,  -127,   -65,   -74,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,   174,  -128,  -128,  -128,  -128,
     -36,    72
  };

  const short
  DataFuncPrototypeParser::yydefgoto_[] =
  {
      -1,    46,    24,    25,    26,   116,    27,    28,    29,    30,
      31,    32,    33,    34,    74,    75,    76,    77,   120,   126,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,    78,    36,    37,    38,    39,
      40,    41
  };

  const short
  DataFuncPrototypeParser::yytable_[] =
  {
      58,    56,   170,   -71,   171,    60,   174,    44,    63,   178,
      45,    66,    56,    69,    48,    71,    50,    47,    52,   184,
      53,    54,    49,    57,     1,     2,   124,     3,     4,     5,
       6,     7,     8,   128,   123,    51,    60,     9,    55,    10,
      11,    12,    13,   190,   191,   192,    14,    15,    16,    17,
     195,   196,   197,    18,    19,    56,    20,    21,    22,   125,
     203,   122,   204,   207,   208,   209,     1,     2,    57,     3,
       4,     5,     6,     7,     8,   185,   186,   187,   188,     9,
     117,    10,    11,    12,    13,   216,   172,   130,    14,    15,
      16,    17,   131,   117,   180,    18,    19,   132,    20,    21,
      22,   193,   194,     2,    23,     3,     4,     5,   133,     7,
       8,   118,    62,   119,   134,    42,   135,    10,    11,    12,
     117,   212,   213,   214,   176,   123,   177,    17,   210,   211,
     198,   118,    19,     2,   200,     3,     4,     5,    62,     7,
       8,    62,   201,    62,   176,    42,    59,    10,    11,    12,
     205,   175,    64,   206,   217,   218,    67,    17,   182,    70,
       0,     2,    19,     3,     4,     5,   179,     7,     8,   199,
     189,     0,     0,    42,    35,    10,    11,    12,    72,     0,
       2,    73,     3,     4,     5,    17,     7,     8,     0,     0,
      19,     0,    42,     0,    10,    11,    12,    43,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,   169,    19,
       0,    73,     0,     2,    61,     3,     4,     5,     0,     7,
       8,    65,     0,    68,     0,    42,     0,    10,    11,    12,
       0,     0,     0,   121,     0,     0,   173,    17,     0,    73,
     127,     0,    19,   129,     0,     2,     0,     3,     4,     5,
       0,     7,     8,     0,     0,   183,     0,    42,    73,    10,
      11,    12,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,    19,     0,     0,     0,     2,     0,
       3,     4,     5,     0,     7,     8,     0,     0,   202,     0,
      42,    73,    10,    11,    12,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    19,     0,   136,
       0,     0,     0,     0,     0,     0,   137,   138,   139,   140,
     215,   141,     0,    73,     0,     0,   142,   143,   144,     0,
       0,     0,     0,   145,   146,   147,     0,     0,   148,     1,
       0,     0,     0,   149,     0,     6,   150,   151,     0,     0,
       0,     0,    56,     0,   152,     0,   181,    13,     0,     0,
       0,    14,    15,    16,     0,     0,     0,     0,    18,     0,
       0,    20,    21,    22,     0,     0,     0,     0,     0,     0,
      79,     0,   153,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,   115,
       1,     2,     0,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,    42,     0,    10,    11,    12,    13,     0,
       0,     0,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,     2,     0,     3,     4,     5,
       0,     7,     8,     0,     0,     0,     0,    42,     0,    10,
      11,    12,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,    19
  };

  const short
  DataFuncPrototypeParser::yycheck_[] =
  {
      35,    16,   118,    78,   119,    40,   122,     0,    43,   124,
      41,    47,    16,    49,    26,    51,    28,    41,    30,   135,
      32,    33,    41,    38,     3,     4,    61,     6,     7,     8,
       9,    10,    11,    68,    38,    41,    71,    16,    78,    18,
      19,    20,    21,    57,    58,    59,    25,    26,    27,    28,
      44,    45,    46,    32,    33,    16,    35,    36,    37,    47,
     176,    78,   177,   190,   191,   192,     3,     4,    38,     6,
       7,     8,     9,    10,    11,   149,   150,   151,   152,    16,
      47,    18,    19,    20,    21,   201,   121,    79,    25,    26,
      27,    28,    40,    47,   129,    32,    33,    16,    35,    36,
      37,    42,    43,     4,    83,     6,     7,     8,    77,    10,
      11,    78,    40,    80,    79,    16,    78,    18,    19,    20,
      47,   195,   196,   197,    78,    38,    80,    28,   193,   194,
      79,    78,    33,     4,    79,     6,     7,     8,    66,    10,
      11,    69,    78,    71,    78,    16,    83,    18,    19,    20,
      79,   123,    47,    79,    79,    79,    49,    28,   131,    51,
      -1,     4,    33,     6,     7,     8,   125,    10,    11,   172,
     153,    -1,    -1,    16,     0,    18,    19,    20,    79,    -1,
       4,    82,     6,     7,     8,    28,    10,    11,    -1,    -1,
      33,    -1,    16,    -1,    18,    19,    20,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    79,    33,
      -1,    82,    -1,     4,    40,     6,     7,     8,    -1,    10,
      11,    47,    -1,    49,    -1,    16,    -1,    18,    19,    20,
      -1,    -1,    -1,    59,    -1,    -1,    79,    28,    -1,    82,
      66,    -1,    33,    69,    -1,     4,    -1,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    79,    -1,    16,    82,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    79,    -1,
      16,    82,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      79,    17,    -1,    82,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    -1,    34,     3,
      -1,    -1,    -1,    39,    -1,     9,    42,    43,    -1,    -1,
      -1,    -1,    16,    -1,    50,    -1,    82,    21,    -1,    -1,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    78,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    -1,    35,    36,    37,     4,    -1,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33
  };

  const unsigned char
  DataFuncPrototypeParser::yystos_[] =
  {
       0,     3,     4,     6,     7,     8,     9,    10,    11,    16,
      18,    19,    20,    21,    25,    26,    27,    28,    32,    33,
      35,    36,    37,    83,    90,    91,    92,    94,    95,    96,
      97,    98,    99,   100,   101,   123,   124,   125,   126,   127,
     128,   129,    16,   123,     0,    41,    89,    41,    89,    41,
      89,    41,    89,    89,    89,    78,    16,    38,   101,    83,
     101,   123,   129,   101,    94,   123,   128,    96,   123,   128,
      98,   128,    79,    82,   102,   103,   104,   105,   123,    39,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    78,    93,    47,    78,    80,
     106,   123,    78,    38,   101,    47,   107,   123,   101,   123,
      79,    40,    16,    77,    79,    78,     5,    12,    13,    14,
      15,    17,    22,    23,    24,    29,    30,    31,    34,    39,
      42,    43,    50,    78,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    79,
     102,   106,   101,    79,   102,    93,    78,    80,   106,   108,
     101,    82,   105,    79,   102,   113,   113,   113,   113,   109,
      57,    58,    59,    42,    43,    44,    45,    46,    79,   107,
      79,    78,    79,   102,   106,    79,    79,   111,   111,   111,
     112,   112,   113,   113,   113,    79,   102,    79,    79
  };

  const unsigned char
  DataFuncPrototypeParser::yyr1_[] =
  {
       0,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   108,   109,   110,   110,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   113,   113,   113,   114,
     114,   114,   115,   116,   117,   117,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   122,   122,   122,
     122,   122,   122,   123,   123,   124,   124,   124,   124,   125,
     125,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129
  };

  const unsigned char
  DataFuncPrototypeParser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     2,     2,     2,     2,     2,
       4,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     7,     6,     6,     5,     3,     1,     6,     5,     5,
       4,     3,     1,     5,     4,     4,     3,     5,     4,     5,
       4,     1,     1,     1,     1,     3,     3,     1,     1,     2,
       2,     0,     2,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const DataFuncPrototypeParser::yytname_[] =
  {
  "$end", "error", "$undefined", "ABSTRACT", "BOOLEAN", "\"bool\"",
  "BYTE", "CHAR", "DOUBLE", "FINAL", "FLOAT", "VOID", "\"floatliteral\"",
  "FLOATING_POINT_LITERAL_EXPONENT", "HEX_ESCAPE_CHAR_LITERAL",
  "HEX_INTEGER_LITERAL", "\"identifier\"", "INDIRECT_CHAR_LITERAL", "INT",
  "LONG", "GENERIC", "NATIVE", "\"null\"", "OCTAL_ESCAPE_CHAR_LITERAL",
  "OCTAL_INTEGER_LITERAL", "PRIVATE", "PROTECTED", "PUBLIC", "SHORT",
  "STANDARD_ESCAPE_CHAR_LITERAL",
  "START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL",
  "START_WITH_ZERO_DECIMAL_INTEGER_LITERAL", "STATIC", "STRING",
  "\"string\"", "SYNCHRONIZED", "TRANSIENT", "VOLATILE", "OPERATOR",
  "TILDE", "COMMA", "SEMI", "PLUS", "MINUS", "TIMES", "DIV", "PERCENT",
  "EQ", "AMP_AMP", "PIPE_PIPE", "EXCLAM", "GT", "GT_EQ", "LT", "LT_EQ",
  "EQ_EQ", "EXCLAM_EQ", "LT_LT", "GT_GT", "GT_GT_GT", "AMP", "CARET",
  "PIPE", "PLUS_PLUS", "MINUS_MINUS", "PLUS_EQ", "MINUS_EQ", "TIMES_EQ",
  "DIV_EQ", "PERCENT_EQ", "LT_LT_EQ", "GT_GT_EQ", "GT_GT_GT_EQ", "AMP_EQ",
  "PIPE_EQ", "CARET_EQ", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN",
  "PROPERTY", "AUTO", "VARARG", "CONST", "ERROR_LEX", "LOWER_THAN_ELSE",
  "ELSE", "LOWER_THAN_LT", "$accept", "opt_semi", "prototypes",
  "data_prototype", "operator_method_prototypes", "overloading_operator",
  "operator_method_prototype", "general_method_prototypes",
  "general_method_prototype", "constructor_or_cast_prototypes",
  "constructor_or_cast_prototype", "property_prototype", "const_prototype",
  "name", "param_list", "param_list_with_vararg",
  "param_list_without_vararg", "param", "opt_value", "value",
  "const_expression", "expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "unary_expression_not_plus_minus", "postfix_expression", "primary",
  "primary_no_new_array", "character_literal", "decimal_integer_literal",
  "float_point_literal", "integer_literal", "literal", "type",
  "primitive_type", "numeric_type", "integral_type", "floating_point_type",
  "modifiers", "modifier", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
  DataFuncPrototypeParser::yyrline_[] =
  {
       0,   199,   199,   200,   203,   208,   212,   216,   220,   224,
     231,   232,   235,   239,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   286,   289,   292,   295,   300,   304,   311,   312,   313,
     314,   317,   321,   328,   329,   330,   331,   336,   339,   345,
     348,   352,   355,   356,   359,   363,   368,   372,   378,   379,
     382,   383,   386,   389,   392,   395,   396,   397,   398,   404,
     405,   406,   409,   410,   411,   412,   414,   415,   416,   420,
     421,   422,   425,   428,   431,   432,   435,   436,   437,   438,
     441,   442,   445,   446,   449,   450,   451,   454,   455,   456,
     457,   458,   459,   462,   463,   466,   467,   468,   469,   472,
     473,   476,   477,   478,   479,   480,   481,   484,   485,   490,
     491,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507
  };

  // Print the state stack on the debug stream.
  void
  DataFuncPrototypeParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  DataFuncPrototypeParser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  DataFuncPrototypeParser::token_number_type
  DataFuncPrototypeParser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
    };
    const unsigned user_token_number_max_ = 342;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 14 "datafuncprototype.grammar.yy" // lalr1.cc:1242
} // MC
#line 3063 "datafuncprototype.grammar.cc" // lalr1.cc:1242
#line 509 "datafuncprototype.grammar.yy" // lalr1.cc:1243



// Bison expects us to provide implementation - otherwise linker complains
void MC::DataFuncPrototypeParser::error(const location_type &l, const std::string& err_message) {
	std::cerr << "Error: " << err_message << " at " << l << "\n";
}
