#include <iostream>
#include "Herramienta.h"

Herramienta::Herramienta()
{
    setNombre("");
    setPeso(0);
    setLongitud(0);
}

float Herramienta::getLongitud()
{
    return _longitud;
}

float Herramienta::getPeso()
{
    return _peso;
}

void Herramienta::setNombre(std::string nombre)
{
    _nombre = nombre;
}

const std::string &Herramienta::getNombre() const
{
    return _nombre;
}

void Herramienta::setLongitud(float longitud)
{
    _longitud = longitud;
}

void Herramienta::setPeso(float peso)
{
    _peso = peso;
}

void Herramienta::mostrarInformacion()
{
    std::cout << "nombre=" << getNombre() << std::endl;
    std::cout << "longitud=" << getLongitud() << std::endl;
    std::cout << "peso="<< getPeso() << std::endl;
}


