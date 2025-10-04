cmake_minimum_required(VERSION 3.27)
project(program)

set(CMAKE_CXX_STANDARD 17)

add_executable(program main.cpp
        c++/b1.cpp
        c++/coduck.cpp
        c++/note.cpp)
