#pragma once
#include <iostream>
#include "Fecha.h"

class Alumno
{
public:
    Alumno();
    void cargar();
    void mostrar();


private:
    int _legajo;
    char _nombre[30];
    char _apellido[30];
    Fecha _fechaNacimiento;
    char _email[50];
    int _codigoCarrera;
};

void grabarRegistroAlumno(Alumno reg);
void leerRegistroAlumno(Alumno &);
void leerRegistroAlumno2();
