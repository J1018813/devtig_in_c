#include "include/lexer.h"
#include "include/token.h"

lexer_T* init_lexer(char* src)
{
        lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
        lexer->src = src;
        lexer->i = 0;
        lexer->c = src[lexer->i];

        return lexer;
}


token_T* lexer_next_token(lexer_T* lexer)
{
        switch (lexer->c)
        {
        case '=':
                return init_token(lexer->c, ASSIGN);
                break;
        case '+':
                return init_token(lexer->c, PLUS);
                break;
        case '-':
                return init_token(lexer->c, MINUS);
                break;
        case '!':
                return init_token(lexer->c, BANG);
                break;
        case '*':
                return init_token(lexer->c, ASTERISK);
                break;
        case '/':
                return init_token(lexer->c, SLASH);
                break;
        case '<':
                return init_token(lexer->c, LT);
                break;
        case '>':
                return init_token(lexer->c, GT);
                break;
        case '(':
                return init_token(lexer->c, LPAREN);
                break;        
        case ')':
                return init_token(lexer->c, RPAREN);
                break;
        case '{':
                return init_token(lexer->c, LBRACE);
                break;
        case '}':
                return init_token(lexer->c, RBRACE);
                break;
        case ',':
                return init_token(lexer->c, COMMA);
                break;
        case ';':
                return init_token(lexer->c, SEMICOLON);
                break;
        case '\0':
                return init_token(lexer->c, EOF);
                break;
        default:
                break;
        }

}

void lexer_advance(lexer_T* lexer)
{
        if (lexer->i >= sizeof(lexer->src)) {
                lexer->c = 0;
                return;
        } 

        lexer->i++;
        lexer->c = lexer->src[lexer->i];
}

uint8_t is_letter(char ch) 
{
        return 'a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z' || ch == '_';
}

uint8_t is_letter(char ch) 
{
        return '0' <= ch && ch <= '9';
}