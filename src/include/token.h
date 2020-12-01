#ifndef DEVT_TOKEN_H
#define DEVT_TOKEN_H

typedef enum TOKEN_TYPE {
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
        } token_type_t;

typedef struct TOKEN_STRUCT
{
        char* literal;
        token_type_t type;
        
        
} token_T;


token_T* init_token(char* literal, token_type_t type);

token_type_t lookup_id(char* literal)


#endif

