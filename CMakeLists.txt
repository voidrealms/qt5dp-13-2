cmake_minimum_required(VERSION 3.5)

project(qt5dp-13-2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)

add_executable(qt5dp-13-2
  main.cpp
)
target_link_libraries(qt5dp-13-2 Qt5::Core)

#PRE_BUILD - run before all other dependencies
#PRE_LINK - run after other dependencies
#POST_BUILD - run after the target has been built

add_custom_command(
    TARGET qt5dp-13-2 PRE_BUILD
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/test.py prebuild
)

add_custom_command(
    TARGET qt5dp-13-2 PRE_LINK
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/test.py prelink
)

add_custom_command(
    TARGET qt5dp-13-2 POST_BUILD
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/test.py postbuild
)



