#include <iostream>
#include "Fecha.h"


Fecha::Fecha(const int dia, const int mes, const int anio)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;
}

void Fecha::cargar()
{
    int dia, mes, anio;

    std::cout << "DIA ";
    std::cin >> dia;
    setDia(dia);

    std::cout << "MES ";
    std::cin >> mes;
    setMes(mes);

    std::cout << "ANIO ";
    std::cin >> anio;
    setAnio(anio);
}

void Fecha::mostrar()
{
    std::cout << _dia << "/" << _mes << "/" << _anio << std::endl;
}

//Setters
void Fecha::setDia(int dia)
{
    if (dia >= 1 && dia <= 31)
    {
        this->_dia = dia;
    }
    else
    {
        this->_dia = 0;
    }
}

void Fecha::setMes(const int mes)
{
    _mes = mes;
}

void Fecha::setAnio(int anio)
{
    _anio = anio;
}

///Getters

int Fecha::getDia()
{
    return _dia;
}

int Fecha::getMes()
{
    return _mes;
}

int Fecha::getAnio()
{
    return _anio;
}
