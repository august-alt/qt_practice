cmake_minimum_required(VERSION 3.5)

project(tutorial3_simulate_gui_evets VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets Test)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

add_executable(tutorial3_simulate_gui_evets
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

add_executable(tutorial3_simulate_gui_evets_test
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
  test.h
  test.cpp
)


target_link_libraries(tutorial3_simulate_gui_evets PRIVATE Qt5::Widgets Qt5::Test)

target_link_libraries(tutorial3_simulate_gui_evets_test PRIVATE Qt5::Widgets Qt5::Test)


