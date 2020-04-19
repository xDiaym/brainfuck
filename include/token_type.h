#ifndef BRAINFUCK_TOKEN_TYPE_H
#define BRAINFUCK_TOKEN_TYPE_H

#include <stdint.h>

#define EOF_TOKEN               (0)

#define INCREMENT               (1)
#define DECREMENT               (2)
#define LEFT_SHIFT              (3)
#define RIGHT_SHIFT             (4)
#define LOOP_BEGIN              (5)
#define LOOP_END                (6)
#define INPUT                   (7)
#define PRINT                   (8)

#define UNKNOWN                 (255)


typedef unsigned char token_type;

#endif /* BRAINFUCK_TOKEN_TYPE_H */
