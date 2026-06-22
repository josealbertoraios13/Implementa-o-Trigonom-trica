cmake_minimum_required(VERSION 3.16)
project(my_math LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(my_math 
    src/main.c 
    src/trig/trig.c
    )

target_link_libraries(my_math m)

target_include_directories(my_math PRIVATE ${CMAKE_SOURCE_DIR}/include)