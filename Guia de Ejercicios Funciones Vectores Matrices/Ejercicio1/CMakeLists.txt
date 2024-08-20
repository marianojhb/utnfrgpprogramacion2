cmake_minimum_required(VERSION 3.27)
project(Ejercicio1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicio1 main.cpp
        libreria_propia.h
        funciones.h
        libreria_propia.cpp
        funciones.cpp)
