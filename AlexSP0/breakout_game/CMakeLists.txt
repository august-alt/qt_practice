cmake_minimum_required(VERSION 3.5)

project(breakout_game VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(SOURCES
    mainwindow.h
    mainwindow.cpp
    mainwindow.ui
    main.cpp
    paddle.h
    paddle.cpp
    brick.h
    brick.cpp
    ball.h
    ball.cpp
    breakout.h
    breakout.cpp
)

add_executable(breakout_game ${SOURCES})
target_link_libraries(breakout_game Qt5::Widgets)

