#include <iostream>
#include <fstream>
#include "grammar.tab.h"

extern FILE* yyin;
extern int yyparse();
extern int yylex();


int main(const int argc, char** argv)
{
    if (argc > 1)
    {
        std::cout << "Opening file " << argv[1] << std::endl;
        const auto err = fopen_s(&yyin, argv[1], "r");

        if (err != NULL) {
            std::cout << "Failed to open file: " << argv[1] << std::endl;
        }
    }
    else { yyin = stdin; }

    std::cout << "Building syntax tree" << std::endl;
    yyparse();
}
