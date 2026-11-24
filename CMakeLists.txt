cmake_minimum_required(VERSION 3.16)
project(gaming-ping-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gamingpingtool
    src/main.cpp
    src/routes.cpp
    src/tweaks.cpp
    src/monitor.cpp
)

target_include_directories(gamingpingtool PRIVATE include)

if(WIN32)
    target_link_libraries(gamingpingtool PRIVATE userenv)
endif()
