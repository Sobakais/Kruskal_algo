cmake_minimum_required(VERSION 3.10)

project(GraphProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Graph)

add_executable(GraphProject main.cpp)

target_link_libraries(GraphProject PRIVATE Graph)
