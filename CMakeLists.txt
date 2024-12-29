cmake_minimum_required(VERSION 3.31)
project(Snake CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Dependencies
include(cmake/FindRaylib.cmake)
include(cmake/FindGTest.cmake)
include_directories(${PROJECT_SOURCE_DIR}/src)

# Tests
add_subdirectory(${PROJECT_SOURCE_DIR}/tests/)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/Window.cpp
)

target_link_libraries(${PROJECT_NAME} raylib)
