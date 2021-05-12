cmake_minimum_required(VERSION 3.17)
project(praktikum_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(praktikum_2 main.cpp)

add_library(praktikum_2_lib)

target_sources(praktikum_2_lib
        PUBLIC
        Circuit.cpp Circuit.hpp Component.cpp Component.hpp Resistance.cpp Resistance.hpp VoltageSource.cpp VoltageSource.hpp Parallel.cpp Parallel.hpp Series.cpp Series.hpp
        )

target_include_directories(praktikum_2_lib
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
        )

target_link_libraries(praktikum_2 praktikum_2_lib)