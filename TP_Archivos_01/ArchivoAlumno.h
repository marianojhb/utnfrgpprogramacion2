#pragma once
#include <string>
#include "Alumno.h"

class ArchivoAlumno
{
public:
    ArchivoAlumno(const char*);
    bool leerRegistrosAlumnos();
    bool grabarRegistroAlumno(Alumno &);
    ~ArchivoAlumno();

private:
    FILE * _pAlumno;
    const char* _url;
};
