cmake_minimum_required(VERSION 3.16)
project(FurryLoveCpp VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(furrylove
    src/main.cpp
    src/core/Game.cpp
)

target_include_directories(furrylove PRIVATE include)
