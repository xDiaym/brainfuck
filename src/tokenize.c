#include "tokenize.h"

token_type get_token_type(int symbol) {
    switch (symbol) {
        case '+':
            return INCREMENT;
        case '-':
            return DECREMENT;
        case '<':
            return LEFT_SHIFT;
        case '>':
            return RIGHT_SHIFT;
        case '[':
            return LOOP_BEGIN;
        case ']':
            return LOOP_END;
        case '.':
            return PRINT;
        case ',':
            return INPUT;
        default:
            return UNKNOWN;
    }
}

void tokenize(token_list_t *list, FILE *file) {
    if (file == NULL) {
        return;
    }

    int symbol = UNKNOWN;
    while ((symbol = getc(file)) != EOF) {
        token_type type = get_token_type(symbol);
        if (type != UNKNOWN) {
            token_t *token = create_token(type);
            push_token(list, token);
        }
    }
}
