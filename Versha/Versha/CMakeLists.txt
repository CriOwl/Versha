cmake_minimum_required(VERSION 3.28)
project(Versha)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

set(Versha main.cpp)
add_executable(Versha main.cpp)
