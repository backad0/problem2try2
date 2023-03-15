cmake_minimum_required(VERSION 3.24)
project(problem2try2)

set(CMAKE_CXX_STANDARD 20)

add_executable(problem2try2 main.cpp RingBuffer.cpp RingBuffer.hpp CustomException.hpp)
