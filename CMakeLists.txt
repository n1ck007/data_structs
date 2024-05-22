cmake_minimum_required(VERSION 3.2)
project(data_structs)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "include")

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "ds")
