#ifndef DEVTIG_LEXER_H
#define DEVTIG_LEXER_H

#include <stdint.h>
#include "include/token.h"

static const uint8_t test[] = "test";

typedef struct LEXER_STRUCT
{
        char* src;
        char c; // Current character.
        unsigned int i; // Current index.
} lexer_T;

lexer_T* init_lexer(char* src);

token_T* lexer_nexT_token(lexer_T* lexer);

#endif