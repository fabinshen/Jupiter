# stop if cmake version below 3.5
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and supported languages
project(example C CXX)

# project version
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)

add_executable(hello main.c)

