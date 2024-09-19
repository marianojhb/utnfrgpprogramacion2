#include <iostream>
#include "Local.h"

Local::Local()
{
    _antiguedad = 0;
    _superficieTotal = .0f;
    _zonaComercial = false;
    _superficieEstacionamiento = .0f;
}

void Local::imprimir()
{
    Local::imprimirDatosInmueble();
    Local::imprimirDatosPrecio();
    Local::imprimirDatosPropietario();
}
void Local::imprimirDatosInmueble()
{
    puts("*** Datos:         ");
    std::cout << "Id: " << this->getIdInmueble() << std::endl;
    std::cout << "Calle: " << this->getCalle() << std::endl;
    std::cout << "Numero: " << this->getCalleNum() << std::endl;
    std::cout << "Localidad: " << this->getLocalidad() << std::endl;
    std::cout << "Antiguedad: " << this->getAntiguedad() << std::endl;
    std::cout << "Superficie total: " << this->getSuperficieTotal() << std::endl;
    std::cout << "Zona comercial: " << this->getZonaComercial() << std::endl;
    std::cout << "Superficie estacionamiento: " << this->getSuperficieEstacionamiento() << std::endl;
}// metodo abstracto implementado
void Local::cargar()
{
    cargarDatosInmueble(); // Datos generales de inmueble
    Local::cargarDatosPrecio(); // Datos generales de precio
    Local::cargarDatosPropietario(); // Datos generales del duenio
}
void Local::cargarDatosInmueble()
{
    std::string idInmueble, calle, numero, localidad, apellidoDuenio, nombreDuenio, dniDuenio, celularDuenio;
    puts("----------------------");
    puts("        Datos         ");
    puts("----------------------");

    std::cout << "Id: ";
    std::getline(std::cin, idInmueble);
    this->setIdInmueble(std::stoi(idInmueble));

    std::cout << "Calle: ";
    std::getline(std::cin, calle);
    this->setCalle(calle);

    std::cout << "Numero: ";
    std::getline(std::cin, numero);
    this->setCalleNum(numero);

    std::cout << "Localidad: ";
    std::getline(std::cin, localidad);
    this->setLocalidad(localidad);

    // ademas:

    std::string antiguedad, superficieTotal, zonaComercial, superficieEstacionamiento;

    std::cout << "Antiguedad: ";
    std::getline(std::cin,antiguedad);
    this->setAntiguedad(std::stoi(antiguedad));

    std::cout << "Superficie Total: ";
    std::getline(std::cin,superficieTotal);
    this->setSuperficieTotal(std::stof(superficieTotal));

    std::cout << "Zona comercial (1. Si, 0. No): ";
    std::getline(std::cin, zonaComercial);
    this->setZonaComercial(std::stoi(zonaComercial));

    std::cout << "Superficie estacionamiento: ";
    std::getline(std::cin, superficieEstacionamiento);
    this->setSuperficieEstacionamiento(std::stof(superficieEstacionamiento));

    std::cin.ignore();
}



//Getters
int Local::getAntiguedad() const
{
    return _antiguedad;
}
float Local::getSuperficieTotal() const
{
    return _superficieTotal;
}
bool Local::getZonaComercial() const
{
    return _zonaComercial;
}
float Local::getSuperficieEstacionamiento() const
{
    return _superficieEstacionamiento;
}
//Setters
void Local::setAntiguedad (int antiguedad)
{
    _antiguedad = antiguedad;
}
void Local::setSuperficieTotal(float superficieTotal)
{
    _superficieTotal = superficieTotal;
}
void Local::setZonaComercial(bool zonaComercial)
{
    _zonaComercial = zonaComercial;
}
void Local::setSuperficieEstacionamiento(float superficieEstacionamiento)
{
    _superficieEstacionamiento = superficieEstacionamiento;
}
