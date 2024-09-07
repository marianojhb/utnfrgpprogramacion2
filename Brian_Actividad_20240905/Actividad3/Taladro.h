#pragma once
#include "Herramienta.h"
#include <string>

class Taladro: public Herramienta
{
public:
    Taladro();
    const float getPotencia();
    void setPotencia(float);
    const void mostrarInformacion();
private:
    float _potencia;
};
