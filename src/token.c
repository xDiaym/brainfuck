#include "token.h"

token_t *create_token(token_type type) {
    token_t *token = malloc(sizeof(token_t));
    token->type = type;
    token->next = NULL;
    return token;
}

/*! THIS METHOD DO NOT DELETE NEXT TOKEN */
void delete_token(token_t* token) {
    free(token);
}
