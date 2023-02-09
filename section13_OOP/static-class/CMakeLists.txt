cmake_minimum_required(VERSION 3.0)

project(static-class)

#add all the source files needed to build the executable
add_executable(static-class src/main.cpp)

#include the directory where the library project is
add_subdirectory(lib/Player)


#link the executable and the library together
target_link_libraries(static-class Player)
