#include "include/token.h"

token_T* init_token(char* literal, token_type_t type)
{
        token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
        token->literal = literal;
        token->type = type;

        return token;
}

token_type_t lookup_id(char* literal) 
{
        if (strcmp(literal, "zal") == 0) {
                return FUNCTION;
        } else if (strcmp(literal, "eris") == 0) {
                return LET;
        } else if (strcmp(literal, "true") == 0) {
                return TRUE;
        } else if (strcmp(literal, "false") == 0) {
                return FALSE;
        } else if (strcmp(literal, "if") == 0) {
                return IF;
        } else if (strcmp(literal, "else") == 0) {
                return ELSE;
        } else if (strcmp(literal, "schenk") == 0) {
                return RETURN;
        }     
}