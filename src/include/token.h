#ifndef DEVT_TOKEN_H
#define DEVT_TOKEN_H

typedef struct TOKEN_STRUCT
{
        char* literal;
        enum{
                ILLEGAL,
                EOF,
                // Identifiers + literals
                ID,
                INT,
                // Operators
                ASSIGN,
                PLUS,
                MINUS,
                BANG,
                ASTERISK,
                SLASH,
                LT,
                GT,
                EQ,
                NOT_EQ,
                // Delimiters
                COMMA,
                SEMICOLON,
                LPAREN,
                RPAREN,
                LBRACE,
                RBRACE,
                // Keywords
                FUNCTION, 
                LET, 
                TRUE,
                FALSE,
                IF,
                ELSE,
                RETURN,                
        } type;
} token_T;


token_T* init_token(char* literal, int type);

#endif

