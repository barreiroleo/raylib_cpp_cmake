cmake_minimum_required(VERSION 3.31)
project(Snake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include(FetchContent)
include(cmake/FindRaylib.cmake)

add_executable(${PROJECT_NAME} ./src/main.cpp ./src/Window.cpp)

target_link_libraries(${PROJECT_NAME} raylib)
