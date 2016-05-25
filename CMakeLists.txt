cmake_minimum_required(VERSION 3.5)
project(UVa_Online_Judge)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -static-libgcc -static-libstdc++")

set(SOURCE_FILES 1124.cpp)
add_executable(UVa_Online_Judge ${SOURCE_FILES})