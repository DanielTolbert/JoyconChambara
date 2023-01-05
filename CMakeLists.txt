# John Zoscak
# 12/15/22
# CMake file for JoyconChambara project

# specify CMake minimum version
cmake_minimum_required(VERSION 3.10)

# Specifying the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# SET COMPILER HERE
# set(CMAKE_CXX_COMPILER "/usr/bin/clang++") # -John: clang++ 10.0.0-4
# set(CMAKE_CXX_COMPILER "/usr/bin/g++") # -John: g++ 9.4.0
# set(CMAKE_CXX_COMPILER "/usr/bin/cpp") # -John: cpp 9.4.0
# set(CMAKE_CXX_COMPILER "/Program Files (x86)/mingw64/bin/g++") # -John: g++ 8.1.0

# set project name and set the version number
project(JoyconChambara VERSION 1.0)

# Add subdirectories
add_subdirectory(JoyconProcessing)
add_subdirectory(JoyShockLibrary)

# Add main.cpp as executable
add_executable(JoyconChambara main.cpp)
target_link_libraries(JoyconChambara PUBLIC JoyShockLibrary JoyconProcessing)

target_include_directories(JoyconChambara
    PUBLIC "${PROJECT_BINARY_DIR}"
    PUBLIC "${PROJECT_SOURCE_DIR}/JoyShockLibrary"
    PUBLIC "${PROJECT_SOURCE_DIR}/JoyconProcessing"
)
