cmake_minimum_required(VERSION 3.26)
project(MineClearance)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

add_executable(MineClearance
        inc/draw.h
        inc/game.h
        inc/include.h
        inc/input.h
        inc/myclass.h
        src/draw.cpp
        src/game.cpp
        src/input.cpp
        src/main.cpp)
