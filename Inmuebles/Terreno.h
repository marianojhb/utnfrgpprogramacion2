#pragma once
#include "Inmueble.h"

class Terreno : private Inmueble
{
public:
    Terreno();
private:
    float _ancho;
    float _largo;
    float _superficieConstruible;
};
