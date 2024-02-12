cmake_minimum_required(VERSION 3.20)

set(CMAKE_C_COMPILER "cl")
set(CMAKE_CXX_COMPILER "cl")
set(CMAKE_GENERATOR "MsBuild")

project(app LANGUAGES C CXX)

add_executable(app WIN32 main.cpp)