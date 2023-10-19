cmake_minimum_required(VERSION 3.14)

project(plugin LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

if(ANDROID)
  add_library(plugin SHARED
    main.cpp
    mainwindow.cpp
    mainwindow.h
    fileselector.cpp
    fileselector.h
    mainwindow.ui
  )
else()
  add_executable(plugin
    main.cpp
    mainwindow.cpp
    mainwindow.h
    fileselector.cpp
    fileselector.h
    mainwindow.ui
  )
endif()

target_link_libraries(plugin PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
