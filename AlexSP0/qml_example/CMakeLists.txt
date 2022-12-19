cmake_minimum_required(VERSION 3.5)

project(qml_example VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets Core Quick Gui REQUIRED)

qt5_add_resources(QT_RESOURCES res.qrc)

set(PROJECT_SOURCES
        main.cpp
)


add_executable(qml_example ${PROJECT_SOURCES} ${QT_RESOURCES})

target_link_libraries(qml_example PRIVATE Qt::Widgets Qt::Core Qt::Quick Qt::Gui)

