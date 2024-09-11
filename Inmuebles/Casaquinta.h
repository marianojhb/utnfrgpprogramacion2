#pragma once
#include "Inmueble.h"

class Casaquinta : private Inmueble
{
public:
    Casaquinta();
private:
    int _antiguedad;
    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;
    bool _pileta;
    bool _quincho;
};
