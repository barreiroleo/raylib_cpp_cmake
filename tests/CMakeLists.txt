cmake_minimum_required(VERSION 3.31)
message("Building tests")
include(GoogleTest)
enable_testing()

add_executable(snake ./snake_test.cpp)
target_link_libraries(snake PRIVATE GTest::gtest_main)
gtest_discover_tests(snake)
