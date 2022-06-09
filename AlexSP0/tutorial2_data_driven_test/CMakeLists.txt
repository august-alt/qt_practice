cmake_minimum_required(VERSION 3.14)

project(tutorial2_data_driven_test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core Test)

add_executable(tutorial2_data_driven_test
  main.cpp
)

add_executable(tutorial2_data_driven_test_test
  test.h
  test.cpp
)

target_link_libraries(tutorial2_data_driven_test Qt${QT_VERSION_MAJOR}::Core Qt5::Test)

target_link_libraries(tutorial2_data_driven_test_test Qt${QT_VERSION_MAJOR}::Core Qt5::Test)
