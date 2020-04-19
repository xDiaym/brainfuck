#ifndef BRAINFUCK_TOKEN_LIST_H
#define BRAINFUCK_TOKEN_LIST_H

#include <stdint.h>
#include <errno.h>
#include "token.h"

typedef struct token_list {
    token_t         *head;
    token_t         *tail;
    size_t          size;
} token_list_t;


token_list_t *create_token_list();
void push_token(token_list_t *list, token_t *token);
void delete_token_list(token_list_t *list);



#endif /* BRAINFUCK_TOKEN_LIST_H */
