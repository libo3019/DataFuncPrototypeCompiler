// A Bison parser, made by GNU Bison 3.3.2.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file datafuncprototype.grammar.hh
 ** Define the MC::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_YY_DATAFUNCPROTOTYPE_GRAMMAR_HH_INCLUDED
# define YY_YY_DATAFUNCPROTOTYPE_GRAMMAR_HH_INCLUDED
// //                    "%code requires" blocks.
#line 19 "datafuncprototype.grammar.yy" // lalr1.cc:401

	namespace MC {
		class DataFuncPrototypeCompiler;
        class DataFuncPrototypeScanner;
	}	
	#include <stdint.h>
	#include <vector>
	#include <string>
	#include "const_value.h"
	#include "DataFuncProto.h"

	/* The following definitions is missing when %locations isn't used */
	#ifndef YY_NULLPTR
	 #if defined __cplusplus && 201103L <= __cplusplus
	  #define YY_NULLPTR nullptr
	 #else
	  #define YY_NULLPTR 0
	 #endif
	#endif

#line 69 "datafuncprototype.grammar.hh" // lalr1.cc:401

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YYASSERT
# include <cassert>
# define YYASSERT assert
#endif


#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 14 "datafuncprototype.grammar.yy" // lalr1.cc:401
namespace MC {
#line 185 "datafuncprototype.grammar.hh" // lalr1.cc:401



  /// A Bison parser.
  class DataFuncPrototypeParser
  {
  public:
#ifndef YYSTYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YYASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YYASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YYASSERT (!yytypeid_);
      YYASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == typeid (T));
      YYASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YYASSERT (yytypeid_);
      YYASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator= (const self_type&);
    semantic_type (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // data_prototype
      // operator_method_prototype
      // general_method_prototype
      // constructor_or_cast_prototype
      // property_prototype
      // const_prototype
      char dummy1[sizeof (DataFuncProto*)];

      // ABSTRACT
      // FINAL
      // NATIVE
      // PRIVATE
      // PROTECTED
      // PUBLIC
      // STATIC
      // SYNCHRONIZED
      // TRANSIENT
      // VOLATILE
      // modifier
      char dummy2[sizeof (MC::EModifier)];

      // "bool"
      char dummy3[sizeof (bool)];

      // opt_value
      // value
      // const_expression
      // expression
      // shift_expression
      // additive_expression
      // multiplicative_expression
      // unary_expression
      // unary_expression_not_plus_minus
      // postfix_expression
      // primary
      // primary_no_new_array
      // literal
      char dummy4[sizeof (const_value)];

      // "floatliteral"
      // FLOATING_POINT_LITERAL_EXPONENT
      // float_point_literal
      char dummy5[sizeof (double)];

      // HEX_ESCAPE_CHAR_LITERAL
      // INDIRECT_CHAR_LITERAL
      // OCTAL_ESCAPE_CHAR_LITERAL
      // STANDARD_ESCAPE_CHAR_LITERAL
      // character_literal
      char dummy6[sizeof (int)];

      // HEX_INTEGER_LITERAL
      // OCTAL_INTEGER_LITERAL
      // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      // decimal_integer_literal
      // integer_literal
      char dummy7[sizeof (long long)];

      // BOOLEAN
      // BYTE
      // CHAR
      // DOUBLE
      // FLOAT
      // VOID
      // "identifier"
      // INT
      // LONG
      // GENERIC
      // SHORT
      // STRING
      // "string"
      // overloading_operator
      // name
      // param
      // type
      // primitive_type
      // numeric_type
      // integral_type
      // floating_point_type
      char dummy8[sizeof (std::string)];

      // prototypes
      // operator_method_prototypes
      // general_method_prototypes
      // constructor_or_cast_prototypes
      char dummy9[sizeof (std::vector<DataFuncProto*>)];

      // param_list
      // param_list_with_vararg
      // param_list_without_vararg
      char dummy10[sizeof (std::vector<std::string>)];

      // modifiers
      char dummy11[sizeof (uint32_t)];

      // "null"
      char dummy12[sizeof (void*)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        ABSTRACT = 258,
        BOOLEAN = 259,
        BOOLEAN_LITERAL = 260,
        BYTE = 261,
        CHAR = 262,
        DOUBLE = 263,
        FINAL = 264,
        FLOAT = 265,
        VOID = 266,
        FLOATING_POINT_LITERAL = 267,
        FLOATING_POINT_LITERAL_EXPONENT = 268,
        HEX_ESCAPE_CHAR_LITERAL = 269,
        HEX_INTEGER_LITERAL = 270,
        IDENTIFIER = 271,
        INDIRECT_CHAR_LITERAL = 272,
        INT = 273,
        LONG = 274,
        GENERIC = 275,
        NATIVE = 276,
        NULL_LITERAL = 277,
        OCTAL_ESCAPE_CHAR_LITERAL = 278,
        OCTAL_INTEGER_LITERAL = 279,
        PRIVATE = 280,
        PROTECTED = 281,
        PUBLIC = 282,
        SHORT = 283,
        STANDARD_ESCAPE_CHAR_LITERAL = 284,
        START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL = 285,
        START_WITH_ZERO_DECIMAL_INTEGER_LITERAL = 286,
        STATIC = 287,
        STRING = 288,
        STRING_LITERAL = 289,
        SYNCHRONIZED = 290,
        TRANSIENT = 291,
        VOLATILE = 292,
        OPERATOR = 293,
        TILDE = 294,
        COMMA = 295,
        SEMI = 296,
        PLUS = 297,
        MINUS = 298,
        TIMES = 299,
        DIV = 300,
        PERCENT = 301,
        EQ = 302,
        AMP_AMP = 303,
        PIPE_PIPE = 304,
        EXCLAM = 305,
        GT = 306,
        GT_EQ = 307,
        LT = 308,
        LT_EQ = 309,
        EQ_EQ = 310,
        EXCLAM_EQ = 311,
        LT_LT = 312,
        GT_GT = 313,
        GT_GT_GT = 314,
        AMP = 315,
        CARET = 316,
        PIPE = 317,
        PLUS_PLUS = 318,
        MINUS_MINUS = 319,
        PLUS_EQ = 320,
        MINUS_EQ = 321,
        TIMES_EQ = 322,
        DIV_EQ = 323,
        PERCENT_EQ = 324,
        LT_LT_EQ = 325,
        GT_GT_EQ = 326,
        GT_GT_GT_EQ = 327,
        AMP_EQ = 328,
        PIPE_EQ = 329,
        CARET_EQ = 330,
        LBRACKET = 331,
        RBRACKET = 332,
        LPAREN = 333,
        RPAREN = 334,
        PROPERTY = 335,
        AUTO = 336,
        VARARG = 337,
        CONST = 338,
        ERROR_LEX = 339,
        LOWER_THAN_ELSE = 340,
        ELSE = 341,
        LOWER_THAN_LT = 342
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, DataFuncProto*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const DataFuncProto*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, MC::EModifier&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const MC::EModifier& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, bool&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const bool& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, const_value&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const const_value& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, double&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const double& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, long long&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const long long& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<DataFuncProto*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<DataFuncProto*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<std::string>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<std::string>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, uint32_t&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const uint32_t& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, void*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const void*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        // User destructor.
        symbol_number_type yytype = this->type_get ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yytype)
        {
       default:
          break;
        }

        // Type destructor.
switch (yytype)
    {
      case 91: // data_prototype
      case 94: // operator_method_prototype
      case 96: // general_method_prototype
      case 98: // constructor_or_cast_prototype
      case 99: // property_prototype
      case 100: // const_prototype
        value.template destroy< DataFuncProto* > ();
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
        value.template destroy< MC::EModifier > ();
        break;

      case 5: // "bool"
        value.template destroy< bool > ();
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
        value.template destroy< const_value > ();
        break;

      case 12: // "floatliteral"
      case 13: // FLOATING_POINT_LITERAL_EXPONENT
      case 120: // float_point_literal
        value.template destroy< double > ();
        break;

      case 14: // HEX_ESCAPE_CHAR_LITERAL
      case 17: // INDIRECT_CHAR_LITERAL
      case 23: // OCTAL_ESCAPE_CHAR_LITERAL
      case 29: // STANDARD_ESCAPE_CHAR_LITERAL
      case 118: // character_literal
        value.template destroy< int > ();
        break;

      case 15: // HEX_INTEGER_LITERAL
      case 24: // OCTAL_INTEGER_LITERAL
      case 30: // START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL
      case 31: // START_WITH_ZERO_DECIMAL_INTEGER_LITERAL
      case 119: // decimal_integer_literal
      case 121: // integer_literal
        value.template destroy< long long > ();
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
        value.template destroy< std::string > ();
        break;

      case 90: // prototypes
      case 92: // operator_method_prototypes
      case 95: // general_method_prototypes
      case 97: // constructor_or_cast_prototypes
        value.template destroy< std::vector<DataFuncProto*> > ();
        break;

      case 102: // param_list
      case 103: // param_list_with_vararg
      case 104: // param_list_without_vararg
        value.template destroy< std::vector<std::string> > ();
        break;

      case 128: // modifiers
        value.template destroy< uint32_t > ();
        break;

      case 22: // "null"
        value.template destroy< void* > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The token.
      token_type token () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {
      /// Superclass.
      typedef basic_symbol<by_type> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
      {
        YYASSERT (tok == 0 || tok == token::OPERATOR || tok == token::TILDE || tok == token::COMMA || tok == token::SEMI || tok == token::PLUS || tok == token::MINUS || tok == token::TIMES || tok == token::DIV || tok == token::PERCENT || tok == token::EQ || tok == token::AMP_AMP || tok == token::PIPE_PIPE || tok == token::EXCLAM || tok == token::GT || tok == token::GT_EQ || tok == token::LT || tok == token::LT_EQ || tok == token::EQ_EQ || tok == token::EXCLAM_EQ || tok == token::LT_LT || tok == token::GT_GT || tok == token::GT_GT_GT || tok == token::AMP || tok == token::CARET || tok == token::PIPE || tok == token::PLUS_PLUS || tok == token::MINUS_MINUS || tok == token::PLUS_EQ || tok == token::MINUS_EQ || tok == token::TIMES_EQ || tok == token::DIV_EQ || tok == token::PERCENT_EQ || tok == token::LT_LT_EQ || tok == token::GT_GT_EQ || tok == token::GT_GT_GT_EQ || tok == token::AMP_EQ || tok == token::PIPE_EQ || tok == token::CARET_EQ || tok == token::LBRACKET || tok == token::RBRACKET || tok == token::LPAREN || tok == token::RPAREN || tok == token::PROPERTY || tok == token::AUTO || tok == token::VARARG || tok == token::CONST || tok == token::ERROR_LEX || tok == token::LOWER_THAN_ELSE || tok == token::ELSE || tok == token::LOWER_THAN_LT);
      }
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
      {
        YYASSERT (tok == 0 || tok == token::OPERATOR || tok == token::TILDE || tok == token::COMMA || tok == token::SEMI || tok == token::PLUS || tok == token::MINUS || tok == token::TIMES || tok == token::DIV || tok == token::PERCENT || tok == token::EQ || tok == token::AMP_AMP || tok == token::PIPE_PIPE || tok == token::EXCLAM || tok == token::GT || tok == token::GT_EQ || tok == token::LT || tok == token::LT_EQ || tok == token::EQ_EQ || tok == token::EXCLAM_EQ || tok == token::LT_LT || tok == token::GT_GT || tok == token::GT_GT_GT || tok == token::AMP || tok == token::CARET || tok == token::PIPE || tok == token::PLUS_PLUS || tok == token::MINUS_MINUS || tok == token::PLUS_EQ || tok == token::MINUS_EQ || tok == token::TIMES_EQ || tok == token::DIV_EQ || tok == token::PERCENT_EQ || tok == token::LT_LT_EQ || tok == token::GT_GT_EQ || tok == token::GT_GT_GT_EQ || tok == token::AMP_EQ || tok == token::PIPE_EQ || tok == token::CARET_EQ || tok == token::LBRACKET || tok == token::RBRACKET || tok == token::LPAREN || tok == token::RPAREN || tok == token::PROPERTY || tok == token::AUTO || tok == token::VARARG || tok == token::CONST || tok == token::ERROR_LEX || tok == token::LOWER_THAN_ELSE || tok == token::ELSE || tok == token::LOWER_THAN_LT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, MC::EModifier v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::ABSTRACT || tok == token::FINAL || tok == token::NATIVE || tok == token::PRIVATE || tok == token::PROTECTED || tok == token::PUBLIC || tok == token::STATIC || tok == token::SYNCHRONIZED || tok == token::TRANSIENT || tok == token::VOLATILE);
      }
#else
      symbol_type (int tok, const MC::EModifier& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::ABSTRACT || tok == token::FINAL || tok == token::NATIVE || tok == token::PRIVATE || tok == token::PROTECTED || tok == token::PUBLIC || tok == token::STATIC || tok == token::SYNCHRONIZED || tok == token::TRANSIENT || tok == token::VOLATILE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, bool v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::BOOLEAN_LITERAL);
      }
#else
      symbol_type (int tok, const bool& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::BOOLEAN_LITERAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, double v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::FLOATING_POINT_LITERAL || tok == token::FLOATING_POINT_LITERAL_EXPONENT);
      }
#else
      symbol_type (int tok, const double& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::FLOATING_POINT_LITERAL || tok == token::FLOATING_POINT_LITERAL_EXPONENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::HEX_ESCAPE_CHAR_LITERAL || tok == token::INDIRECT_CHAR_LITERAL || tok == token::OCTAL_ESCAPE_CHAR_LITERAL || tok == token::STANDARD_ESCAPE_CHAR_LITERAL);
      }
#else
      symbol_type (int tok, const int& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::HEX_ESCAPE_CHAR_LITERAL || tok == token::INDIRECT_CHAR_LITERAL || tok == token::OCTAL_ESCAPE_CHAR_LITERAL || tok == token::STANDARD_ESCAPE_CHAR_LITERAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, long long v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::HEX_INTEGER_LITERAL || tok == token::OCTAL_INTEGER_LITERAL || tok == token::START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL || tok == token::START_WITH_ZERO_DECIMAL_INTEGER_LITERAL);
      }
#else
      symbol_type (int tok, const long long& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::HEX_INTEGER_LITERAL || tok == token::OCTAL_INTEGER_LITERAL || tok == token::START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL || tok == token::START_WITH_ZERO_DECIMAL_INTEGER_LITERAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::BOOLEAN || tok == token::BYTE || tok == token::CHAR || tok == token::DOUBLE || tok == token::FLOAT || tok == token::VOID || tok == token::IDENTIFIER || tok == token::INT || tok == token::LONG || tok == token::GENERIC || tok == token::SHORT || tok == token::STRING || tok == token::STRING_LITERAL);
      }
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::BOOLEAN || tok == token::BYTE || tok == token::CHAR || tok == token::DOUBLE || tok == token::FLOAT || tok == token::VOID || tok == token::IDENTIFIER || tok == token::INT || tok == token::LONG || tok == token::GENERIC || tok == token::SHORT || tok == token::STRING || tok == token::STRING_LITERAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, void* v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YYASSERT (tok == token::NULL_LITERAL);
      }
#else
      symbol_type (int tok, const void*& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YYASSERT (tok == token::NULL_LITERAL);
      }
#endif
    };

    /// Build a parser object.
    DataFuncPrototypeParser (DataFuncPrototypeScanner &scanner_yyarg, DataFuncPrototypeCompiler &compiler_yyarg);
    virtual ~DataFuncPrototypeParser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ABSTRACT (MC::EModifier v, location_type l)
      {
        return symbol_type (token::ABSTRACT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ABSTRACT (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::ABSTRACT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOLEAN (std::string v, location_type l)
      {
        return symbol_type (token::BOOLEAN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BOOLEAN (const std::string& v, const location_type& l)
      {
        return symbol_type (token::BOOLEAN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOLEAN_LITERAL (bool v, location_type l)
      {
        return symbol_type (token::BOOLEAN_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BOOLEAN_LITERAL (const bool& v, const location_type& l)
      {
        return symbol_type (token::BOOLEAN_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BYTE (std::string v, location_type l)
      {
        return symbol_type (token::BYTE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BYTE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::BYTE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR (std::string v, location_type l)
      {
        return symbol_type (token::CHAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CHAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CHAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE (std::string v, location_type l)
      {
        return symbol_type (token::DOUBLE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::DOUBLE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FINAL (MC::EModifier v, location_type l)
      {
        return symbol_type (token::FINAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FINAL (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::FINAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT (std::string v, location_type l)
      {
        return symbol_type (token::FLOAT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FLOAT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::FLOAT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOID (std::string v, location_type l)
      {
        return symbol_type (token::VOID, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_VOID (const std::string& v, const location_type& l)
      {
        return symbol_type (token::VOID, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOATING_POINT_LITERAL (double v, location_type l)
      {
        return symbol_type (token::FLOATING_POINT_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FLOATING_POINT_LITERAL (const double& v, const location_type& l)
      {
        return symbol_type (token::FLOATING_POINT_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOATING_POINT_LITERAL_EXPONENT (double v, location_type l)
      {
        return symbol_type (token::FLOATING_POINT_LITERAL_EXPONENT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FLOATING_POINT_LITERAL_EXPONENT (const double& v, const location_type& l)
      {
        return symbol_type (token::FLOATING_POINT_LITERAL_EXPONENT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HEX_ESCAPE_CHAR_LITERAL (int v, location_type l)
      {
        return symbol_type (token::HEX_ESCAPE_CHAR_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_HEX_ESCAPE_CHAR_LITERAL (const int& v, const location_type& l)
      {
        return symbol_type (token::HEX_ESCAPE_CHAR_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HEX_INTEGER_LITERAL (long long v, location_type l)
      {
        return symbol_type (token::HEX_INTEGER_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_HEX_INTEGER_LITERAL (const long long& v, const location_type& l)
      {
        return symbol_type (token::HEX_INTEGER_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER (std::string v, location_type l)
      {
        return symbol_type (token::IDENTIFIER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IDENTIFIER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::IDENTIFIER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INDIRECT_CHAR_LITERAL (int v, location_type l)
      {
        return symbol_type (token::INDIRECT_CHAR_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INDIRECT_CHAR_LITERAL (const int& v, const location_type& l)
      {
        return symbol_type (token::INDIRECT_CHAR_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT (std::string v, location_type l)
      {
        return symbol_type (token::INT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::INT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONG (std::string v, location_type l)
      {
        return symbol_type (token::LONG, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LONG (const std::string& v, const location_type& l)
      {
        return symbol_type (token::LONG, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GENERIC (std::string v, location_type l)
      {
        return symbol_type (token::GENERIC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_GENERIC (const std::string& v, const location_type& l)
      {
        return symbol_type (token::GENERIC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NATIVE (MC::EModifier v, location_type l)
      {
        return symbol_type (token::NATIVE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NATIVE (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::NATIVE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NULL_LITERAL (void* v, location_type l)
      {
        return symbol_type (token::NULL_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NULL_LITERAL (const void*& v, const location_type& l)
      {
        return symbol_type (token::NULL_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OCTAL_ESCAPE_CHAR_LITERAL (int v, location_type l)
      {
        return symbol_type (token::OCTAL_ESCAPE_CHAR_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OCTAL_ESCAPE_CHAR_LITERAL (const int& v, const location_type& l)
      {
        return symbol_type (token::OCTAL_ESCAPE_CHAR_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OCTAL_INTEGER_LITERAL (long long v, location_type l)
      {
        return symbol_type (token::OCTAL_INTEGER_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OCTAL_INTEGER_LITERAL (const long long& v, const location_type& l)
      {
        return symbol_type (token::OCTAL_INTEGER_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRIVATE (MC::EModifier v, location_type l)
      {
        return symbol_type (token::PRIVATE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PRIVATE (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::PRIVATE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PROTECTED (MC::EModifier v, location_type l)
      {
        return symbol_type (token::PROTECTED, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PROTECTED (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::PROTECTED, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PUBLIC (MC::EModifier v, location_type l)
      {
        return symbol_type (token::PUBLIC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PUBLIC (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::PUBLIC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SHORT (std::string v, location_type l)
      {
        return symbol_type (token::SHORT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SHORT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::SHORT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STANDARD_ESCAPE_CHAR_LITERAL (int v, location_type l)
      {
        return symbol_type (token::STANDARD_ESCAPE_CHAR_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STANDARD_ESCAPE_CHAR_LITERAL (const int& v, const location_type& l)
      {
        return symbol_type (token::STANDARD_ESCAPE_CHAR_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL (long long v, location_type l)
      {
        return symbol_type (token::START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL (const long long& v, const location_type& l)
      {
        return symbol_type (token::START_WITH_NO_ZERO_DECIMAL_INTEGER_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_START_WITH_ZERO_DECIMAL_INTEGER_LITERAL (long long v, location_type l)
      {
        return symbol_type (token::START_WITH_ZERO_DECIMAL_INTEGER_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_START_WITH_ZERO_DECIMAL_INTEGER_LITERAL (const long long& v, const location_type& l)
      {
        return symbol_type (token::START_WITH_ZERO_DECIMAL_INTEGER_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC (MC::EModifier v, location_type l)
      {
        return symbol_type (token::STATIC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STATIC (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::STATIC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (std::string v, location_type l)
      {
        return symbol_type (token::STRING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING (const std::string& v, const location_type& l)
      {
        return symbol_type (token::STRING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING_LITERAL (std::string v, location_type l)
      {
        return symbol_type (token::STRING_LITERAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING_LITERAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::STRING_LITERAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SYNCHRONIZED (MC::EModifier v, location_type l)
      {
        return symbol_type (token::SYNCHRONIZED, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SYNCHRONIZED (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::SYNCHRONIZED, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRANSIENT (MC::EModifier v, location_type l)
      {
        return symbol_type (token::TRANSIENT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TRANSIENT (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::TRANSIENT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOLATILE (MC::EModifier v, location_type l)
      {
        return symbol_type (token::VOLATILE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_VOLATILE (const MC::EModifier& v, const location_type& l)
      {
        return symbol_type (token::VOLATILE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPERATOR (location_type l)
      {
        return symbol_type (token::OPERATOR, std::move (l));
      }
#else
      static
      symbol_type
      make_OPERATOR (const location_type& l)
      {
        return symbol_type (token::OPERATOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TILDE (location_type l)
      {
        return symbol_type (token::TILDE, std::move (l));
      }
#else
      static
      symbol_type
      make_TILDE (const location_type& l)
      {
        return symbol_type (token::TILDE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (location_type l)
      {
        return symbol_type (token::COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::COMMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMI (location_type l)
      {
        return symbol_type (token::SEMI, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMI (const location_type& l)
      {
        return symbol_type (token::SEMI, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS (location_type l)
      {
        return symbol_type (token::PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS (const location_type& l)
      {
        return symbol_type (token::PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (location_type l)
      {
        return symbol_type (token::MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const location_type& l)
      {
        return symbol_type (token::MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TIMES (location_type l)
      {
        return symbol_type (token::TIMES, std::move (l));
      }
#else
      static
      symbol_type
      make_TIMES (const location_type& l)
      {
        return symbol_type (token::TIMES, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV (location_type l)
      {
        return symbol_type (token::DIV, std::move (l));
      }
#else
      static
      symbol_type
      make_DIV (const location_type& l)
      {
        return symbol_type (token::DIV, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERCENT (location_type l)
      {
        return symbol_type (token::PERCENT, std::move (l));
      }
#else
      static
      symbol_type
      make_PERCENT (const location_type& l)
      {
        return symbol_type (token::PERCENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ (location_type l)
      {
        return symbol_type (token::EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_EQ (const location_type& l)
      {
        return symbol_type (token::EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AMP_AMP (location_type l)
      {
        return symbol_type (token::AMP_AMP, std::move (l));
      }
#else
      static
      symbol_type
      make_AMP_AMP (const location_type& l)
      {
        return symbol_type (token::AMP_AMP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PIPE_PIPE (location_type l)
      {
        return symbol_type (token::PIPE_PIPE, std::move (l));
      }
#else
      static
      symbol_type
      make_PIPE_PIPE (const location_type& l)
      {
        return symbol_type (token::PIPE_PIPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXCLAM (location_type l)
      {
        return symbol_type (token::EXCLAM, std::move (l));
      }
#else
      static
      symbol_type
      make_EXCLAM (const location_type& l)
      {
        return symbol_type (token::EXCLAM, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT (location_type l)
      {
        return symbol_type (token::GT, std::move (l));
      }
#else
      static
      symbol_type
      make_GT (const location_type& l)
      {
        return symbol_type (token::GT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT_EQ (location_type l)
      {
        return symbol_type (token::GT_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_GT_EQ (const location_type& l)
      {
        return symbol_type (token::GT_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT (location_type l)
      {
        return symbol_type (token::LT, std::move (l));
      }
#else
      static
      symbol_type
      make_LT (const location_type& l)
      {
        return symbol_type (token::LT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT_EQ (location_type l)
      {
        return symbol_type (token::LT_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_LT_EQ (const location_type& l)
      {
        return symbol_type (token::LT_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ_EQ (location_type l)
      {
        return symbol_type (token::EQ_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_EQ_EQ (const location_type& l)
      {
        return symbol_type (token::EQ_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXCLAM_EQ (location_type l)
      {
        return symbol_type (token::EXCLAM_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_EXCLAM_EQ (const location_type& l)
      {
        return symbol_type (token::EXCLAM_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT_LT (location_type l)
      {
        return symbol_type (token::LT_LT, std::move (l));
      }
#else
      static
      symbol_type
      make_LT_LT (const location_type& l)
      {
        return symbol_type (token::LT_LT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT_GT (location_type l)
      {
        return symbol_type (token::GT_GT, std::move (l));
      }
#else
      static
      symbol_type
      make_GT_GT (const location_type& l)
      {
        return symbol_type (token::GT_GT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT_GT_GT (location_type l)
      {
        return symbol_type (token::GT_GT_GT, std::move (l));
      }
#else
      static
      symbol_type
      make_GT_GT_GT (const location_type& l)
      {
        return symbol_type (token::GT_GT_GT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AMP (location_type l)
      {
        return symbol_type (token::AMP, std::move (l));
      }
#else
      static
      symbol_type
      make_AMP (const location_type& l)
      {
        return symbol_type (token::AMP, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARET (location_type l)
      {
        return symbol_type (token::CARET, std::move (l));
      }
#else
      static
      symbol_type
      make_CARET (const location_type& l)
      {
        return symbol_type (token::CARET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PIPE (location_type l)
      {
        return symbol_type (token::PIPE, std::move (l));
      }
#else
      static
      symbol_type
      make_PIPE (const location_type& l)
      {
        return symbol_type (token::PIPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_PLUS (location_type l)
      {
        return symbol_type (token::PLUS_PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS_PLUS (const location_type& l)
      {
        return symbol_type (token::PLUS_PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_MINUS (location_type l)
      {
        return symbol_type (token::MINUS_MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS_MINUS (const location_type& l)
      {
        return symbol_type (token::MINUS_MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_EQ (location_type l)
      {
        return symbol_type (token::PLUS_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS_EQ (const location_type& l)
      {
        return symbol_type (token::PLUS_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_EQ (location_type l)
      {
        return symbol_type (token::MINUS_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS_EQ (const location_type& l)
      {
        return symbol_type (token::MINUS_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TIMES_EQ (location_type l)
      {
        return symbol_type (token::TIMES_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_TIMES_EQ (const location_type& l)
      {
        return symbol_type (token::TIMES_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV_EQ (location_type l)
      {
        return symbol_type (token::DIV_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_DIV_EQ (const location_type& l)
      {
        return symbol_type (token::DIV_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERCENT_EQ (location_type l)
      {
        return symbol_type (token::PERCENT_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_PERCENT_EQ (const location_type& l)
      {
        return symbol_type (token::PERCENT_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT_LT_EQ (location_type l)
      {
        return symbol_type (token::LT_LT_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_LT_LT_EQ (const location_type& l)
      {
        return symbol_type (token::LT_LT_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT_GT_EQ (location_type l)
      {
        return symbol_type (token::GT_GT_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_GT_GT_EQ (const location_type& l)
      {
        return symbol_type (token::GT_GT_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT_GT_GT_EQ (location_type l)
      {
        return symbol_type (token::GT_GT_GT_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_GT_GT_GT_EQ (const location_type& l)
      {
        return symbol_type (token::GT_GT_GT_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AMP_EQ (location_type l)
      {
        return symbol_type (token::AMP_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_AMP_EQ (const location_type& l)
      {
        return symbol_type (token::AMP_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PIPE_EQ (location_type l)
      {
        return symbol_type (token::PIPE_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_PIPE_EQ (const location_type& l)
      {
        return symbol_type (token::PIPE_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARET_EQ (location_type l)
      {
        return symbol_type (token::CARET_EQ, std::move (l));
      }
#else
      static
      symbol_type
      make_CARET_EQ (const location_type& l)
      {
        return symbol_type (token::CARET_EQ, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRACKET (location_type l)
      {
        return symbol_type (token::LBRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_LBRACKET (const location_type& l)
      {
        return symbol_type (token::LBRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRACKET (location_type l)
      {
        return symbol_type (token::RBRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_RBRACKET (const location_type& l)
      {
        return symbol_type (token::RBRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPAREN (location_type l)
      {
        return symbol_type (token::LPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_LPAREN (const location_type& l)
      {
        return symbol_type (token::LPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPAREN (location_type l)
      {
        return symbol_type (token::RPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_RPAREN (const location_type& l)
      {
        return symbol_type (token::RPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PROPERTY (location_type l)
      {
        return symbol_type (token::PROPERTY, std::move (l));
      }
#else
      static
      symbol_type
      make_PROPERTY (const location_type& l)
      {
        return symbol_type (token::PROPERTY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AUTO (location_type l)
      {
        return symbol_type (token::AUTO, std::move (l));
      }
#else
      static
      symbol_type
      make_AUTO (const location_type& l)
      {
        return symbol_type (token::AUTO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VARARG (location_type l)
      {
        return symbol_type (token::VARARG, std::move (l));
      }
#else
      static
      symbol_type
      make_VARARG (const location_type& l)
      {
        return symbol_type (token::VARARG, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST (location_type l)
      {
        return symbol_type (token::CONST, std::move (l));
      }
#else
      static
      symbol_type
      make_CONST (const location_type& l)
      {
        return symbol_type (token::CONST, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ERROR_LEX (location_type l)
      {
        return symbol_type (token::ERROR_LEX, std::move (l));
      }
#else
      static
      symbol_type
      make_ERROR_LEX (const location_type& l)
      {
        return symbol_type (token::ERROR_LEX, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOWER_THAN_ELSE (location_type l)
      {
        return symbol_type (token::LOWER_THAN_ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_LOWER_THAN_ELSE (const location_type& l)
      {
        return symbol_type (token::LOWER_THAN_ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (location_type l)
      {
        return symbol_type (token::ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const location_type& l)
      {
        return symbol_type (token::ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOWER_THAN_LT (location_type l)
      {
        return symbol_type (token::LOWER_THAN_LT, std::move (l));
      }
#else
      static
      symbol_type
      make_LOWER_THAN_LT (const location_type& l)
      {
        return symbol_type (token::LOWER_THAN_LT, l);
      }
#endif


  private:
    /// This class is not copyable.
    DataFuncPrototypeParser (const DataFuncPrototypeParser&);
    DataFuncPrototypeParser& operator= (const DataFuncPrototypeParser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (int t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const short yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned char yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const short yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const short yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const short yytable_[];

  static const short yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned char yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned char yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      enum { empty_state = -1 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (size_type i)
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (int i)
      {
        return operator[] (size_type (i));
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (size_type i) const
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (int i) const
      {
        return operator[] (size_type (i));
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (int n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      size_type
      size () const YY_NOEXCEPT
      {
        return seq_.size ();
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, int range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (int i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        int range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 484,     ///< Last index in yytable_.
      yynnts_ = 42,  ///< Number of nonterminal symbols.
      yyfinal_ = 44, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 88  ///< Number of tokens.
    };


    // User arguments.
    DataFuncPrototypeScanner &scanner;
    DataFuncPrototypeCompiler &compiler;
  };


#line 14 "datafuncprototype.grammar.yy" // lalr1.cc:401
} // MC
#line 2775 "datafuncprototype.grammar.hh" // lalr1.cc:401




#endif // !YY_YY_DATAFUNCPROTOTYPE_GRAMMAR_HH_INCLUDED
