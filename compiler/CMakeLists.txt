cmake_minimum_required(VERSION 2.8.8)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

project(compiler LANGUAGES C)
set(CMAKE_C_STANDARD 99)


set(LIBRARY_SRC_DIR ${PROJECT_SOURCE_DIR}/src)

add_library(${PROJECT_NAME}
        STATIC
            "${LIBRARY_SRC_DIR}/token.c"
            "${LIBRARY_SRC_DIR}/token_list.c"
            "${LIBRARY_SRC_DIR}/tokenize.c" include/compiler/compiler.h)


target_include_directories(${PROJECT_NAME}
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include)
