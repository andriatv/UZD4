cmake_minimum_required(VERSION 3.17)
project(UZD4)

set(CMAKE_CXX_STANDARD 14)

add_executable(UZD4 main.cpp Component.h Leaf.cpp Leaf.h Composite.cpp Composite.h)