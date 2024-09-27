#pragma once
#include <string>
#include "Alumno.h"
#include "Mariano.h"

class ArchivoAlumno
{
public:
    ArchivoAlumno(const char*);
    bool leerRegistrosAlumnos();
    bool grabarRegistroAlumno(Alumno &);
    Alumno buscaLegajo(int);
    ~ArchivoAlumno();
    void setPAlumno(FILE*);

private:
    FILE * _pAlumno;
    const char* _url;
};
