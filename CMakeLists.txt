# stop if cmake version below 3.5
cmake_minimum_required(VERSION 3.5)

# project name and supported languages
project(Jupiter C CXX)

enable_testing()

# project version
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_subdirectory(src)
add_subdirectory(test)
