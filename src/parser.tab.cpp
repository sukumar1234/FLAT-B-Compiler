/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

  #include<bits/stdc++.h>
  #include "class_defs.h"



  using namespace std;
  int yylex();
  extern "C" int yyparse();
  extern int yylineno;
  void yyerror(char const *s);
	extern "C" FILE *yyin;
  extern Visitor *v;
  void check_dec(char *, int);
  set <string> var_declared;
  set <string> arr_declared;
  class Prog* start=NULL;

#line 85 "parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    DATATYPE = 259,
    NUMBER = 260,
    IDENTIFIER = 261,
    ETOK = 262,
    COMMA = 263,
    COL = 264,
    WHILE = 265,
    GOTO = 266,
    PRINT = 267,
    PRINTLN = 268,
    READ = 269,
    PRINT_MATTER = 270,
    DEC_BLOCK = 271,
    CODE_BLOCK = 272,
    ELSE = 273,
    FOR = 274,
    ASSIGN = 275,
    EQ = 276,
    GT_EQ = 277,
    LT_EQ = 278,
    LT = 279,
    GT = 280,
    NE = 281,
    AND = 282,
    OR = 283,
    BIT_AND = 284,
    BIT_OR = 285,
    XOR = 286,
    NEG = 287,
    MOD = 288,
    SEMI_COLON = 289
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 166 "parser.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   274

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    29,    27,     2,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      25,    26,    31,    32,    33,    34,    35,    36,    37,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    80,    82,    83,    86,    89,    90,    93,
      94,   103,   105,   106,   110,   111,   113,   114,   115,   116,
     117,   118,   119,   120,   138,   140,   141,   144,   145,   146,
     150,   151,   152,   156,   159,   161,   162,   165,   167,   168,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     196,   197,   200,   201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "DATATYPE", "NUMBER", "IDENTIFIER",
  "ETOK", "COMMA", "COL", "WHILE", "GOTO", "PRINT", "PRINTLN", "READ",
  "PRINT_MATTER", "DEC_BLOCK", "CODE_BLOCK", "ELSE", "FOR", "ASSIGN", "EQ",
  "GT_EQ", "LT_EQ", "LT", "GT", "NE", "'+'", "'-'", "'*'", "'/'", "AND",
  "OR", "BIT_AND", "BIT_OR", "XOR", "NEG", "MOD", "'{'", "'}'", "'['",
  "']'", "'('", "')'", "SEMI_COLON", "$accept", "program", "decl_block",
  "decl_list", "type_variables", "variables", "variable", "code_block",
  "statement_list", "statements", "statement", "assign_stmt", "goto_stmt",
  "print_stmt", "println_stmt", "read_stmt", "while_stmt", "for_stmt",
  "if_stmt", "else_stmt", "boolean_expr", "expr", "rd_st", "id_arr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    43,    45,    42,
      47,   282,   283,   284,   285,   286,   287,   288,   123,   125,
      91,    93,    40,    41,   289
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -26,    16,     7,    13,   -70,    -8,   -70,    28,    21,
      -9,   -70,    18,    46,   -70,   -70,    20,   -70,    74,    57,
      28,   -70,    14,    -4,    14,    59,     0,    51,    64,    64,
     -70,   -70,   -70,    29,    34,    35,    38,    39,   -70,   -70,
     -70,    52,    48,   -70,   -70,    50,    14,    53,   179,   -70,
     225,    17,    54,    92,    88,    90,   -70,    98,    90,    90,
      79,   -70,   -70,   -70,   -70,   -70,    17,   -70,    65,   156,
     -70,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,   -70,    17,   213,
     -70,    14,    64,    64,    64,   102,   228,   -70,   -70,    91,
     228,   228,   228,   228,   228,   228,   237,   237,    -6,    -6,
     228,   228,   -70,   -70,   -70,   -70,   190,   -70,   113,   -70,
      90,   -70,    90,   101,    93,   -70,   107,    76,   -70,    -1,
     -70,   115,   -70,   125,    80,   137,   -70,   -70,   -70,   155,
     -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     2,     0,     0,
       0,    13,     9,     6,     7,     3,     0,     4,     0,     0,
       0,     5,     0,    62,     0,     0,     0,     0,     0,     0,
      11,    12,    15,     0,     0,     0,     0,     0,    19,    18,
      17,     0,     0,     8,    57,    62,     0,     0,     0,    58,
       0,     0,     0,    26,    28,    29,    60,    31,    32,    33,
       0,    16,    20,    21,    23,    22,     0,    10,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     0,
      13,     0,     0,     0,     0,     0,    24,    48,    59,     0,
      44,    42,    40,    41,    43,    45,    49,    50,    51,    52,
      46,    47,    53,    54,    55,    56,     0,    63,     0,    25,
      27,    61,    30,     0,    39,    34,     0,     0,    37,     0,
      13,     0,    13,     0,     0,     0,    38,    13,    35,     0,
      36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   120,   -70,   114,   -70,   -69,   -70,
      72,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -20,   -33,   -25,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    13,    14,     7,    18,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   128,
      47,    48,    55,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    99,    58,    59,    52,    50,    45,   131,    56,    56,
      56,    60,     4,    69,     1,    54,     5,     8,    89,    44,
      45,   118,    44,    45,     6,     8,    68,    83,    84,    85,
      11,    86,    41,    96,    12,    17,    51,   132,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    20,   116,    46,    45,    19,    88,
      15,   133,    42,   135,    21,    53,    57,   120,   139,   122,
      45,   119,    66,    61,    56,   121,    56,    22,    62,    63,
      23,    41,    64,    65,    24,    25,    26,    27,    28,    67,
      51,    70,    90,    29,    22,    91,    92,    23,    93,    95,
      41,    24,    25,    26,    27,    28,    94,   123,    97,   126,
      29,   127,   129,    30,   130,    41,    22,    41,   137,    23,
     134,    41,    87,    24,    25,    26,    27,    28,    22,    16,
     124,    23,    29,     0,    43,    24,    25,    26,    27,    28,
      22,     0,     0,    23,    29,     0,     0,    24,    25,    26,
      27,    28,   125,     0,     0,     0,    29,     0,    22,     0,
       0,    23,     0,     0,   136,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    29,     0,   138,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,    86,   140,     0,     0,     0,     0,    98,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,    86,    77,    78,    79,
      80,     0,     0,    83,    84,    85,     0,    86,    22,     0,
       0,    45,     0,    98,     0,    24,    25,    26,    27,    28,
      77,    78,    79,    80,    29,     0,    83,    84,    85,     0,
      86,     0,     0,     0,   117,    77,    78,    79,    80,     0,
       0,    83,    84,    85,     0,    86,    79,    80,     0,     0,
      83,    84,    85,     0,    86
};

static const yytype_int16 yycheck[] =
{
      18,    70,    27,    28,    24,     9,     6,     8,    26,    27,
      28,    29,    38,    46,    16,    15,     0,     4,    51,     5,
       6,    90,     5,     6,    17,     4,    46,    33,    34,    35,
      38,    37,    50,    66,     6,    44,    40,    38,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     8,    88,    42,     6,    40,    42,
      39,   130,     5,   132,    44,     6,    15,    92,   137,    94,
       6,    91,    20,    44,    92,    93,    94,     3,    44,    44,
       6,    99,    44,    44,    10,    11,    12,    13,    14,    41,
      40,    38,    38,    19,     3,     3,     8,     6,     8,    20,
     118,    10,    11,    12,    13,    14,     8,     5,    43,     8,
      19,    18,     5,    39,    38,   133,     3,   135,    38,     6,
       5,   139,    50,    10,    11,    12,    13,    14,     3,     9,
      39,     6,    19,    -1,    20,    10,    11,    12,    13,    14,
       3,    -1,    -1,     6,    19,    -1,    -1,    10,    11,    12,
      13,    14,    39,    -1,    -1,    -1,    19,    -1,     3,    -1,
      -1,     6,    -1,    -1,    39,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,    -1,    39,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    39,    -1,    -1,    -1,    -1,    43,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    27,    28,    29,
      30,    -1,    -1,    33,    34,    35,    -1,    37,     3,    -1,
      -1,     6,    -1,    43,    -1,    10,    11,    12,    13,    14,
      27,    28,    29,    30,    19,    -1,    33,    34,    35,    -1,
      37,    -1,    -1,    -1,    41,    27,    28,    29,    30,    -1,
      -1,    33,    34,    35,    -1,    37,    29,    30,    -1,    -1,
      33,    34,    35,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    46,    47,    38,     0,    17,    52,     4,    48,
      49,    38,     6,    50,    51,    39,    49,    44,    53,    40,
       8,    44,     3,     6,    10,    11,    12,    13,    14,    19,
      39,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    68,     5,    51,     5,     6,    42,    65,    66,    68,
       9,    40,    65,     6,    15,    67,    68,    15,    67,    67,
      68,    44,    44,    44,    44,    44,    20,    41,    65,    66,
      38,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    37,    55,    42,    66,
      38,     3,     8,     8,     8,    20,    66,    43,    43,    53,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    41,    53,    65,
      67,    68,    67,     5,    39,    39,     8,    18,    64,     5,
      38,     8,    38,    53,     5,    53,    39,    38,    39,    53,
      39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    49,    50,    50,    51,
      51,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    57,    57,    58,    58,    58,
      59,    59,    59,    60,    61,    62,    62,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     2,     3,     2,     1,     3,     1,
       4,     4,     2,     0,     3,     1,     2,     1,     1,     1,
       2,     2,     2,     2,     3,     4,     2,     4,     2,     2,
       4,     2,     2,     2,     5,     9,    11,     6,     4,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       1,     3,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 75 "parser.y" /* yacc.c:1646  */
    {(yyval.prog)=new Prog((yyvsp[-1].decls),(yyvsp[0].codes)); start =(yyval.prog);}
#line 1364 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.decls)=new decl_block((yyvsp[-1].decllist));}
#line 1370 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.decllist)=new decl_list();(yyval.decllist)->push_back((yyvsp[-1].type_n_varlist));}
#line 1376 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.decllist)->push_back((yyvsp[-1].type_n_varlist));}
#line 1382 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "parser.y" /* yacc.c:1646  */
    {(yyval.type_n_varlist) = new type_n_variables(string((yyvsp[-1].stringvalue)),(yyvsp[0].varslist));}
#line 1388 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.varslist)=new Vars();(yyval.varslist)->push_back((yyvsp[0].varlist));}
#line 1394 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "parser.y" /* yacc.c:1646  */
    {(yyval.varslist)->push_back((yyvsp[0].varlist));}
#line 1400 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 93 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist)=new Var(string("Normal"),string((yyvsp[0].stringvalue)));}
#line 1406 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 94 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist)=new Var(string("Array"),string((yyvsp[-3].stringvalue)),(yyvsp[-1].intval));}
#line 1412 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "parser.y" /* yacc.c:1646  */
    {(yyval.codes)=new code_block((yyvsp[-1].Statement_list));}
#line 1418 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 105 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement_list)->push_back((yyvsp[0].Statements));}
#line 1424 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement_list)=new statement_list();}
#line 1430 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "parser.y" /* yacc.c:1646  */
    {(yyval.Statements) = new statements(string("goto type"),string((yyvsp[-2].stringvalue)),(yyvsp[0].Statement));}
#line 1436 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.Statements)=new statements(string("Normal"),(yyvsp[0].Statement));}
#line 1442 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[-1].Assign_statement);}
#line 1448 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[0].If_stmt);}
#line 1454 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[0].For_stmt);}
#line 1460 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[0].While_stmt);}
#line 1466 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[-1].Goto_stmt);}
#line 1472 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[-1].Print_stmt);}
#line 1478 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[-1].Read_stmt);}
#line 1484 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.Statement)=(yyvsp[-1].Println_stmt);}
#line 1490 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.Assign_statement)=new assign_stmt((yyvsp[-2].Id_arr),string("="),(yyvsp[0].Expr));}
#line 1496 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.Goto_stmt)=new goto_stmt(string((yyvsp[-2].stringvalue)),(yyvsp[0].Boolean_expr));}
#line 1502 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.Goto_stmt)=new goto_stmt(string((yyvsp[0].stringvalue)));}
#line 1508 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.Print_stmt)=new print_stmt(string((yyvsp[-2].stringvalue)),(yyvsp[0].Rd_st));}
#line 1514 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 145 "parser.y" /* yacc.c:1646  */
    {(yyval.Print_stmt)=new print_stmt(string((yyvsp[0].stringvalue)));}
#line 1520 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.Print_stmt)=new print_stmt(string(""),(yyvsp[0].Rd_st));}
#line 1526 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.Println_stmt)=new println_stmt(string((yyvsp[-2].stringvalue)),(yyvsp[0].Rd_st));}
#line 1532 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.Println_stmt)=new println_stmt(string((yyvsp[0].stringvalue)));}
#line 1538 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.Println_stmt)=new println_stmt(string(""),(yyvsp[0].Rd_st));}
#line 1544 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.Read_stmt)=new read_stmt((yyvsp[0].Rd_st));}
#line 1550 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.While_stmt)=new while_stmt((yyvsp[-3].Boolean_expr),(yyvsp[-1].Statement_list));}
#line 1556 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 161 "parser.y" /* yacc.c:1646  */
    {(yyval.For_stmt)=new for_stmt((yyvsp[-7].Id_arr),(yyvsp[-5].intval),(yyvsp[-3].intval),(yyvsp[-1].Statement_list));}
#line 1562 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.For_stmt)=new for_stmt((yyvsp[-9].Id_arr),(yyvsp[-7].intval),(yyvsp[-5].intval),(yyvsp[-3].intval),(yyvsp[-1].Statement_list));}
#line 1568 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.If_stmt)=new if_stmt((yyvsp[-4].Boolean_expr),(yyvsp[-2].Statement_list),(yyvsp[0].Else_stmt));}
#line 1574 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.Else_stmt)=new else_stmt((yyvsp[-1].Statement_list));}
#line 1580 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.Else_stmt)=new else_stmt();}
#line 1586 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string("<="),(yyvsp[0].Expr));}
#line 1592 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string("<"),(yyvsp[0].Expr));}
#line 1598 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string(">="),(yyvsp[0].Expr));}
#line 1604 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string(">"),(yyvsp[0].Expr));}
#line 1610 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string("=="),(yyvsp[0].Expr));}
#line 1616 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string("!="),(yyvsp[0].Expr));}
#line 1622 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string("&&"),(yyvsp[0].Expr));}
#line 1628 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=new boolean_expr((yyvsp[-2].Expr),string("||"),(yyvsp[0].Expr));}
#line 1634 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.Boolean_expr)=(yyvsp[-1].Boolean_expr);}
#line 1640 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("+"),(yyvsp[0].Expr));}
#line 1646 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("-"),(yyvsp[0].Expr));}
#line 1652 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("*"),(yyvsp[0].Expr));}
#line 1658 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("/"),(yyvsp[0].Expr));}
#line 1664 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("&"),(yyvsp[0].Expr));}
#line 1670 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("|"),(yyvsp[0].Expr));}
#line 1676 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("^"),(yyvsp[0].Expr));}
#line 1682 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new arithexpr((yyvsp[-2].Expr),string("%"),(yyvsp[0].Expr));}
#line 1688 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=new Integer((yyvsp[0].intval));}
#line 1694 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=(yyvsp[0].Id_arr);}
#line 1700 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.Expr)=(yyvsp[-1].Expr);}
#line 1706 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.Rd_st)=new rd_st((yyvsp[0].Id_arr));}
#line 1712 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.Rd_st)->push_back((yyvsp[0].Id_arr));}
#line 1718 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.Id_arr)=new id_arr("Normal",string((yyvsp[0].stringvalue)));}
#line 1724 "parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.Id_arr)=new id_arr("Array",string((yyvsp[-3].stringvalue)),(yyvsp[-1].Expr));}
#line 1730 "parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1734 "parser.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 214 "parser.y" /* yacc.c:1906  */


void yyerror (char const *s)
{
       fprintf (stderr, "%s near line no %d and near string %s\n", s,yylineno,yylval.stringvalue);
       exit(0);
}

void check_dec(char* s,int rd)
{
  if(rd == 1)
  {
      if(var_declared.find(s)!=var_declared.end())
      {
        printf("%s value redecleared at line no %d\n",s,yylineno);
        exit(0);
      }
      else
      {
          var_declared.insert(s);
      }
  }
  else if(rd == 2){
    if(var_declared.find(s)==var_declared.end())
    {
      fprintf(stderr,"%s variable not declared at line no %d\n",s,yylineno);
      exit(0);
    }
    }
    else if(rd == 3)
    {
        if(arr_declared.find(s)!=arr_declared.end())
        {
            printf("%s value redecleared at line no %d\n",s,yylineno);
            exit(0);
        }
        else
        {
          arr_declared.insert(s);
        }
    }
    else if(rd == 4){
      if(arr_declared.find(s)==arr_declared.end())
      {
        fprintf(stderr,"%s variable not declared at line no %d\n",s,yylineno);
        exit(0);
      }
  }
}


int main(int argc, char *argv[])
{
	if (argc == 1 ) {
		fprintf(stderr, "Correct usage: bcc filename\n");
		exit(1);
	}

	if (argc > 2) {
		fprintf(stderr, "Passing more arguments than necessary.\n");
		fprintf(stderr, "Correct usage: bcc filename\n");
	}
	yyin = fopen(argv[1], "r");
	yyparse();
  cout<<"Parse Tree annotated"<<endl;
  start->traverse();
  cout<<"done traversing"<<endl;
  //start->interpret();
  start->accept(v);
  cout<<"done interpreting"<<endl;

}
