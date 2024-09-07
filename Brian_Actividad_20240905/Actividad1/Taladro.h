#pragma once
#include "Herramienta.h"
#include <string>

class Taladro : public Herramienta
{
public:
    Taladro();
    float getPotencia();
    void setPotencia(float);
    void mostrarInformacion();
private:
    float _potencia;
};
