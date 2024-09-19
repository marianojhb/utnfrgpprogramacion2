#pragma once
#include <iostream>
#include "Fecha.h"

class Alumno
{
public:
    void cargar();
    void mostrar();
    static void grabarRegistroAlumno(Alumno reg);
    static void leerRegistroAlumno(Alumno &);
    static void leerRegistroAlumno2();

private:
    int _legajo;
    char _nombre[30];
    char _apellido[30];
    Fecha _fechaNacimiento;
    char _email[50];
    int _codigoCarrera;
};

