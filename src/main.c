#include <stdio.h>
#include "token_list.h"
#include "token.h"

int main(int argc, char** argv) {
    token_t *token = create_token(INCREMENT);
    printf("[%p]\nType: %u\nNext token addr: %p\n\n", token, token->type, token->next);

    token_list_t *list = create_token_list();
    push_token(list, token);
    printf("[%p]\nList size: %u\nToken addr: %p\n\n", list, list->size, list->head);

    delete_token_list(list);

    return 0;
}
