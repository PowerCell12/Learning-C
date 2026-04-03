cmake_minimum_required(VERSION 4.0)
project(Advanced_C_Programming_Course_Udemy C)

set(CMAKE_C_STANDARD 23)

add_executable(Learning_C main.c)

# Katas - each as separate executable
add_executable(katasExecutable
        katas/bit_counting.c
)

add_executable(advanced_c_execises advanced_c_programming_course_udemy/bit_manipulation/checkNthBitIfOne.c)

target_link_libraries(advanced_c_execises m)
