#ifndef BRAINFUCK_TOKENIZE_H
#define BRAINFUCK_TOKENIZE_H

#include <stdio.h>

#include "token_type.h"
#include "token.h"
#include "token_list.h"


token_type get_token_type(int symbol);

void tokenize(token_list_t *list, FILE *file);

#endif /* BRAINFUCK_TOKENIZE_H */
