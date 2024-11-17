/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FOR = 258,                     /* FOR  */
    LOOP = 259,                    /* LOOP  */
    IN = 260,                      /* IN  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    WHILE = 263,                   /* WHILE  */
    LET = 264,                     /* LET  */
    MUT = 265,                     /* MUT  */
    FN = 266,                      /* FN  */
    CONTINUE = 267,                /* CONTINUE  */
    ENUM = 268,                    /* ENUM  */
    CONST = 269,                   /* CONST  */
    STRUCT = 270,                  /* STRUCT  */
    IMPL = 271,                    /* IMPL  */
    TRAIT = 272,                   /* TRAIT  */
    PUB = 273,                     /* PUB  */
    CRATE = 274,                   /* CRATE  */
    SELF = 275,                    /* SELF  */
    SUPER = 276,                   /* SUPER  */
    ID = 277,                      /* ID  */
    INT_LITERAL = 278,             /* INT_LITERAL  */
    TRUE = 279,                    /* TRUE  */
    FALSE = 280,                   /* FALSE  */
    STRING_LITERAL = 281,          /* STRING_LITERAL  */
    FLOAT_LITERAL = 282,           /* FLOAT_LITERAL  */
    CHAR_LITERAL = 283,            /* CHAR_LITERAL  */
    INT = 284,                     /* INT  */
    BOOL = 285,                    /* BOOL  */
    STRING = 286,                  /* STRING  */
    FLOAT = 287,                   /* FLOAT  */
    CHAR = 288,                    /* CHAR  */
    RIGHT_ARROW = 289,             /* RIGHT_ARROW  */
    RETURN = 290,                  /* RETURN  */
    BREAK = 291,                   /* BREAK  */
    RANGE = 292,                   /* RANGE  */
    RANGE_IN = 293,                /* RANGE_IN  */
    AND = 294,                     /* AND  */
    OR = 295,                      /* OR  */
    LESS_EQUAL = 296,              /* LESS_EQUAL  */
    GREATER_EQUAL = 297,           /* GREATER_EQUAL  */
    EQUAL = 298,                   /* EQUAL  */
    NOT_EQUAL = 299,               /* NOT_EQUAL  */
    UMINUS = 300                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
