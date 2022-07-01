cmake_minimum_required(VERSION 3.5)

project(qt_custom_widget VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

SET(SOURCES
    main.cpp
    mainwindow.h
    mainwindow.cpp
    mainwindow.ui
    application.h
    application.cpp
    widget.h
    widget.cpp
)

add_executable(qt_custom_widget ${SOURCES})
target_link_libraries(qt_custom_widget PRIVATE Qt5::Widgets)


