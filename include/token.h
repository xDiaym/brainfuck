#ifndef BRAINFUCK_TOKEN_H
#define BRAINFUCK_TOKEN_H

#include <stdlib.h>

#include "token_type.h"


typedef struct token {
    token_type type;
    struct token *next;
} token_t;


token_t *create_token(token_type type);

void delete_token(token_t *token);

#endif /* BRAINFUCK_TOKEN_H */
