#include <stdio.h>
#include <compiler/compiler.h>

int main(int argc, char **argv) {
    if (argc == 1) {
        fprintf(stderr, "Error! File not set.\n"
                        "Usage: ./brainfuck <file>\n");
        return EXIT_FAILURE;
    }
    token_list_t *list = create_token_list();
    FILE *file = fopen(argv[1], "r");

    tokenize(list, file);
    printf("Size: %u\n", list->size);

    fclose(file);
    file = NULL;
    delete_token_list(list);

    return EXIT_SUCCESS;
}
