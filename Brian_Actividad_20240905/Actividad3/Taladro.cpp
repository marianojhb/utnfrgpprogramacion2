#include <iostream>
#include "Taladro.h"

Taladro::Taladro()
{
    setPotencia(0);
    setNombre("Taladro");
}

const float Taladro::getPotencia()
{
    return _potencia;
}

void Taladro::setPotencia(float potencia)
{
    _potencia = potencia;
}

const void Taladro::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    std::cout << "Potencia=" << getPotencia() << std::endl;
}
