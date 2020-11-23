#include "include/token.h"

token_T* init_token(char* literal, int type)
{
        token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
        token->literal = literal;
        token->type = type;

        return token;
}