cmake_minimum_required(VERSION 3.14)

project(test-example LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Test Widgets REQUIRED)

add_executable(test_example
  test.h
  test.cpp
)

set (PROJECT_INCLUDE_DIR ${test_example_SOURCE_DIR}/include/)

include_directories(${PROJECT_INCLUDE_DIR})

target_link_libraries(test_example Qt5::Core Qt5::Widgets Qt5::Test)

