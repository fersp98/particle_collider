cmake_minimum_required(VERSION 3.9)
project(sp2)

set(CMAKE_CXX_STANDARD 11)

add_executable(sp2 main.cpp Particle.h Particle.cpp Controller.h Controller.cpp )