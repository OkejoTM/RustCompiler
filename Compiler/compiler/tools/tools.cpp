#include "tools.h"

int LineNum::lineNum = 0;

void LineNum::setLineNum(int line) {
    LineNum::lineNum = line;
}

int LineNum::getLineNum() {
    return LineNum::lineNum;
}