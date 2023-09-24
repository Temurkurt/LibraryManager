cmake_minimum_required(VERSION 3.26)
project(LibraryManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(LibraryManager main.cpp
        Book.cpp
        Book.h
        User.cpp
        User.h)
