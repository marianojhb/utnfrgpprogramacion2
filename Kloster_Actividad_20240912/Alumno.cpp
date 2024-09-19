#include <iostream>
#include "Alumno.h"
#include "Fecha.h"

void Alumno::cargar()
{
    std::cout << "LEGAJO ";
    std::cin >> _legajo;
    std::cout << "NOMBRE ";
    std::cin >> _nombre;
    std::cout << "APELLIDO ";
    std::cin >> _apellido;
    std::cout << "FECHA DE NACIMIENTO ";
    _fechaNacimiento.cargar();
    std::cout << "EMAIL ";
    std::cin >> _email;
    std::cout << "CARRERA ";
    std::cin >> _codigoCarrera;
}

void Alumno::mostrar()
{
    std::cout << "LEGAJO ";
    std::cout << _legajo << std::endl;
    std::cout << "NOMBRE ";
    std::cout << _nombre << std::endl;
    std::cout << "APELLIDO ";
    std::cout << _apellido << std::endl;
    std::cout << "FECHA DE NACIMIENTO " << std::endl;
    _fechaNacimiento.mostrar();
    std::cout << "EMAIL ";
    std::cout << _email << std::endl;
    std::cout << "CARRERA ";
    std::cout << _codigoCarrera << std::endl;
}


void Alumno::grabarRegistroAlumno(Alumno reg)
{
    FILE *pAlumno;
    pAlumno = fopen("alumnos.dat", "ab");//si no puede hacer la apertura fopen devuelve NULL
    ///modo de apertura     wb (write)-> Escritura. siempre crea un archivo nuevo
    ///rb (read) -> solo lectura. El archivo tiene que existir
    ///ab (append)-> Para agregar registros. Si no existe el archivo lo crea
    if (pAlumno == NULL) exit(0);
    fwrite(&reg, sizeof(Alumno), 1, pAlumno);
    fclose(pAlumno);
}

void Alumno::leerRegistroAlumno(Alumno &reg)
{
    FILE *pAlumno;
    pAlumno = fopen("alumnos.dat", "rb");//si no puede hacer la apertura fopen devuelve NULL
    if (pAlumno == NULL) exit(0);
    fread(&reg, sizeof(Alumno), 1, pAlumno);
    reg.mostrar();
    fclose(pAlumno);
}

void Alumno::leerRegistroAlumno2()
{
    Alumno reg;
    FILE *pAlumno;
    pAlumno = fopen("alumnos.dat", "rb");//si no puede hacer la apertura fopen devuelve NULL
    if (pAlumno == NULL) exit(0);
    while (fread(&reg, sizeof(Alumno), 1, pAlumno) == 1) {
        reg.mostrar();
    }
    fclose(pAlumno);
}
