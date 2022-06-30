cmake_minimum_required(VERSION 3.5)

project(qt_painting VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(HEADERS
        qtpaintlib/lines.h
        qtpaintlib/colours.h
        qtpaintlib/patterns.h
        qtpaintlib/transparentrectangles.h
        qtpaintlib/donut.h
        qtpaintlib/shapes.h
        qtpaintlib/lineargradients.h
        qtpaintlib/radialgradient.h
        qtpaintlib/puff.h
)

set(SOURCES
    qtpaintlib/lines.cpp
    qtpaintlib/colours.cpp
    qtpaintlib/patterns.cpp
    qtpaintlib/transparentrectangles.cpp
    qtpaintlib/donut.cpp
    qtpaintlib/shapes.cpp
    qtpaintlib/lineargradients.cpp
    qtpaintlib/radialgradient.cpp
    qtpaintlib/puff.cpp
)

set(APP_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

set(SOURCES ${SOURCES} ${HEADERS})

add_library(qt_paint_lib STATIC ${SOURCES})
target_link_libraries(qt_paint_lib Qt5::Core Qt5::Widgets)

add_executable(qt_painting ${APP_SOURCES})
target_link_libraries(qt_painting PRIVATE Qt5::Widgets qt_paint_lib)

