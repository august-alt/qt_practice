cmake_minimum_required(VERSION 3.14)

project(qttestlib-tutorial1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core Test)

add_executable(qttestlib-tutorial1
  main.cpp
)

add_executable(qttestlib-tutorial1-test
  test.h
  test.cpp
)

target_link_libraries(qttestlib-tutorial1 Qt5::Core Qt5::Test)

target_link_libraries(qttestlib-tutorial1-test Qt5::Core Qt5::Test)
