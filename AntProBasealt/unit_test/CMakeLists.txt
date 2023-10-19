cmake_minimum_required(VERSION 3.14)
project(tutorial1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Test Widgets)

add_executable(tutorial1
    main.cpp
    main.h
    gui_test.h
)

target_link_libraries(tutorial1 PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Test
    Qt5::Widgets
)
