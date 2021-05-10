cmake_minimum_required(VERSION 3.17)
project(praktikum_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(praktikum_2 main.cpp Circuit.cpp Circuit.hpp Component.cpp Component.hpp Resistance.cpp Resistance.hpp VoltageSource.cpp VoltageSource.hpp Parallel.cpp Parallel.hpp Series.cpp Series.hpp)