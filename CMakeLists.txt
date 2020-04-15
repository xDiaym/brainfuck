cmake_minimum_required(VERSION 3.16)
cmake_policy(SET CMP0048 NEW)


project(brainfuck LANGUAGES C)
set(CMAKE_C_STANDARD 99)

add_executable(brainfuck src/main.c)