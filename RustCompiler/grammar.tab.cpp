/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FOR = 3,                        /* FOR  */
  YYSYMBOL_LOOP = 4,                       /* LOOP  */
  YYSYMBOL_IN = 5,                         /* IN  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_LET = 9,                        /* LET  */
  YYSYMBOL_MUT = 10,                       /* MUT  */
  YYSYMBOL_FN = 11,                        /* FN  */
  YYSYMBOL_CONTINUE = 12,                  /* CONTINUE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_CONST = 14,                     /* CONST  */
  YYSYMBOL_STRUCT = 15,                    /* STRUCT  */
  YYSYMBOL_IMPL = 16,                      /* IMPL  */
  YYSYMBOL_TRAIT = 17,                     /* TRAIT  */
  YYSYMBOL_PUB = 18,                       /* PUB  */
  YYSYMBOL_CRATE = 19,                     /* CRATE  */
  YYSYMBOL_SELF = 20,                      /* SELF  */
  YYSYMBOL_SUPER = 21,                     /* SUPER  */
  YYSYMBOL_ID = 22,                        /* ID  */
  YYSYMBOL_INT_LITERAL = 23,               /* INT_LITERAL  */
  YYSYMBOL_TRUE = 24,                      /* TRUE  */
  YYSYMBOL_FALSE = 25,                     /* FALSE  */
  YYSYMBOL_STRING_LITERAL = 26,            /* STRING_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 27,             /* FLOAT_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 28,              /* CHAR_LITERAL  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_BOOL = 30,                      /* BOOL  */
  YYSYMBOL_STRING = 31,                    /* STRING  */
  YYSYMBOL_FLOAT = 32,                     /* FLOAT  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_RIGHT_ARROW = 38,               /* RIGHT_ARROW  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_BREAK = 40,                     /* BREAK  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_RANGE = 43,                     /* RANGE  */
  YYSYMBOL_RANGE_IN = 44,                  /* RANGE_IN  */
  YYSYMBOL_AND = 45,                       /* AND  */
  YYSYMBOL_OR = 46,                        /* OR  */
  YYSYMBOL_47_ = 47,                       /* '<'  */
  YYSYMBOL_48_ = 48,                       /* '>'  */
  YYSYMBOL_LESS_EQUAL = 49,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 50,             /* GREATER_EQUAL  */
  YYSYMBOL_EQUAL = 51,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 52,                 /* NOT_EQUAL  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '-'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '!'  */
  YYSYMBOL_UMINUS = 58,                    /* UMINUS  */
  YYSYMBOL_59_ = 59,                       /* '?'  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* ','  */
  YYSYMBOL_64_ = 64,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_Program = 66,                   /* Program  */
  YYSYMBOL_ProgramMember = 67,             /* ProgramMember  */
  YYSYMBOL_ProgramMembers = 68,            /* ProgramMembers  */
  YYSYMBOL_ExprList_final = 69,            /* ExprList_final  */
  YYSYMBOL_ExprList = 70,                  /* ExprList  */
  YYSYMBOL_ExprWithoutBlock = 71,          /* ExprWithoutBlock  */
  YYSYMBOL_Literal = 72,                   /* Literal  */
  YYSYMBOL_RangeExpr = 73,                 /* RangeExpr  */
  YYSYMBOL_ExprWithBlock = 74,             /* ExprWithBlock  */
  YYSYMBOL_LoopExpr = 75,                  /* LoopExpr  */
  YYSYMBOL_WhileExpr = 76,                 /* WhileExpr  */
  YYSYMBOL_ForExpr = 77,                   /* ForExpr  */
  YYSYMBOL_IfExpr = 78,                    /* IfExpr  */
  YYSYMBOL_BlockExpr = 79,                 /* BlockExpr  */
  YYSYMBOL_StmtList = 80,                  /* StmtList  */
  YYSYMBOL_Stmt = 81,                      /* Stmt  */
  YYSYMBOL_LetStmt = 82,                   /* LetStmt  */
  YYSYMBOL_Enum = 83,                      /* Enum  */
  YYSYMBOL_EnumItems = 84,                 /* EnumItems  */
  YYSYMBOL_EnumItem = 85,                  /* EnumItem  */
  YYSYMBOL_Function = 86,                  /* Function  */
  YYSYMBOL_FuncParamList_final = 87,       /* FuncParamList_final  */
  YYSYMBOL_FuncParamList = 88,             /* FuncParamList  */
  YYSYMBOL_FuncParam = 89,                 /* FuncParam  */
  YYSYMBOL_Struct = 90,                    /* Struct  */
  YYSYMBOL_StructFields_final = 91,        /* StructFields_final  */
  YYSYMBOL_StructFields = 92,              /* StructFields  */
  YYSYMBOL_StructField = 93,               /* StructField  */
  YYSYMBOL_Impl = 94,                      /* Impl  */
  YYSYMBOL_InherentImpl = 95,              /* InherentImpl  */
  YYSYMBOL_TraitImpl = 96,                 /* TraitImpl  */
  YYSYMBOL_Trait = 97,                     /* Trait  */
  YYSYMBOL_AssociatedItems_final = 98,     /* AssociatedItems_final  */
  YYSYMBOL_AssociatedItems = 99,           /* AssociatedItems  */
  YYSYMBOL_AssociatedItem = 100,           /* AssociatedItem  */
  YYSYMBOL_ConstStmt = 101,                /* ConstStmt  */
  YYSYMBOL_Type = 102,                     /* Type  */
  YYSYMBOL_Visibility = 103                /* Visibility  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  369

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,     2,     2,     2,
      35,    62,    55,    53,    63,    54,    60,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    34,
      47,    42,    48,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    38,
      39,    40,    43,    44,    45,    46,    49,    50,    51,    52,
      58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    44,    45,    50,    51,    52,
      55,    56,    57,    58,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   146,   147,   148,   149,
     150,   151,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   172,   173,   174,
     175,   178,   181,   182,   185,   186,   189,   190,   191,   192,
     195,   196,   201,   202,   205,   206,   207,   208,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     226,   227,   230,   231,   234,   235,   236,   237,   238,   239,
     240,   241,   245,   246,   247,   248,   251,   252,   253,   256,
     257,   260,   261,   266,   267,   270,   271,   272,   275,   276,
     279,   280,   284,   285,   288,   291,   295,   298,   299,   302,
     303,   306,   307,   308,   309,   313,   314,   315,   319,   320,
     321,   322,   323,   324,   328,   329,   330,   331
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FOR", "LOOP", "IN",
  "IF", "ELSE", "WHILE", "LET", "MUT", "FN", "CONTINUE", "ENUM", "CONST",
  "STRUCT", "IMPL", "TRAIT", "PUB", "CRATE", "SELF", "SUPER", "ID",
  "INT_LITERAL", "TRUE", "FALSE", "STRING_LITERAL", "FLOAT_LITERAL",
  "CHAR_LITERAL", "INT", "BOOL", "STRING", "FLOAT", "CHAR", "';'", "'('",
  "'}'", "']'", "RIGHT_ARROW", "RETURN", "BREAK", "'{'", "'='", "RANGE",
  "RANGE_IN", "AND", "OR", "'<'", "'>'", "LESS_EQUAL", "GREATER_EQUAL",
  "EQUAL", "NOT_EQUAL", "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'?'",
  "'.'", "'['", "')'", "','", "':'", "$accept", "Program", "ProgramMember",
  "ProgramMembers", "ExprList_final", "ExprList", "ExprWithoutBlock",
  "Literal", "RangeExpr", "ExprWithBlock", "LoopExpr", "WhileExpr",
  "ForExpr", "IfExpr", "BlockExpr", "StmtList", "Stmt", "LetStmt", "Enum",
  "EnumItems", "EnumItem", "Function", "FuncParamList_final",
  "FuncParamList", "FuncParam", "Struct", "StructFields_final",
  "StructFields", "StructField", "Impl", "InherentImpl", "TraitImpl",
  "Trait", "AssociatedItems_final", "AssociatedItems", "AssociatedItem",
  "ConstStmt", "Type", "Visibility", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-163)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     240,   -15,   -14,    18,    40,    13,    62,    39,   125,  -163,
     240,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,   251,
      91,   102,    84,    41,   152,  -163,  -163,  -163,  -163,  -163,
     115,   118,   126,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,    -1,     8,   120,  -163,     9,   120,   143,   143,   100,
     101,   103,   147,   106,   127,   141,  -163,    64,   -34,  -163,
     168,  -163,    -9,   144,   171,   150,  -163,   196,   178,  -163,
     186,   143,  -163,  -163,    52,   192,  -163,  -163,  -163,   159,
     120,    42,    -1,     9,   414,  -163,    -2,    67,  -163,   414,
     120,  -163,     9,   181,   143,  -163,  -163,  -163,  -163,  -163,
     120,  -163,  -163,   120,   324,  -163,  -163,   214,   237,   219,
     414,   414,  -163,   234,  -163,  -163,  -163,  -163,  -163,  -163,
     414,   414,   414,   457,   414,   414,   414,   414,   974,  -163,
    -163,  1013,  -163,  -163,  -163,  -163,  -163,  -163,     9,   414,
      43,   593,  -163,  -163,   120,   247,  -163,    66,     0,  -163,
    -163,   132,   616,   367,  -163,  -163,  -163,   265,  -163,   912,
     954,   912,   954,   414,   932,   993,   974,  1013,   974,  1013,
    1032,  1051,  1032,  1051,   179,   284,   179,   284,   250,   226,
     478,   639,   414,   457,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,  -163,   268,   414,
     457,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,  -163,   285,   414,   272,   974,  1013,
    -163,  -163,  -163,  -163,  -163,  -163,   302,   -23,  -163,  -163,
    -163,  -163,   414,   318,   322,  -163,  -163,   269,   974,  1013,
    -163,  -163,  -163,   414,   414,   414,   974,  1013,  1032,  1051,
    1032,  1051,   225,  1066,   225,  1066,   142,   156,   142,   156,
     142,   156,   142,   156,   142,   156,   142,   156,   187,   279,
     187,   279,   179,   284,   179,   284,   306,   751,   831,  1032,
    1051,  1032,  1051,   225,  1066,   225,  1066,   142,   156,   142,
     156,   142,   156,   142,   156,   142,   156,   142,   156,   187,
     279,   187,   279,   179,   284,   179,   284,   321,   771,   851,
    -163,    -6,  -163,   414,   120,   912,   954,   219,   219,  -163,
     974,  1013,   791,   871,   811,   891,   414,  -163,  -163,   414,
    -163,  -163,  -163,   414,   120,   501,   662,    30,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,   275,   295,   524,   685,
      31,  -163,  -163,  -163,   414,  -163,  -163,  -163,  -163,  -163,
     414,   547,   708,   570,   731,  -163,  -163,  -163,  -163
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,   214,     0,    15,
       2,     3,     4,     6,     8,   192,   193,     7,     5,     0,
       0,     0,     0,     0,   213,   208,   212,   209,   211,   210,
       0,     0,     0,     1,    16,     9,    10,    12,    14,    13,
      11,   176,     0,     0,   184,   185,     0,   197,   197,     0,
       0,     0,     0,     0,     0,   177,   179,   165,     0,   162,
       0,   213,     0,     0,     0,   186,   188,     0,     0,   202,
       0,   198,   199,   204,     0,     0,   215,   216,   217,     0,
       0,     0,   178,   185,     0,   160,     0,   164,   205,     0,
       0,   183,   187,     0,   197,   194,   200,   201,   203,   196,
       0,   181,   175,     0,     0,   174,   180,     0,     0,     0,
       0,     0,    84,   105,   108,   110,   111,   107,   109,   106,
       0,   104,    83,   120,     0,     0,     0,    17,   169,    24,
     101,   168,   128,   129,   130,   127,   161,   163,   185,     0,
       0,     0,   191,   189,     0,     0,   182,     0,     0,   144,
     141,     0,     0,     0,   142,   147,   171,     0,   131,     0,
       0,     0,     0,    17,     0,     0,   103,   102,    82,    81,
     119,   118,   126,   125,    68,    67,    70,    69,     0,    19,
      21,    20,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,   167,   166,
     207,   206,   190,   195,   173,   172,     0,     0,   145,   146,
     140,   143,     0,   137,   136,   133,   132,     0,    21,    20,
      86,    85,    87,    18,     0,     0,    80,    79,   115,   113,
     124,   122,    78,    76,    74,    72,    53,    54,    49,    50,
      61,    62,    57,    58,    41,    42,    45,    46,    25,    27,
      29,    31,    33,    35,    37,    39,   100,     0,     0,   114,
     112,   123,   121,    77,    75,    73,    71,    55,    56,    51,
      52,    63,    64,    59,    60,    43,    44,    47,    48,    26,
      28,    30,    32,    34,    36,    38,    40,    99,     0,     0,
     170,     0,   159,     0,     0,     0,     0,     0,     0,    96,
      23,    22,     0,     0,     0,     0,    17,    95,    93,    17,
      94,    92,   157,     0,     0,     0,     0,     0,   135,   134,
     139,   138,    91,    89,    90,    88,     0,     0,     0,     0,
       0,   151,   150,   158,     0,    98,    97,   155,   154,   156,
       0,     0,     0,     0,     0,   149,   148,   153,   152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,   351,  -163,  -162,  -163,   -72,  -163,  -163,   110,
    -163,  -163,  -163,  -163,   -91,  -163,   209,  -163,   346,  -163,
     280,     4,  -163,  -163,   287,   353,   -77,  -163,   282,   358,
    -163,  -163,   361,   -35,  -163,   311,     5,   -43,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    10,   178,   179,   238,   129,   130,   239,
     132,   133,   134,   135,   105,   153,   154,   155,    11,    58,
      59,    69,    54,    55,    56,    13,    64,    65,    66,    14,
      15,    16,    17,    70,    71,    72,    73,    30,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   237,    85,    68,    12,    18,   107,    20,    21,    52,
     226,   312,   128,    75,    12,    18,     7,   140,   158,   313,
      57,    53,   227,    36,    40,    88,     7,     7,   332,    86,
      57,    63,   151,    89,   136,    24,   333,   101,   159,   161,
      22,   314,    25,    26,    27,    28,    29,   142,   164,   166,
     168,   170,   172,   174,   176,   180,   225,   146,   334,   145,
     147,   217,    23,     1,   353,   359,     3,   218,   233,   234,
     235,   236,   354,   360,    32,    44,   102,   220,    97,    98,
     103,   151,    45,   104,    31,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     224,   222,   197,   198,   199,    83,    84,   104,   138,   139,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,    33,    41,   277,   279,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   299,   301,
     303,   305,    61,    42,   308,    49,    50,    51,    43,    25,
      26,    27,    28,    29,     1,    46,    47,     3,    19,    48,
     315,     7,    76,    77,   346,    78,   228,   347,    19,    79,
      80,   320,   322,   324,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    81,
      87,   197,   198,   199,   131,   193,   194,   195,   196,   141,
      60,   197,   198,   199,    82,    74,    74,    91,    90,   210,
     211,   212,   213,    92,   152,   214,   215,   216,    93,    94,
     160,   162,    95,   100,   338,   339,   340,   341,    99,    74,
     165,   167,   169,   171,   173,   175,   177,   181,   197,   198,
     199,   335,   195,   196,    60,   144,   197,   198,   199,   219,
     156,     1,    74,     2,     3,     4,     5,     6,     7,   157,
     104,   348,     1,   152,     2,     3,     4,     5,     6,   163,
     232,   337,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   361,   223,   197,   198,   199,   242,   363,   243,
     276,   350,   247,   249,   251,   253,   255,   257,   259,   261,
     263,   265,   267,   269,   271,   273,   275,   307,   310,   278,
     280,   282,   284,   286,   288,   290,   292,   294,   296,   298,
     300,   302,   304,   306,   311,   317,   309,   108,   109,   318,
     110,   319,   111,   148,   212,   213,   112,   355,   214,   215,
     216,   326,   316,   214,   215,   216,   113,   114,   115,   116,
     117,   118,   119,   321,   323,   325,   329,   356,   149,   120,
     150,    34,   231,   121,   122,    35,   137,   123,   124,   106,
     108,   109,    37,   110,   143,   111,   148,    38,   125,   112,
      39,   126,    96,     0,     0,   127,     0,     0,     0,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,   149,   120,   230,     0,     0,   121,   122,     0,     0,
     123,   124,     0,     0,     0,     0,     0,   108,   109,     0,
     110,   125,   111,   336,   126,     0,   112,     0,   127,     0,
       0,     0,     0,     0,     0,     0,   113,   114,   115,   116,
     117,   118,   119,   349,     0,     0,     0,     0,     0,   120,
       0,     0,     0,   121,   122,     0,     0,   123,   124,     0,
     108,   109,     0,   110,   362,   111,     0,     0,   125,   112,
     364,   126,     0,     0,     0,   127,     0,     0,     0,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,   121,   122,     0,     0,
      -1,    -1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   244,     0,   126,     0,     0,     0,   127,     0,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   351,     0,   197,   198,   199,
       0,     0,     0,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   357,     0,
     197,   198,   199,     0,     0,     0,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   365,     0,   197,   198,   199,     0,     0,     0,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   367,     0,   197,   198,   199,     0,
       0,     0,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   221,     0,   197,
     198,   199,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     229,     0,   214,   215,   216,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   245,     0,   214,   215,   216,     0,     0,
       0,     0,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   352,     0,   214,   215,
     216,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   358,
       0,   214,   215,   216,     0,     0,     0,     0,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   366,     0,   214,   215,   216,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   368,     0,   214,   215,   216,
       0,     0,     0,     0,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   327,     0,
     214,   215,   216,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   330,     0,
     197,   198,   199,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   342,     0,
     197,   198,   199,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   344,     0,
     197,   198,   199,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   328,     0,
     197,   198,   199,     0,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   331,     0,
     214,   215,   216,     0,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   343,     0,
     214,   215,   216,     0,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   345,     0,
     214,   215,   216,     0,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,     0,     0,
     214,   215,   216,   104,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,   197,   198,   199,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,   197,   198,   199,   240,   104,     0,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,     0,     0,   214,   215,   216,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,     0,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
       0,     0,   214,   215,   216,   241,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
       0,     0,   214,   215,   216,    -1,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,   197,   198,   199,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,     0,     0,
     214,   215,   216,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,     0,     0,   214,   215,   216
};

static const yytype_int16 yycheck[] =
{
      43,   163,    36,    46,     0,     0,    83,    22,    22,    10,
      10,    34,    84,    48,    10,    10,    18,    89,   109,    42,
      22,    22,    22,    19,    19,    34,    18,    18,    34,    63,
      22,    22,   104,    42,    36,    22,    42,    80,   110,   111,
      22,    64,    29,    30,    31,    32,    33,    90,   120,   121,
     122,   123,   124,   125,   126,   127,   147,   100,    64,    94,
     103,   138,    22,    11,    34,    34,    14,   139,   159,   160,
     161,   162,    42,    42,    35,    34,    34,    34,    74,    74,
      38,   153,    41,    41,    22,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      34,   144,    59,    60,    61,    41,    42,    41,    41,    42,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,    35,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,    22,    41,   216,    19,    20,    21,    64,    29,
      30,    31,    32,    33,    11,     3,    41,    14,     0,    41,
     232,    18,    62,    62,   326,    62,    34,   329,    10,    22,
      64,   243,   244,   245,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    62,
      22,    59,    60,    61,    84,    53,    54,    55,    56,    89,
      42,    59,    60,    61,    63,    47,    48,    36,    64,    53,
      54,    55,    56,    63,   104,    59,    60,    61,    22,    41,
     110,   111,    36,    64,   315,   316,   317,   318,    36,    71,
     120,   121,   122,   123,   124,   125,   126,   127,    59,    60,
      61,   313,    55,    56,    86,    64,    59,    60,    61,   139,
      36,    11,    94,    13,    14,    15,    16,    17,    18,    22,
      41,   333,    11,   153,    13,    14,    15,    16,    17,    35,
       5,   314,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,   354,    36,    59,    60,    61,    37,   360,    63,
      22,   334,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    22,    36,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,    22,     7,   216,     3,     4,     7,
       6,    62,     8,     9,    55,    56,    12,    62,    59,    60,
      61,    35,   232,    59,    60,    61,    22,    23,    24,    25,
      26,    27,    28,   243,   244,   245,    35,    62,    34,    35,
      36,    10,   153,    39,    40,    19,    86,    43,    44,    82,
       3,     4,    19,     6,    92,     8,     9,    19,    54,    12,
      19,    57,    71,    -1,    -1,    61,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,    54,     8,   313,    57,    -1,    12,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,   333,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
       3,     4,    -1,     6,   354,     8,    -1,    -1,    54,    12,
     360,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    34,    -1,    57,    -1,    -1,    -1,    61,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    34,    -1,    59,    60,    61,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    34,    -1,
      59,    60,    61,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    34,    -1,    59,    60,    61,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    34,    -1,    59,    60,    61,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    34,    -1,    59,
      60,    61,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      34,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    34,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    34,    -1,    59,    60,
      61,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    34,
      -1,    59,    60,    61,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    34,    -1,    59,    60,    61,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    34,    -1,    59,    60,    61,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    37,    -1,
      59,    60,    61,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    61,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    62,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    61,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    13,    14,    15,    16,    17,    18,    66,    67,
      68,    83,    86,    90,    94,    95,    96,    97,   101,   103,
      22,    22,    22,    22,    22,    29,    30,    31,    32,    33,
     102,    22,    35,     0,    67,    83,    86,    90,    94,    97,
     101,    35,    41,    64,    34,    41,     3,    41,    41,    19,
      20,    21,    10,    22,    87,    88,    89,    22,    84,    85,
     103,    22,   102,    22,    91,    92,    93,   103,   102,    86,
      98,    99,   100,   101,   103,    98,    62,    62,    62,    22,
      64,    62,    63,    41,    42,    36,    63,    22,    34,    42,
      64,    36,    63,    22,    41,    36,   100,    86,   101,    36,
      64,   102,    34,    38,    41,    79,    89,    91,     3,     4,
       6,     8,    12,    22,    23,    24,    25,    26,    27,    28,
      35,    39,    40,    43,    44,    54,    57,    61,    71,    72,
      73,    74,    75,    76,    77,    78,    36,    85,    41,    42,
      71,    74,   102,    93,    64,    98,   102,   102,     9,    34,
      36,    71,    74,    80,    81,    82,    36,    22,    79,    71,
      74,    71,    74,    35,    71,    74,    71,    74,    71,    74,
      71,    74,    71,    74,    71,    74,    71,    74,    69,    70,
      71,    74,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    59,    60,    61,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    59,    60,    61,    91,    71,    74,
      34,    34,   102,    36,    34,    79,    10,    22,    34,    34,
      36,    81,     5,    79,    79,    79,    79,    69,    71,    74,
      62,    62,    37,    63,    34,    34,    71,    74,    71,    74,
      71,    74,    71,    74,    71,    74,    71,    74,    71,    74,
      71,    74,    71,    74,    71,    74,    71,    74,    71,    74,
      71,    74,    71,    74,    71,    74,    22,    71,    74,    71,
      74,    71,    74,    71,    74,    71,    74,    71,    74,    71,
      74,    71,    74,    71,    74,    71,    74,    71,    74,    71,
      74,    71,    74,    71,    74,    71,    74,    22,    71,    74,
      36,    22,    34,    42,    64,    71,    74,     7,     7,    62,
      71,    74,    71,    74,    71,    74,    35,    37,    37,    35,
      37,    37,    34,    42,    64,    71,    74,   102,    79,    79,
      79,    79,    37,    37,    37,    37,    69,    69,    71,    74,
     102,    34,    34,    34,    42,    62,    62,    34,    34,    34,
      42,    71,    74,    71,    74,    34,    34,    34,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    87,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    96,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     1,     2,     0,     2,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     3,     3,     3,     5,     5,
       5,     5,     4,     4,     4,     4,     4,     6,     6,     3,
       3,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     2,     2,     2,     2,
       1,     3,     3,     3,     3,     2,     2,     1,     1,     1,
       1,     2,     3,     3,     5,     5,     3,     3,     5,     5,
       3,     2,     1,     2,     1,     2,     2,     1,     7,     7,
       5,     5,     8,     8,     6,     6,     6,     4,     5,     3,
       5,     6,     1,     3,     2,     1,     4,     4,     3,     3,
       5,     4,     8,     8,     6,     6,     0,     1,     2,     1,
       3,     3,     4,     5,     3,     0,     1,     2,     1,     3,
       4,     3,     1,     1,     5,     7,     5,     0,     1,     1,
       2,     2,     1,     2,     1,     5,     7,     7,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1564 "grammar.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

