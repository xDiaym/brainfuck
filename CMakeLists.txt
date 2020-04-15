cmake_minimum_required(VERSION 2.8.8)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)


project(brainfuck LANGUAGES C)
set(CMAKE_C_STANDARD 99)

add_executable(brainfuck src/main.c)