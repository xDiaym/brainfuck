cmake_minimum_required(VERSION 2.8.8)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

if (MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif (MSVC)

project(brainfuck LANGUAGES C)
set(CMAKE_C_STANDARD 99)


add_subdirectory(compiler)


add_executable("${PROJECT_NAME}"
        "${PROJECT_SOURCE_DIR}/src/main.c")

target_link_libraries("${PROJECT_NAME}"
        PUBLIC
            compiler)
