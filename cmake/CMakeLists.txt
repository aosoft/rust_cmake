cmake_minimum_required(VERSION 3.25)
project(cmake)

set(CMAKE_CXX_STANDARD 17)

add_library(cmake library.cpp)

install (TARGETS cmake DESTINATION .)