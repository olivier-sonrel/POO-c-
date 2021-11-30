cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp Person.cpp Person.h Creature.cpp Creature.h Gender.cpp Gender.h Cat.cpp Cat.h)
