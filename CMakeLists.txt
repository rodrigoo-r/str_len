cmake_minimum_required(VERSION 3.30)
project(strlen C)

set(CMAKE_C_STANDARD 11)

add_library(strlen STATIC library.c)
