#include "token.h"

token_t *create_token(token_type type) {
    token_t *token = malloc(sizeof(token_t));
    token->type = type;
    token->next = NULL;
    return token;
}

void delete_token(token_t* token) {
    /*! THIS DON`T DELETE NEXT TOKEN */
    free(token);
}
