#pragma once
#include "Inmueble.h"

class Departamento : private Inmueble
{
public:
    Departamento();
private:
    int _antiguedad;
    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;
    char _piso[3];
    char _depto[3];
    float _superficieBalcon;
    bool _cochera;
    float _expensa;
};
