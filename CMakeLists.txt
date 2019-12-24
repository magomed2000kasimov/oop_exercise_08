cmake_minimum_required(VERSION 3.13)
project(oop_exercise_08)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(oop_exercise_08 main.cpp pentagon.cpp octagon.cpp hexagon.cpp point.cpp factory.h factory.cpp subscriber.h processor.cpp processor.h subscriber.cpp)