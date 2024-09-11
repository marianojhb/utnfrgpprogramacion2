#pragma once
#include "Inmueble.h"

class Casa : private Inmueble
{
public:
    Casa();
private:
    int _antiguedad;
    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;
};
