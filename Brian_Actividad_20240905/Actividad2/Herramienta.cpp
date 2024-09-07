#include <iostream>
#include "Herramienta.h"

//Herramienta::Herramienta()
//{
//    setNombre("");
//    setPeso(0);
//    setLongitud(0);
//}

Herramienta::Herramienta(float longitud, float peso, std::string nombre)
{
    setLongitud(longitud);
    setPeso(peso);
    setNombre(nombre);
}

float Herramienta::getLongitud()
{
    return _longitud;
}

float Herramienta::getPeso()
{
    return _peso;
}

const std::string &Herramienta::getNombre() const
{
    return _nombre;
}

void Herramienta::setNombre(std::string nombre)
{
    _nombre = nombre;
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

float Herramienta::getPrecioDeCompra()
{
    return _precioDeCompra;
}

void Herramienta::setPrecioDeCompra(float precioDeCompra)
{
    _precioDeCompra = precioDeCompra;
}