cmake_minimum_required(VERSION 3.16)
project(udemy_c_programming_for_beginners C)

set(CMAKE_C_STANDARD 11)

add_executable(main src/section3/main.c)
add_executable(assignment_section3 src/section3/assignment.c)
add_executable(scanf_usage src/section4/scanf_usage.c)
add_executable(variables_basics src/section5/basic_variables_usage.c)