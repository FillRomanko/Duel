cmake_minimum_required(VERSION 3.20)

project(PPC20260929 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(PPC20260929
        main.cpp
        Fighter.cpp
        Game.cpp
)
