#pragma once
#include <iostream>
#include "Fecha.h"

class Alumno
{
public:
    Alumno();
    void cargar();
    void mostrar();

//    getters
    int getLegajo();
    std::string getNombre();
    std::string getApellido();
    Fecha getFechaNacimiento();
    std::string getEmail();
    int getCodigoCarrera();

//    setters
    void setLegajo(int);
    void setNombre(std::string);
    void setApellido(std::string);
    void setFechaNacimiento(Fecha);
    void setEmail(std::string);
    void setCodigoCarrera(int);

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
