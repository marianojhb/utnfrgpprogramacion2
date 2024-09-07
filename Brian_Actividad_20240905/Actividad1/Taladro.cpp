#include <iostream>
#include "Taladro.h"

Taladro::Taladro()
{
    setNombre("Taladro");
}

float Taladro::getPotencia()
{
    return _potencia;
}

void Taladro::setPotencia(float potencia)
{
    _potencia = potencia;
}

void Taladro::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    std::cout << "Potencia=" << getPotencia() << std::endl;
}
