#include "Inmueble.h"
#include <cstring>

Inmueble::Inmueble(){}

// Getters:
int Inmueble::getIdInmueble()
{
    return _idInmueble;
}
const std::string Inmueble::getCalle() const

{
    return _calle;
}
const std::string Inmueble::getCalleNum() const
{
    return _calleNum;
}
const std::string Inmueble::getLocalidad() const
{
    return _localidad;
}
float Inmueble::getPrecioVta()
{
    return _precioVta;
}
float Inmueble::getPrecioAlq()
{
    return _precioAlq;
}
const std::string  Inmueble::getApellidoDuenio() const
{
    return _apellidoDuenio;
}
const std::string  Inmueble::getNombreDuenio() const
{
    return _nombreDuenio;
}
const std::string Inmueble::getDniDuenio() const
{
    return _dniDuenio;
}
const std::string Inmueble::getCelularDuenio() const
{
    return _celularDuenio;
}

//Setters:
void Inmueble::setIdInmueble(int idInmueble)
{
    _idInmueble = idInmueble;
}
void Inmueble::setCalle(const std::string &calle)
{
    _calle = calle;
}
void Inmueble::setCalleNum(int calleNum)
{
    _calleNum = calleNum;
};

void Inmueble::setLocalidad(const std::string &localidad)
{
    _localidad = localidad;
}
void Inmueble::setPrecioVta(float precioVta)
{
    _precioVta = precioVta;
}
void Inmueble::setPrecioAlq(float precioAlq)
{
    _precioAlq = precioAlq;
}
void Inmueble::setApellidoDuenio(const std::string &apellidoDuenio)
{
    _apellidoDuenio = apellidoDuenio;
}
void Inmueble::setNombreDuenio(const std::string &nombreDuenio)
{
    _nombreDuenio = nombreDuenio;
}
void Inmueble::setDniDuenio(const std::string &dniDuenio)
{
    _dniDuenio = dniDuenio;
}
void Inmueble::setCelularDuenio(const std::string &celularDuenio)
{

}