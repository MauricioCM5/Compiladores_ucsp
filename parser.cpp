#include "token.hpp"
#include "parser.hpp"

using namespace std;

int main(){
    // Simulando un vector de tokens para la entrada
    vector<Token> tokens = {
        { Token_type::INT_KW, "integer" },
        { Token_type::IDENTIFIER, "identifier" },
        { Token_type::PAREN_OPEN, "(" },
        { Token_type::INT_KW, "integer" },
        { Token_type::IDENTIFIER, "identifier" },
        { Token_type::PAREN_CLOSE, ")" },
        { Token_type::BRACE_OPEN, "{" },
        { Token_type::IDENTIFIER, "identifier" },
        { Token_type::COLON, ":" },
        { Token_type::INT_KW, "integer" },
        { Token_type::ARRAY_SUBSCRIPT_OPEN, "[" },
        { Token_type::NUMBER, "10324" },
        { Token_type::ARRAY_SUBSCRIPT_CLOSE, "]" },
        { Token_type::ASSIGNMENT, "=" },
        { Token_type::IDENTIFIER, "identifier" },
        { Token_type::SUM_, "+" },
        { Token_type::IDENTIFIER, "identifier" },
        { Token_type::SEMICOLON, ";" },
        { Token_type::BRACE_CLOSE, "}" },
        { Token_type::END_OF_FILE, "" }
    };

    // integer identifier ( integer identifier ) { identifier : integer [ IntegerLiteral ] = identifier + identifier ; }

    // Crear el parser y parsear los tokens
    Parser parser(tokens);
    parser.parseProgram();

    return 0;
}
