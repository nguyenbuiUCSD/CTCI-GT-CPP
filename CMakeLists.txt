cmake_minimum_required(VERSION 3.10)

set(This Example)

project(${This} CXX)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake) # Add tools for cmake https://github.com/CLIUtils/cmake.git

enable_testing()

add_subdirectory(test)