# John Zoscak
# 12/15/22
# CMake file for JoyconChambara project

# specify CMake minimum version
cmake_minimum_required(VERSION 3.10)

# Specify CMake policy to find packages
cmake_policy(SET CMP0074 NEW)

# SET COMPILER HERE
# set(CMAKE_CXX_COMPILER "/usr/bin/clang++") # -John: clang++ 10.0.0-4
# set(CMAKE_CXX_COMPILER "/usr/bin/g++") # -John: g++ 9.4.0
# set(CMAKE_CXX_COMPILER "/usr/bin/cpp") # -John: cpp 9.4.0

# set project name and set the version number
project(JoyconChambara VERSION 1.0)

# Include OpenCV package
message(STATUS "OpenCV_DIR=$ENV{OpenCV_ROOT}")
find_package(OpenCV REQUIRED)
message(STATUS "INCLUDE_DIRS=${OpenCV_INCLUDE_DIRS}")
message(STATUS "LIBS=${OpenCV_LIBS}")
include_directories( ${OpenCV_INCLUDE_DIRS} )

# add src/*.cpp files to an executable standard
file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS src/*.h)
add_executable(JoyconChambara ${SOURCES} ${HEADERS})

# Link Libraries
target_link_libraries(JoyconChambara ${OpenCV_LIBS})

# Specifying the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)