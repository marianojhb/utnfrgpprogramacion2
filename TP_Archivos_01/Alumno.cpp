#include <iostream>
#include <stdio.h>
#include "Alumno.h"
#include "Fecha.h"

Alumno::Alumno()
{
    _legajo = 0;
    strcpy(_nombre,"");
    strcpy(_apellido,"");
    _fechaNacimiento={0,0,0};
    strcpy(_email,"");
    _codigoCarrera = 0;
}

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
    std::cout << "FECHA DE NACIMIENTO ";
    _fechaNacimiento.mostrar();
    std::cout << "EMAIL ";
    std::cout << _email << std::endl;
    std::cout << "CARRERA ";
    std::cout << _codigoCarrera << std::endl;
}

int Alumno::getLegajo()
{
    return _legajo;
}
std::string Alumno::getNombre()
{
    return _nombre;
}
std::string Alumno::getApellido()
{
    return _apellido;
}
Fecha Alumno::getFechaNacimiento()
{
    return _fechaNacimiento;
}
std::string Alumno::getEmail()
{
    return _email;
}
int Alumno::getCodigoCarrera()
{
    return _codigoCarrera;
}

void Alumno::setLegajo(int legajo)
{
    _legajo = legajo;
}
void Alumno::setNombre(std::string nombre)
{
    strcpy(_nombre,nombre.c_str());
}
void Alumno::setApellido(std::string apellido)
{
    strcpy(_apellido,apellido.c_str());
}
void Alumno::setFechaNacimiento(Fecha fechaDeNacimiento)
{
    _fechaNacimiento = fechaDeNacimiento;
}
void Alumno::setEmail(std::string email)
{
    strcpy(_email,email.c_str());
}
void Alumno::setCodigoCarrera(int codigoCarrera)
{
    _codigoCarrera = codigoCarrera;
}

