#include <stdio.h>
#include "token.h"

int main(int argc, char** argv) {
    token_t *token = create_token(INCREMENT);
    printf("Type: %u\nNext token addr: %p\n", token->type, token->next);
    delete_token(token);

    return 0;
}
