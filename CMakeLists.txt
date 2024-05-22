cmake_minimum_required(VERSION 3.2)
project(data_structs)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

# Add source files and create executable
file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "ds")

# Add header files
target_include_directories(${PROJECT_NAME} PRIVATE "include")
