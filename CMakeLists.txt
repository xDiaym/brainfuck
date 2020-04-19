cmake_minimum_required(VERSION 2.8.8)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)


project(brainfuck LANGUAGES C)
set(CMAKE_C_STANDARD 99)

set(BRAINFUCK_SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(BRAINFUCK_SRC
        "${BRAINFUCK_SRC_DIR}/main.c"
        "${BRAINFUCK_SRC_DIR}/token.c")

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(brainfuck "${BRAINFUCK_SRC}")
