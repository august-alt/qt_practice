cmake_minimum_required(VERSION 3.14)

project(tuturial5_writing_benchmark LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core Test)

add_executable(tuturial5_writing_benchmark
  main.cpp
)

add_executable(tuturial5_writing_benchmark_test
  test.cpp
  test.h
)

target_link_libraries(tuturial5_writing_benchmark Qt5::Core)

target_link_libraries(tuturial5_writing_benchmark_test Qt5::Core Qt5::Test)

