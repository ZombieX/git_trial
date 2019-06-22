
cmake_minimum_required( VERSION 3.3)

message("start\troot")

project(hello_world)

add_subdirectory(src)
add_subdirectory(include)
#add_executable(hello_world main.cpp)

message("end\troot")
