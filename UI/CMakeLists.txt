cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(memHandler LANGUAGES CXX)

add_library(Terminal
    STATIC
    ./include/Terminal.h
    ./src/Terminal.cpp
    )

add_executable(memHandler main.cpp)
