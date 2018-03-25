cmake_minimum_required(VERSION 3.9)
project(lior2)

set(CMAKE_CXX_STANDARD 98)

add_executable(lior2 main.cpp Node.cpp Node.h LinkedList.cpp LinkedList.h BallotBox.cpp BallotBox.h Elections.cpp Elections.h)