cmake_minimum_required(VERSION 3.3)
project(CPlusPlusPrimer4th)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES  ch01/exercise_1.3.cpp)
add_executable(CPlusPlusPrimer4th ${SOURCE_FILES})