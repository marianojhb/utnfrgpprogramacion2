#pragma once
#include "Inmueble.h"

class Local : private Inmueble
{
public:
    Local();
private:
    int _antiguedad;
    float _superficieTotal;
    bool _zonaComercial;
    float _superficieEstacionamiento;
};
