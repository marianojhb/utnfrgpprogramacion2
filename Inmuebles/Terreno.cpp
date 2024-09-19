#include <iostream>
#include "Terreno.h"

Terreno::Terreno()
{
    _ancho = .0f;
    _largo = .0f;
    _superficieConstruible = .0f;
}

void Terreno::imprimir()
{
    Terreno::imprimirDatosInmueble();
    Terreno::imprimirDatosPrecio();
    Terreno::imprimirDatosPropietario();
}
void Terreno::imprimirDatosInmueble()
{
    puts("----------------------");
    puts("        Datos         ");
    puts("----------------------");
    std::cout << "Id: " << this->getIdInmueble() << std::endl;
    std::cout << "Calle: " << this->getCalle() << std::endl;
    std::cout << "Numero: " << this->getCalleNum() << std::endl;
    std::cout << "Localidad: " << this->getLocalidad() << std::endl;

}

void Terreno::cargar()
{
    cargarDatosInmueble(); // Datos generales de inmueble
    Terreno::cargarDatosPrecio(); // Datos generales de precio
    Terreno::cargarDatosPropietario(); // Datos generales del duenio
}
void Terreno::cargarDatosInmueble()
{
    std::string idInmueble, calle, numero, localidad, apellidoDuenio, nombreDuenio, dniDuenio, celularDuenio;
    puts("*** Datos:         ");


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

    std::string ancho, largo, superficieConstruible;

    std::cout << "Ancho: ";
    std::getline(std::cin, ancho);
    this->setAncho(std::stof(ancho));

    std::cout << "Largo: ";
    std::getline(std::cin, largo);
    this->setLargo(std::stof(largo));

    std::cout << "Superficie Construible: ";
    std::getline(std::cin, superficieConstruible);
    this->setSuperficieConstruible(std::stof(superficieConstruible));
}



float Terreno::getAncho() const
{
    return _ancho;
}
float Terreno::getLargo() const
{
    return _largo;
}
float Terreno::getSuperficieConstruible() const
{
    return _superficieConstruible;
}
//Setters
void Terreno::setAncho(float ancho)
{
    _ancho = ancho;
}
void Terreno::setLargo(float largo)
{
    _largo = largo;
}
void Terreno::setSuperficieConstruible(float superficieConstruible)
{
    _superficieConstruible = superficieConstruible;
}