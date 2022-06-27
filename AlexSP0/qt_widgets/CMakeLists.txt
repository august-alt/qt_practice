cmake_minimum_required(VERSION 3.5)

project(qt_widgets VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets Core)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        label.h
        label.cpp
        slider.h
        slider.cpp
        comboboxex.h
        comboboxex.cpp
        spinbox.h
        spinbox.cpp
        ledit.h
        ledit.cpp
        statusbar.h statusbar.cpp
)

add_executable(qt_widgets
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    label.h
    label.cpp
    slider.h
    slider.cpp
    comboboxex.h
    comboboxex.cpp
    spinbox.h
    spinbox.cpp
    ledit.h
    ledit.cpp
    statusbar.h statusbar.cpp
)

target_link_libraries(qt_widgets PRIVATE Qt5::Widgets)


