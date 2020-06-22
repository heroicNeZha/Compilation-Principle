/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Le = 258,
     T_Ge = 259,
     T_Eq = 260,
     T_Ne = 261,
     T_Ic = 262,
     T_Dc = 263,
     T_And = 264,
     T_Or = 265,
     T_Void = 266,
     T_Int = 267,
     T_Double = 268,
     T_Boolean = 269,
     T_String = 270,
     T_Null = 271,
     T_For = 272,
     T_While = 273,
     T_If = 274,
     T_Else = 275,
     T_Return = 276,
     T_Break = 277,
     T_Print = 278,
     T_ReadInteger = 279,
     T_ReadLine = 280,
     T_IntConstant = 281,
     T_DoubleConstant = 282,
     T_StringConstant = 283,
     T_Identifier = 284,
     T_BooleanConstant = 285,
     T_Lineend = 286,
     T_OR = 287,
     T_AND = 288,
     T_ELSE = 289,
     T_IFX = 290
   };
#endif
/* Tokens.  */
#define T_Le 258
#define T_Ge 259
#define T_Eq 260
#define T_Ne 261
#define T_Ic 262
#define T_Dc 263
#define T_And 264
#define T_Or 265
#define T_Void 266
#define T_Int 267
#define T_Double 268
#define T_Boolean 269
#define T_String 270
#define T_Null 271
#define T_For 272
#define T_While 273
#define T_If 274
#define T_Else 275
#define T_Return 276
#define T_Break 277
#define T_Print 278
#define T_ReadInteger 279
#define T_ReadLine 280
#define T_IntConstant 281
#define T_DoubleConstant 282
#define T_StringConstant 283
#define T_Identifier 284
#define T_BooleanConstant 285
#define T_Lineend 286
#define T_OR 287
#define T_AND 288
#define T_ELSE 289
#define T_IFX 290




/* Copy the first part of user declarations.  */
#line 1 "e3.y"

#include <stdio.h> 
#include <stdlib.h> 
#include <sys/malloc.h> 

extern int cur_lineno;
int yylex();
void yyerror(const char* msg);
/* IF栈 */
int ii = 0, itop = -1, istack[100];
#define _BEG_IF     {istack[++itop] = ++ii;}
#define _END_IF     {itop--;}
#define _i          (istack[itop])

/* While栈 */
int ww = 0, wtop = -1, wstack[100];
#define _BEG_WHILE  {wstack[++wtop] = ++ww;}
#define _END_WHILE  {wtop--;}
#define _w          (wstack[wtop])


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "e3.y"
{ 
    int      ival;
    char     *sval;
    double   dval;
    int      bval;
}
/* Line 193 of yacc.c.  */
#line 194 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 207 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   553

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,     2,     2,    44,     2,     2,
      47,    32,    42,    40,    34,    41,    46,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
      38,    35,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    36,    37,    49,
      50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    17,    19,    22,    23,
      25,    27,    29,    32,    34,    35,    39,    41,    43,    45,
      47,    49,    51,    55,    57,    58,    60,    63,    68,    69,
      73,    75,    78,    79,    81,    84,    86,    88,    90,    93,
      96,    99,   101,   105,   107,   109,   111,   112,   114,   117,
     120,   122,   127,   129,   134,   136,   137,   139,   143,   153,
     161,   163,   164,   165,   174,   183,   194,   205,   207,   208,
     209,   210,   212,   215,   217,   222,   224,   226,   228,   230,
     234,   238,   242,   246,   250,   254,   257,   260,   263,   266,
     269,   273,   277,   281,   285,   289,   293,   297,   301,   304,
     309,   314,   316,   318,   320,   322
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    58,    -1,    58,    56,    -1,     1,    -1,
      62,    57,    47,    63,    32,    65,    -1,    29,    -1,    58,
      59,    -1,    -1,     1,    -1,    61,    -1,    56,    -1,    62,
      29,    -1,     1,    -1,    -1,    61,    60,    51,    -1,     1,
      -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,    11,
      -1,    62,    48,    33,    -1,     1,    -1,    -1,    64,    -1,
      62,    29,    -1,    64,    34,    62,    29,    -1,    -1,    52,
      66,    53,    -1,     1,    -1,    66,    67,    -1,    -1,    61,
      -1,    68,    51,    -1,    80,    -1,    76,    -1,    75,    -1,
      86,    51,    -1,    85,    51,    -1,    87,    51,    -1,    65,
      -1,    71,    35,    89,    -1,    69,    -1,    70,    -1,    72,
      -1,    -1,     1,    -1,    71,     7,    -1,    71,     8,    -1,
      29,    -1,    89,    48,    89,    33,    -1,     1,    -1,    29,
      47,    73,    32,    -1,    74,    -1,    -1,    89,    -1,    74,
      34,    89,    -1,    17,    47,    68,    51,    88,    51,    68,
      32,    67,    -1,    77,    47,    88,    32,    78,    65,    79,
      -1,    18,    -1,    -1,    -1,    81,    47,    88,    32,    82,
      65,    83,    84,    -1,    81,    47,    88,    32,    82,    67,
      83,    84,    -1,    81,    47,    88,    32,    82,    65,    83,
      20,    65,    84,    -1,    81,    47,    88,    32,    82,    67,
      83,    20,    67,    84,    -1,    19,    -1,    -1,    -1,    -1,
      21,    -1,    21,    89,    -1,    22,    -1,    23,    47,    74,
      32,    -1,    89,    -1,    90,    -1,    71,    -1,    72,    -1,
      47,    89,    32,    -1,    89,    40,    89,    -1,    89,    41,
      89,    -1,    89,    42,    89,    -1,    89,    43,    89,    -1,
      89,    44,    89,    -1,    41,    89,    -1,    89,     8,    -1,
       8,    89,    -1,    89,     7,    -1,     7,    89,    -1,    89,
      38,    89,    -1,    89,     3,    89,    -1,    89,    39,    89,
      -1,    89,     4,    89,    -1,    89,     5,    89,    -1,    89,
       6,    89,    -1,    89,     9,    89,    -1,    89,    10,    89,
      -1,    45,    89,    -1,    24,    47,    71,    32,    -1,    25,
      47,    71,    32,    -1,    26,    -1,    27,    -1,    30,    -1,
      28,    -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    83,    84,    87,    91,    94,    95,    96,
      99,   100,   103,   104,   107,   108,   109,   112,   113,   114,
     115,   116,   117,   118,   121,   122,   124,   125,   126,   130,
     131,   134,   135,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   150,   151,   152,   153,   154,   155,   158,   161,
     165,   166,   167,   171,   175,   176,   179,   180,   183,   187,
     191,   194,   197,   200,   201,   202,   203,   206,   208,   211,
     214,   217,   218,   221,   224,   227,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   258,   259,   260,   261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Le", "T_Ge", "T_Eq", "T_Ne", "T_Ic",
  "T_Dc", "T_And", "T_Or", "T_Void", "T_Int", "T_Double", "T_Boolean",
  "T_String", "T_Null", "T_For", "T_While", "T_If", "T_Else", "T_Return",
  "T_Break", "T_Print", "T_ReadInteger", "T_ReadLine", "T_IntConstant",
  "T_DoubleConstant", "T_StringConstant", "T_Identifier",
  "T_BooleanConstant", "T_Lineend", "')'", "']'", "','", "'='", "T_OR",
  "T_AND", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'.'",
  "'('", "'['", "T_ELSE", "T_IFX", "';'", "'{'", "'}'", "$accept",
  "Program", "Function", "FuncName", "Fieldlist", "Field", "VariableDecl",
  "Variable", "Type", "FormalParams", "_Params", "StmtBlock", "Stmtlist",
  "Stmt", "SimpleStmt", "IncrementStmt", "DecrementStmt", "LValue", "Call",
  "ActualParams", "ExprMore", "ForStmt", "WhileStmt", "While", "Do",
  "EndWhile", "IfStmt", "If", "Then", "EndThen", "EndIf", "ReturnStmt",
  "BreakStmt", "PrintStmt", "BoolExpr", "Expr", "Constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    41,    93,    44,    61,   287,   288,    60,    62,
      43,    45,    42,    47,    37,    33,    46,    40,    91,   289,
     290,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    56,    57,    58,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    69,    70,
      71,    71,    71,    72,    73,    73,    74,    74,    75,    76,
      77,    78,    79,    80,    80,    80,    80,    81,    82,    83,
      84,    85,    85,    86,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     1,     2,     0,     1,
       1,     1,     2,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     1,     2,     4,     0,     3,
       1,     2,     0,     1,     2,     1,     1,     1,     2,     2,
       2,     1,     3,     1,     1,     1,     0,     1,     2,     2,
       1,     4,     1,     4,     1,     0,     1,     3,     9,     7,
       1,     0,     0,     8,     8,    10,    10,     1,     0,     0,
       0,     1,     2,     1,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     4,
       4,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     0,     0,     1,    16,    21,    17,    18,    19,
      20,    11,     7,     0,     0,    23,     0,     0,     6,     0,
       0,    15,    12,    22,     0,    23,     0,     0,    25,    26,
       0,     0,    30,    32,     5,     0,     0,    27,    16,     0,
       0,   105,     0,    60,    67,     0,    73,     0,     0,     0,
     101,   102,   104,    50,   103,     0,     0,     0,    29,     0,
      41,    31,     0,    43,    44,    77,    78,    37,    36,     0,
      35,     0,     0,     0,     0,     0,    76,    52,    77,    78,
      89,    87,     0,    72,     0,     0,     0,     0,    85,    98,
       0,    34,    48,    49,     0,     0,     0,    39,    38,    40,
       0,     0,     0,     0,    88,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    56,
      77,    77,     0,    54,    79,    42,     0,    75,     0,    91,
      93,    94,    95,    96,    97,    90,    92,    80,    81,    82,
      83,    84,     0,     0,    74,     0,    99,   100,    53,    61,
      68,    51,     0,    57,     0,     0,     0,    62,    41,    69,
       0,    59,    70,    70,     0,     0,    63,     0,    64,    58,
      70,    70,    65,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    20,     3,    12,    16,    59,    17,    27,
      28,    60,    36,    61,    62,    63,    64,    78,    79,   122,
     118,    67,    68,    69,   154,   161,    70,    71,   155,   162,
     166,    72,    73,    74,   126,    75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
      89,     4,    12,   509,  -136,   -18,  -136,  -136,  -136,  -136,
    -136,    22,  -136,   516,   -14,   -25,    10,    -2,  -136,     0,
      47,  -136,  -136,  -136,    84,  -136,    19,    34,    54,  -136,
       1,   304,  -136,  -136,  -136,    43,   223,  -136,   456,   343,
     343,  -136,    61,  -136,  -136,   253,  -136,    63,    65,    68,
    -136,  -136,  -136,    72,  -136,   343,   343,   343,  -136,   129,
    -136,  -136,    76,  -136,  -136,    24,    41,  -136,  -136,    79,
    -136,    81,    82,    87,    88,   434,  -136,  -136,  -136,  -136,
      -4,    -4,   283,   434,   343,   343,   343,    13,   505,     9,
     371,  -136,  -136,  -136,   343,   343,   343,  -136,  -136,  -136,
     343,   343,   343,   343,  -136,  -136,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,    55,   109,    75,   434,
     130,   131,   132,   127,  -136,   434,   133,   434,   134,   498,
     498,   445,   445,   434,   434,   498,   498,   505,   505,     9,
       9,     9,   388,   343,  -136,   343,  -136,  -136,  -136,  -136,
    -136,  -136,   116,   434,     1,   176,   313,  -136,  -136,  -136,
     136,  -136,   149,   151,   176,     1,  -136,   176,  -136,  -136,
    -136,  -136,  -136,  -136
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,  -136,  -136,  -136,  -136,   169,    62,  -136,
    -136,   -30,  -136,   -50,   -72,  -136,  -136,   -35,   -33,  -136,
      86,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,    16,
    -135,  -136,  -136,  -136,   -87,   -32,  -136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      34,    65,    32,    66,    -4,   106,   107,    80,    81,   128,
     117,   -23,     4,    83,    77,    18,   104,   105,   106,   107,
      39,    40,    -3,    88,    89,    90,   -13,    22,   168,    41,
     -23,    92,    93,    23,    19,   172,   173,    48,    49,    50,
      51,    52,    53,    54,   115,   -55,    19,    65,    29,    66,
     120,   121,   119,    33,    55,   119,   152,   115,    56,    94,
      57,    21,   125,   127,   127,    14,    30,    19,   129,   130,
     131,   132,    37,   -45,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   160,    25,    26,   -47,    31,    -8,
       1,    19,   -45,    35,    24,     6,     7,     8,     9,    10,
      -8,    -8,    -8,    -8,    -8,   159,   -47,   144,    82,   145,
      84,   127,    85,   153,   169,    86,   -24,   171,   -28,    87,
      65,    65,    66,    66,   157,   158,    95,    91,    96,    65,
      15,    66,    65,    97,    66,   170,   -33,   -33,    98,    99,
       6,     7,     8,     9,    10,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     143,   145,   146,   147,   148,   149,   150,   156,   164,   165,
     -33,   167,    13,   123,   -33,   163,   -33,    38,     0,     0,
     -33,   -33,   -33,    39,    40,     0,     0,   -14,   -14,   -14,
     -14,   -14,    41,    42,    43,    44,   -14,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,    56,     0,    57,    38,     0,     0,   -14,    33,   -14,
      39,    40,     0,     0,   -14,   -14,   -14,   -14,   -14,    41,
      42,    43,    44,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    77,     0,     0,     0,     0,     0,
      39,    40,     0,     0,    55,     0,     0,     0,    56,    41,
      57,     0,     0,     0,   -14,    33,    58,    48,    49,    50,
      51,    52,    53,    54,   116,     0,     0,     0,     0,     0,
      39,    40,     0,     0,    55,     0,     0,     0,    56,    41,
      57,     0,     0,     0,   -71,    25,     0,    48,    49,    50,
      51,    52,    53,    54,   116,     6,     7,     8,     9,    10,
      39,    40,     0,     0,    55,     0,     0,     0,    56,    41,
      57,     0,     0,     0,   -46,     0,     0,    48,    49,    50,
      51,    52,    53,    54,    77,   -46,     0,     0,     0,     0,
      39,    40,     0,     0,    55,     0,     0,     0,    56,    41,
      57,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,    52,    53,    54,   100,   101,   102,   103,   104,   105,
     106,   107,     0,     0,    55,     0,     0,     0,    56,     0,
      57,   100,   101,   102,   103,   104,   105,   106,   107,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,     0,     0,     0,   115,
       0,   151,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,     0,     0,     0,   115,   100,   101,   102,
     103,   104,   105,   106,   107,     0,     0,     0,   100,   101,
     -72,   -72,   104,   105,   106,   107,     0,     0,     0,   -52,
     -52,   -52,   -52,     0,     0,   -52,   -52,     0,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,     0,
       0,     0,   115,   108,   109,   110,   111,   112,   113,   114,
       0,   -52,     0,   115,   -52,   -52,   -52,     0,   -52,   -52,
     -52,   -72,   -72,     0,   -52,   104,   105,   106,   107,    -2,
       5,     0,   104,   105,   106,   107,   -10,    15,     0,     0,
       6,     7,     8,     9,    10,     0,     0,     6,     7,     8,
       9,    10,     0,     0,     0,     0,   -72,   -72,   110,   111,
     112,   113,   114,     0,     0,     0,   115,   112,   113,   114,
       0,     0,     0,   115
};

static const yytype_int16 yycheck[] =
{
      30,    36,     1,    36,     0,     9,    10,    39,    40,    96,
      82,    29,     0,    45,     1,    29,     7,     8,     9,    10,
       7,     8,     0,    55,    56,    57,    51,    29,   163,    16,
      48,     7,     8,    33,    48,   170,   171,    24,    25,    26,
      27,    28,    29,    30,    48,    32,    48,    82,    29,    82,
      85,    86,    84,    52,    41,    87,   143,    48,    45,    35,
      47,    51,    94,    95,    96,     3,    32,    48,   100,   101,
     102,   103,    29,    32,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   156,     1,    24,    32,    34,     0,
       1,    48,    51,    31,    47,    11,    12,    13,    14,    15,
      11,    12,    13,    14,    15,   155,    51,    32,    47,    34,
      47,   143,    47,   145,   164,    47,    32,   167,    34,    47,
     155,   156,   155,   156,   154,   155,    47,    51,    47,   164,
       1,   164,   167,    51,   167,   165,     7,     8,    51,    51,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      51,    34,    32,    32,    32,    32,    32,    51,    32,    20,
      41,    20,     3,    87,    45,   159,    47,     1,    -1,    -1,
      51,    52,    53,     7,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    -1,    47,     1,    -1,    -1,    51,    52,    53,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    41,    -1,    -1,    -1,    45,    16,
      47,    -1,    -1,    -1,    51,    52,    53,    24,    25,    26,
      27,    28,    29,    30,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    41,    -1,    -1,    -1,    45,    16,
      47,    -1,    -1,    -1,    51,     1,    -1,    24,    25,    26,
      27,    28,    29,    30,     1,    11,    12,    13,    14,    15,
       7,     8,    -1,    -1,    41,    -1,    -1,    -1,    45,    16,
      47,    -1,    -1,    -1,    51,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,     1,    32,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    41,    -1,    -1,    -1,    45,    16,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,
      47,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    48,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    48,    38,    39,    40,    41,    42,    43,    44,
      -1,    35,    -1,    48,    38,    39,    40,    -1,    42,    43,
      44,     3,     4,    -1,    48,     7,     8,     9,    10,     0,
       1,    -1,     7,     8,     9,    10,     0,     1,    -1,    -1,
      11,    12,    13,    14,    15,    -1,    -1,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    42,    43,    44,
      -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    55,    58,     0,     1,    11,    12,    13,    14,
      15,    56,    59,    61,    62,     1,    60,    62,    29,    48,
      57,    51,    29,    33,    47,     1,    62,    63,    64,    29,
      32,    34,     1,    52,    65,    62,    66,    29,     1,     7,
       8,    16,    17,    18,    19,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    41,    45,    47,    53,    61,
      65,    67,    68,    69,    70,    71,    72,    75,    76,    77,
      80,    81,    85,    86,    87,    89,    90,     1,    71,    72,
      89,    89,    47,    89,    47,    47,    47,    47,    89,    89,
      89,    51,     7,     8,    35,    47,    47,    51,    51,    51,
       3,     4,     5,     6,     7,     8,     9,    10,    38,    39,
      40,    41,    42,    43,    44,    48,     1,    68,    74,    89,
      71,    71,    73,    74,    32,    89,    88,    89,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    51,    32,    34,    32,    32,    32,    32,
      32,    33,    88,    89,    78,    82,    51,    65,    65,    67,
      68,    79,    83,    83,    32,    20,    84,    20,    84,    67,
      65,    67,    84,    84
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 82 "e3.y"
    { /* empty */      }
    break;

  case 3:
#line 83 "e3.y"
    { /* empty */    }
    break;

  case 4:
#line 84 "e3.y"
    { yyerror("Program");                                   }
    break;

  case 5:
#line 88 "e3.y"
    { printf( "ENDFUNC\n\n"); }
    break;

  case 6:
#line 91 "e3.y"
    { printf("FUNC @%s:\n", (yyvsp[(1) - (1)].sval)); }
    break;

  case 7:
#line 94 "e3.y"
    { /* empty */      }
    break;

  case 8:
#line 95 "e3.y"
    { /* empty */                    }
    break;

  case 9:
#line 96 "e3.y"
    { yyerror("Fieldlist");                                 }
    break;

  case 10:
#line 99 "e3.y"
    { /* empty */                 }
    break;

  case 11:
#line 100 "e3.y"
    { /* empty */          }
    break;

  case 12:
#line 103 "e3.y"
    { printf("\tvar %s",(yyvsp[(2) - (2)].sval)); }
    break;

  case 13:
#line 104 "e3.y"
    { yyerror("VariableDecl");                              }
    break;

  case 14:
#line 107 "e3.y"
    { /* empty */ }
    break;

  case 15:
#line 108 "e3.y"
    { printf("\n\n");   }
    break;

  case 16:
#line 109 "e3.y"
    { yyerror("Variable");                                  }
    break;

  case 17:
#line 112 "e3.y"
    { /* empty */                }
    break;

  case 18:
#line 113 "e3.y"
    { /* empty */             }
    break;

  case 19:
#line 114 "e3.y"
    { /* empty */               }
    break;

  case 20:
#line 115 "e3.y"
    { /* empty */             }
    break;

  case 21:
#line 116 "e3.y"
    { /* empty */               }
    break;

  case 22:
#line 117 "e3.y"
    { /* empty */             }
    break;

  case 23:
#line 118 "e3.y"
    { yyerror("Type");                                      }
    break;

  case 24:
#line 121 "e3.y"
    { /* empty */          }
    break;

  case 25:
#line 122 "e3.y"
    { printf("\n\n");         }
    break;

  case 26:
#line 124 "e3.y"
    { printf("\targ %s", (yyvsp[(2) - (2)].sval));     }
    break;

  case 27:
#line 125 "e3.y"
    { printf(", %s", (yyvsp[(4) - (4)].sval));  }
    break;

  case 28:
#line 126 "e3.y"
    { /* empty */          }
    break;

  case 29:
#line 130 "e3.y"
    { /* empty */ }
    break;

  case 30:
#line 131 "e3.y"
    { yyerror("StmtBlock");                                 }
    break;

  case 31:
#line 134 "e3.y"
    { /* empty */  }
    break;

  case 32:
#line 135 "e3.y"
    { /* empty */                     }
    break;

  case 33:
#line 138 "e3.y"
    { /* empty */           }
    break;

  case 34:
#line 139 "e3.y"
    { /* empty */       }
    break;

  case 35:
#line 140 "e3.y"
    { /* empty */             }
    break;

  case 36:
#line 141 "e3.y"
    { /* empty */         }
    break;

  case 37:
#line 142 "e3.y"
    { /* empty */           }
    break;

  case 38:
#line 143 "e3.y"
    { /* empty */        }
    break;

  case 39:
#line 144 "e3.y"
    { /* empty */       }
    break;

  case 40:
#line 145 "e3.y"
    { /* empty */        }
    break;

  case 41:
#line 146 "e3.y"
    { /* empty */                }
    break;

  case 42:
#line 150 "e3.y"
    { printf("\tpop %s\n\n", (yyvsp[(1) - (3)].sval));      }
    break;

  case 43:
#line 151 "e3.y"
    { /* empty */      }
    break;

  case 44:
#line 152 "e3.y"
    { /* empty */      }
    break;

  case 45:
#line 153 "e3.y"
    { /* empty */        }
    break;

  case 46:
#line 154 "e3.y"
    { /* empty */            }
    break;

  case 47:
#line 155 "e3.y"
    { yyerror("SimpleStmt");                                }
    break;

  case 48:
#line 158 "e3.y"
    { printf("\tpush #1\n\tadd\n");   }
    break;

  case 49:
#line 161 "e3.y"
    { printf("\tpush #1\n\tsub\n");   }
    break;

  case 50:
#line 165 "e3.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval);            }
    break;

  case 51:
#line 166 "e3.y"
    { /* empty */   }
    break;

  case 52:
#line 167 "e3.y"
    { yyerror("LValue");                                    }
    break;

  case 53:
#line 172 "e3.y"
    { /* empty */}
    break;

  case 54:
#line 175 "e3.y"
    { /* empty */   }
    break;

  case 55:
#line 176 "e3.y"
    { /* empty */                }
    break;

  case 56:
#line 179 "e3.y"
    { /* empty */           }
    break;

  case 57:
#line 180 "e3.y"
    { /* empty */           }
    break;

  case 58:
#line 184 "e3.y"
    { /* empty */}
    break;

  case 59:
#line 188 "e3.y"
    { /* empty */ }
    break;

  case 60:
#line 191 "e3.y"
    { _BEG_WHILE; printf("_begWhile_%d:\n", _w); }
    break;

  case 61:
#line 194 "e3.y"
    { printf("\tjz _endWhile_%d\n", _w); }
    break;

  case 62:
#line 197 "e3.y"
    { printf("\tjmp _begWhile_%d\n_endWhile_%d:\n\n", _w, _w); _END_WHILE; }
    break;

  case 63:
#line 200 "e3.y"
    { /* empty */}
    break;

  case 64:
#line 201 "e3.y"
    { /* empty */}
    break;

  case 65:
#line 202 "e3.y"
    { /* empty */}
    break;

  case 66:
#line 203 "e3.y"
    { /* empty */}
    break;

  case 67:
#line 206 "e3.y"
    { _BEG_IF; printf("_begIf_%d:\n", _i); }
    break;

  case 68:
#line 208 "e3.y"
    { printf("\tjz _elseIf_%d\n", _i); }
    break;

  case 69:
#line 211 "e3.y"
    { printf("\tjmp _endIf_%d\n_elseIf_%d:\n", _i, _i); }
    break;

  case 70:
#line 214 "e3.y"
    { printf("_endIf_%d:\n\n", _i); _END_IF; }
    break;

  case 71:
#line 217 "e3.y"
    { printf("\tret\n\n");       }
    break;

  case 72:
#line 218 "e3.y"
    { printf("\tret ~\n\n"); }
    break;

  case 73:
#line 221 "e3.y"
    { printf("\tjmp _endWhile_%d\n", _w); }
    break;

  case 74:
#line 224 "e3.y"
    { /* empty */}
    break;

  case 75:
#line 227 "e3.y"
    { /* empty */           }
    break;

  case 76:
#line 230 "e3.y"
    { /* empty */          }
    break;

  case 77:
#line 231 "e3.y"
    { /* empty */                     }
    break;

  case 78:
#line 232 "e3.y"
    { /* empty */               }
    break;

  case 79:
#line 233 "e3.y"
    { /* empty */           }
    break;

  case 80:
#line 234 "e3.y"
    { printf("\tadd\n");       }
    break;

  case 81:
#line 235 "e3.y"
    { printf("\tsub\n");      }
    break;

  case 82:
#line 236 "e3.y"
    { printf("\tmul\n");       }
    break;

  case 83:
#line 237 "e3.y"
    { printf("\tdiv\n");       }
    break;

  case 84:
#line 238 "e3.y"
    { printf("\tmod\n");      }
    break;

  case 85:
#line 239 "e3.y"
    { printf("\tneg\n");            }
    break;

  case 86:
#line 240 "e3.y"
    { /* empty */     }
    break;

  case 87:
#line 241 "e3.y"
    { /* empty */     }
    break;

  case 88:
#line 242 "e3.y"
    { /* empty */     }
    break;

  case 89:
#line 243 "e3.y"
    { /* empty */     }
    break;

  case 90:
#line 244 "e3.y"
    { printf("\tcmplt\n");       }
    break;

  case 91:
#line 245 "e3.y"
    { printf("\tcmple\n");    }
    break;

  case 92:
#line 246 "e3.y"
    { printf("\tcmpgt\n");       }
    break;

  case 93:
#line 247 "e3.y"
    { printf("\tcmpge\n");       }
    break;

  case 94:
#line 248 "e3.y"
    { printf("\tcmpeq\n");        }
    break;

  case 95:
#line 249 "e3.y"
    { printf("\tcmpne\n");     }
    break;

  case 96:
#line 250 "e3.y"
    { printf("\tand\n");          }
    break;

  case 97:
#line 251 "e3.y"
    { printf("\tor\n");           }
    break;

  case 98:
#line 252 "e3.y"
    { printf("\tnot\n");            }
    break;

  case 99:
#line 253 "e3.y"
    { printf("\treadint %s\n", (yyvsp[(3) - (4)].sval)); }
    break;

  case 100:
#line 254 "e3.y"
    { printf("\treadline %s\n", (yyvsp[(3) - (4)].sval));        }
    break;

  case 101:
#line 258 "e3.y"
    { printf("\tpush #%d\n", (yyvsp[(1) - (1)].ival));  }
    break;

  case 102:
#line 259 "e3.y"
    { printf("\tpush #%f\n", (yyvsp[(1) - (1)].dval)); }
    break;

  case 103:
#line 260 "e3.y"
    { printf("\tpush #%d\n", (yyvsp[(1) - (1)].bval));   }
    break;

  case 104:
#line 261 "e3.y"
    { printf("\tpush #%s\n", (yyvsp[(1) - (1)].sval)); }
    break;

  case 105:
#line 262 "e3.y"
    {                  }
    break;


/* Line 1267 of yacc.c.  */
#line 2166 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 264 "e3.y"


int main() {
    return yyparse();
}

void yyerror(const char* msg) {
    printf("ERROR: %s at line %d \n", msg, cur_lineno);
}
