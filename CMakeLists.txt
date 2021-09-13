cmake_minimum_required(VERSION 3.20)
project(pruebaQT)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(pruebaQT ${SOURCE_FILES})
target_link_libraries(pruebaQT Qt5::Core)
target_link_libraries(pruebaQT Qt5::Widgets)


