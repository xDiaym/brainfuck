#include "token_list.h"

token_list_t *create_token_list() {
    token_list_t *list = malloc(sizeof(token_list_t));
    list->head = list->tail = NULL;
    list->size = 0;
    return list;
}

void push_token(token_list_t *list, token_t *token) {
    if (token == NULL) {
        return;
    }

    if (list->size == 0) {
        list->head = list->tail = token;
    } else {
        list->tail->next = token;
        list->tail = token;
    }
    list->size++;
}

void delete_token_list(token_list_t* list) {
    for (size_t i = 0; i < list->size; i++) {
        token_t* second = list->head->next;
        delete_token(list->head);
        list->head = second;
    }
    free(list);
}
