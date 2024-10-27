%option noyywrap 
%option never-interactive 
%option yylineno
%option nounistd
 
DIGIT [0-9] 
 
%x CHAR 
%x STRING 
%x ML_COMMENT 
%x SHIELD_STRING 
 
%{  
    #include <string>
    #include <algorithm>
    #include <charconv>
    #include <iostream>
    #include <cstdio>
    #include <cstring>
    #include <stdlib.h>

    using namespace std; 
     
    void removeCharacterFromString(string& str, char ch); 
    void removeSubstringFromString(string& str, const string& substr);
    void convertCharacterCodeToString(char characterCode[], int startPosition, char *result); 
%} 
 
%% 
 
%{ 
    string currentString; 
    string currentCommentString;
    double currentFloat; 
    int currentInteger;
    char currentCharacter;
    int octothorpeCount = 0;     
%} 
 
\n { } 
\s { } 
 
as { cout << "Found KW_AS: " << yytext << endl; } 
break { cout << "Found KW_BREAK: " << yytext << endl; } 
const { cout << "Found KW_CONST: " << yytext << endl; }
continue { cout << "Found KW_CONTINUE: " << yytext << endl; }
crate { cout << "Found KW_CRATE: " << yytext << endl; }
else { cout << "Found KW_ELSE: " << yytext << endl; }
enum { cout << "Found KW_ENUM: " << yytext << endl; }
extern { cout << "Found KW_EXTERN: " << yytext << endl; }
false { cout << "Found KW_FALSE: " << yytext << endl; }
fn { cout << "Found KW_FN: " << yytext << endl; }
for { cout << "Found KW_FOR: " << yytext << endl; }
if { cout << "Found KW_IF: " << yytext << endl; }
impl { cout << "Found KW_IMPL: " << yytext << endl; }
in { cout << "Found KW_IN: " << yytext << endl; }
let { cout << "Found KW_LET: " << yytext << endl; }
loop { cout << "Found KW_LOOP: " << yytext << endl; }
match { cout << "Found KW_MATCH: " << yytext << endl; }
mod { cout << "Found KW_MOD: " << yytext << endl; }
move { cout << "Found KW_MOVE: " << yytext << endl; }
mut { cout << "Found KW_MUT: " << yytext << endl; }
pub { cout << "Found KW_PUB: " << yytext << endl; }
ref { cout << "Found KW_REF: " << yytext << endl; }
return { cout << "Found KW_RETURN: " << yytext << endl; }
self { cout << "Found KW_SELFVALUE: " << yytext << endl; }
Self { cout << "Found KW_SELFTYPE: " << yytext << endl; }
static { cout << "Found KW_STATIC: " << yytext << endl; }
struct { cout << "Found KW_STRUCT: " << yytext << endl; }
super { cout << "Found KW_SUPER: " << yytext << endl; }
trait { cout << "Found KW_TRAIT: " << yytext << endl; }
true  { cout << "Found KW_TRUE: " << yytext << endl; }
type { cout << "Found KW_TYPE: " << yytext << endl; }
unsafe { cout << "Found KW_UNSAFE: " << yytext << endl; }
use { cout << "Found KW_USE: " << yytext << endl; }
where { cout << "Found KW_WHERE: " << yytext << endl; }
while { cout << "Found KW_WHILE: " << yytext << endl; }
 
 
bool { cout << "Found TYPE_BOOL: " << yytext << endl; }
i32 { cout << "Found TYPE_I32: " << yytext << endl; }
i64 { cout << "Found TYPE_I64: " << yytext << endl; }
f32 { cout << "Found TYPE_F32: " << yytext << endl; }
f64 { cout << "Found TYPE_F64: " << yytext << endl; }
String { cout << "Found TYPE_STRING: " << yytext << endl; }
char { cout << "Found TYPE_CHAR: " << yytext << endl; }
 
 
"+" { cout << "Found OPERATOR_PLUS: " << yytext << endl; }
"-" { cout << "Found OPERATOR_MINUS: " << yytext << endl; }
"*" { cout << "Found OPERATOR_MUL: " << yytext << endl; }
"/" { cout << "Found OPERATOR_DIV: " << yytext << endl; }
"%" { cout << "Found OPERATOR_MOD: " << yytext << endl; }
 
"=" { cout << "Found OPERATOR_ASSIGNMENT: " << yytext << endl; }
"==" { cout << "Found OPERATOR_EQUAL: " << yytext << endl; }
"!=" { cout << "Found OPERATOR_NOT_EQUAL: " << yytext << endl; }
"<" { cout << "Found OPERATOR_LESS: " << yytext << endl; }
">" { cout << "Found OPERATOR_MORE: " << yytext << endl; }
"<=" { cout << "Found OPERATOR_LESS_OR_EQUAL: " << yytext << endl; }
">=" { cout << "Found OPERATOR_MORE_OR_EQUAL: " << yytext << endl; }
 
"&" { cout << "Found OPERATOR_AMPERSAND: " << yytext << endl; }
"|" { cout << "Found OPERATOR_BIT_OR: " << yytext << endl; }
"!" { cout << "Found OPERATOR_BIT_NOT: " << yytext << endl; }
"^" { cout << "Found OPERATOR_BIT_XOR: " << yytext << endl; }
"<<" { cout << "Found OPERATOR_BIT_LEFT_SHIFT: " << yytext << endl; }
">>" { cout << "Found OPERATOR_BIT_RIGHT_SHIFT: " << yytext << endl; }

 
"&&" { cout << "Found OPERATOR_AND: " << yytext << endl; }
"||" { cout << "Found OPERATOR_OR: " << yytext << endl; } 
 
"+=" { cout << "Found OPERATOR_PLUS_ASSIGNMENT: " << yytext << endl; }
"-=" { cout << "Found OPERATOR_MINUS_ASSIGNMENT: " << yytext << endl; }
"*=" { cout << "Found OPERATOR_MUL_ASSIGNMENT: " << yytext << endl; }
 
"/=" { cout << "Found OPERATOR_DIV_ASSIGNMENT: " << yytext << endl; }
"%=" { cout << "Found OPERATOR_MOD_ASSIGNMENT: " << yytext << endl; }
"&=" { cout << "Found OPERATOR_BIT_AND_ASSIGNMENT: " << yytext << endl; }
"|=" { cout << "Found OPERATOR_BIT_OR_ASSIGNMENT: " << yytext << endl; }
"^=" { cout << "Found OPERATOR_BIT_XOR_ASSIGNMENT: " << yytext << endl; }
"<<=" { cout << "Found OPERATOR_BIT_LEFT_SHIFT_ASSIGNMENT: " << yytext << endl; }
">>=" { cout << "Found OPERATOR_BIT_RIGHT_SHIFT_ASSIGNMENT: " << yytext << endl; }

 
"." { cout << "Found OPERATOR_POINT: " << yytext << endl; }
".." { cout << "Found OPERATOR_RANGE: " << yytext << endl; }
"..=" { cout << "Found OPERATOR_RANGE_ASSIGNMENT: " << yytext << endl; }
"->" { cout << "Found OPERATOR_ARROW: " << yytext << endl; }

 
"(" { cout << "Found LEFT_ROUND_BRACKET: " << yytext << endl; }
")" { cout << "Found RIGHT_ROUND_BRACKET: " << yytext << endl; }
"[" { cout << "Found LEFT_SQUARE_BRACKET: " << yytext << endl; }
"]" { cout << "Found RIGHT_SQUARE_BRACKET: " << yytext << endl; }
"{" { cout << "Found LEFT_FIGURE_BRACKET: " << yytext << endl; }
"}" { cout << "Found RIGHT_FIGURE_BRACKET: " << yytext << endl; }

 
"," { cout << "Found COMMA: " << yytext << endl; }
";" { cout << "Found SEMICOLON: " << yytext << endl; }
":" { cout << "Found COLON: " << yytext << endl; }
"::" { cout << "Found TWO_COLON: " << yytext << endl; }
 
 
"/*" { currentCommentString.clear(); BEGIN(ML_COMMENT); } 
 <ML_COMMENT>[^*\n]* { currentCommentString += yytext; } 
 <ML_COMMENT>"*"+[^*/\n]* { currentCommentString += yytext; } 
 <ML_COMMENT>\n { currentCommentString += yytext; } 
 <ML_COMMENT>"*"+"/" { cout << "Found ML_COMMENT: " << currentCommentString << endl; BEGIN(INITIAL); } 
 <ML_COMMENT><<EOF>> { cout << "ML_COMMENT Error\n"; BEGIN(INITIAL);} 
 
 \/\/.* { cout << "Found COMMENT: " << string{yytext + 2} << endl; } 
 
\" { currentString.clear(); BEGIN(STRING); } 
<STRING>[^\\\"\n]+ { currentString += yytext; } 
<STRING>\n { } 
<STRING>\\n { currentString += "\n"; } 
<STRING>\\r { currentString += "\r"; } 
<STRING>\\t { currentString += "\t"; } 
<STRING>\\0 { currentString += "\0"; } 
<STRING>\\\\ { currentString += "\\"; } 
<STRING>\\\" { currentString += "\""; } 
<STRING>\\u\{(([0-9A-Fa-f])_*){1,6}\} { 
    char result[2]; 
    convertCharacterCodeToString(yytext, 3, result);   
    currentString += result;     
} 
<STRING>\\x[0-7][a-fA-F0-9] { 
    char result[2]; 
    convertCharacterCodeToString(yytext, 2, result);   
    currentString += result;    
} 
<STRING>\" { cout << "Found STRING: " << currentString << " " << currentString.size() << endl; BEGIN(INITIAL);} 
<STRING><<EOF>> { cout << "STRING Error: there is no closing quotation mark\n"; BEGIN(INITIAL);} 
 
r(#*)\" {currentString.clear(); octothorpeCount = strlen(yytext) - 2; BEGIN(SHIELD_STRING);} 
<SHIELD_STRING>[^\"]+ { currentString += yytext; } 
<SHIELD_STRING>\"#* { 
    int closingOctothorpeCount = strlen(yytext) - 1; 
    if (closingOctothorpeCount == octothorpeCount) { 
        cout << "Found STRING: " << currentString << endl; 
        BEGIN(INITIAL); 
    } 
    else if (closingOctothorpeCount < octothorpeCount) { 
        currentString += yytext; 
    } 
    else {        
        cout << "SHIELD_STRING Error: invalid closing sequence with too many octothorpes\n"; 
        BEGIN(INITIAL); 
    } 
} 
<SHIELD_STRING><<EOF>> { cout << "SHIELD_STRING Error: there is no closing quotation mark\n"; BEGIN(INITIAL);} 
 
 
\' { currentString.clear(); BEGIN(CHAR); } 
<CHAR>\\x[0-7][0-9A-Fa-f]\' { 
    char result[2]; 
    convertCharacterCodeToString(yytext, 2, result);     
    cout << "Found CHAR - (" << result << ")"<< endl;
    BEGIN(INITIAL);
} 
<CHAR>[^\\\']+ { currentString += yytext; } 
<CHAR>\\\\ {  currentString += "\\";  } 
<CHAR>\\n { currentString += "\n"; } 
<CHAR>\\r { currentString += "\r"; } 
<CHAR>\\t {  currentString += "\t"; } 
<CHAR>\\0 {  currentString += "\0" ; } 
<CHAR>\\\' {  currentString += "\'"; } 
<CHAR>\\\" {  currentString += "\""; } 
<CHAR>\\u\{(([0-9A-Fa-f])_*){1,6}\} { 
    char result[2]; 
    convertCharacterCodeToString(yytext, 3, result);   
    currentString += result;    
} 
<CHAR>\' { 
    if(currentString.size() == 1) { 
            cout << "Found CHAR: (" << currentString << ")" << endl; 
        } 
    else 
        { 
            cout << "CHAR Error: (" << currentString << ")" << endl; 
        } 
        BEGIN(INITIAL); 
} 
<CHAR><<EOF>> {
    cout << "CHAR Error: there is no closing quotation mark (" << currentString << ")" << endl; 
    BEGIN(INITIAL);
    } 
 
 
[0-9][_0-9]*(i32|i64)? { 
    string number_string = yytext;
    removeCharacterFromString(number_string, '_'); 
    removeSubstringFromString(number_string, "i32");
    removeSubstringFromString(number_string, "i64");    
    from_chars(number_string.c_str(), number_string.c_str() + number_string.size(), currentInteger);
    cout << "Found DECIMAL_NUMBER:" << to_string(currentInteger) << endl; 
} 
 
0b([_0-1])+(i32|i64)? {  
    string number_string = yytext;
    removeCharacterFromString(number_string, '_'); 
    removeSubstringFromString(number_string, "i32");
    removeSubstringFromString(number_string, "i64");   
    from_chars(number_string.c_str()+2, number_string.c_str() + number_string.size(), currentInteger, 2);
    cout << "Found BINARY_NUMBER:" << to_string(currentInteger) << endl;     
} 
 
0o([_0-7])+(i32|i64)? { 
    string number_string = yytext;
    removeCharacterFromString(number_string, '_'); 
    removeSubstringFromString(number_string, "i32");
    removeSubstringFromString(number_string, "i64");   
    from_chars(number_string.c_str()+2, number_string.c_str() + number_string.size(), currentInteger, 8);
    cout << "Found OCT_NUMBER:" << to_string(currentInteger) << endl; 
} 
 
0x([_0-9a-fA-F])+(i32|i64)? { 
    string number_string = yytext;
    removeCharacterFromString(number_string, '_'); 
    removeSubstringFromString(number_string, "i32");
    removeSubstringFromString(number_string, "i64");   
    from_chars(number_string.c_str()+2, number_string.c_str() + number_string.size(), currentInteger, 16);
    cout << "Found HEX_NUMBER:" << to_string(currentInteger) << endl;
} 
 
[0-9][_0-9]*\.([0-9][_0-9]*([eE][+-]?[0-9_][_0-9]*)?)?(f64|f32)? {     
    string number_string = yytext;
    removeCharacterFromString(number_string, '_'); 
    removeSubstringFromString(number_string, "f32");
    removeSubstringFromString(number_string, "f64");   
    from_chars(number_string.c_str(), number_string.c_str() + number_string.size(), currentFloat);
    cout << "Found DOUBLE:" << to_string(currentFloat) << endl;    
} 
 
[0-9][_0-9]*((([eE][+-]?[0-9][_0-9]*)(f64|f32)?)|(([eE][+-]?[0-9][_0-9]*)?(f64|f32))) { 
    string number_string = yytext;
    removeCharacterFromString(number_string, '_'); 
    removeSubstringFromString(number_string, "f32");
    removeSubstringFromString(number_string, "f64");   
    from_chars(number_string.c_str(), number_string.c_str() + number_string.size(), currentFloat);
    cout << "Found DOUBLE:" << to_string(currentFloat) << endl;
} 
 
[a-zA-Z_][a-zA-Z0-9_]* { cout << "Found IDENTIFIER: " <<  yytext << endl;} 
[a-zA-Z_][a-zA-Z0-9_]*! { cout << "Found MACROS: " << yytext << endl;} 
[0-9]*[a-zA-Z_][a-zA-Z0-9_]* { cout << "Error: incorrect IDENTIFIER" << endl; } 
. { cout << "Error: incorrect character in code" << endl; } 

%% 
 
void convertCharacterCodeToString(char characterCode[], int startPosition, char *result) 
{ 
    result[0] = strtol(characterCode + startPosition,NULL, 16); 
    result[1] = '\0'; 
} 
 
 
void removeSubstringFromString(std::string& str, const std::string& substr) {
    size_t pos;   
    while ((pos = str.find(substr)) != std::string::npos) {
        str.erase(pos, substr.length());  
    }
}
 
void removeCharacterFromString(string& str, char ch) {
   const auto newLast = remove(str.begin(), str.end(), ch);
   str.erase(newLast, str.end());
}

int main() { 
 
    //if (argc != 2) { 
    //    printf("Filename is not found"); 
    //    return 1; 
    //} 
 
    //const char *filename= argv[1]; 
 
    //FILE *file = fopen(filename, "r"); 
    //if (file == NULL) { 
    //    printf("File opening error"); 
    //    return 1; 
    //} 
 
    //yyin = file; 
    yylex(); 
    //fclose(file); 
 
    return 0; 
}