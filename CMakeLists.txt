# John Zoscak
# 12/15/22
# CMake file for JoyconChambara project

# specify CMake minimum version
cmake_minimum_required(VERSION 3.10)

# Choose compiler
# set(CMAKE_CXX_COMPILER "/usr/bin/clang++") # -John: clang++ 10.0.0-4
set(CMAKE_CXX_COMPILER "/usr/bin/g++") # -John: g++ 9.4.0
# set(CMAKE_CXX_COMPILER "/usr/bin/cpp") # -John: cpp 9.4.0

# set project name and set the version number
project(JoyconChambara VERSION 1.0)
# add src/*.cpp files to an executable standard
file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS src/*.h)
add_executable(JoyconChambara ${SOURCES} ${HEADERS})

# Specifying the C++ standard

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)