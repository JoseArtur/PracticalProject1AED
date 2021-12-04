cmake_minimum_required(VERSION 3.20)
project(Project1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project1 main.cpp tests/airport.h tests/plane.h tests/luggage.h tests/flight.h tests/carriage.h tests/bst.h tests/passanger.h tests/planeService.h tests/departure.h)
