
cmake_minimum_required( VERSION 3.3)

message("start\troot")

project(hello_world CXX)

# for coding path as a relative of argument target_sources
# https://cmake.org/cmake/help/v3.13/policy/CMP0076.html#policy:CMP0076
cmake_policy(SET CMP0076 NEW)


add_library(mylib)
add_subdirectory(src)
target_include_directories(mylib PUBLIC src)


add_subdirectory(include)
target_include_directories(mylib PUBLIC include)


add_subdirectory(test)
enable_testing()


message("end\troot")
