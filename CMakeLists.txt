cmake_minimum_required(VERSION 3.2)
project(data_structs)

file(GLOB SOURCES *.cpp)
message(${SOURCES})
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "ds")

target_include_directories(${PROJECT_NAME} PUBLIC "include")
