cmake_minimum_required(VERSION 3.0)

project(section-challenge)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_executable(main ${SOURCES})

