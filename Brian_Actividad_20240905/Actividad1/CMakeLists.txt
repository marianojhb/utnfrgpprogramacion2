cmake_minimum_required(VERSION 3.30)
project(Actividad1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Actividad1 main.cpp
        Herramienta.cpp
        Herramienta.h
        Martillo.cpp
        Martillo.h
        Destornillador.cpp
        Destornillador.h
        Taladro.cpp
        Taladro.h)
