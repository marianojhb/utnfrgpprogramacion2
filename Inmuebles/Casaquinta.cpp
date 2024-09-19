#include <iostream>
#include "Casaquinta.h"

Casaquinta::Casaquinta()
{
    _pileta = false;
    _quincho = false;
}

void Casaquinta::imprimir()
{
    Casaquinta::imprimirDatosInmueble();
    Casaquinta::imprimirDatosPrecio();
    Casaquinta::imprimirDatosPropietario();
}

void Casaquinta::imprimirDatosInmueble()
{
    Casa::imprimirDatosInmueble();
    std::cout << "Pileta: " << (getPileta() ? "Si" : "No") << std::endl;
    std::cout << "Quincho: " << (getQuincho() ? "Si" : "No") << std::endl;
}

void Casaquinta::cargar()
{
    cargarDatosInmueble(); // Datos generales de inmueble
    Casaquinta::cargarDatosPrecio(); // Datos generales de precio
    Casaquinta::cargarDatosPropietario(); // Datos generales del duenio
}


void Casaquinta::cargarDatosInmueble()
{
    Casa::cargarDatosInmueble(); // Datos generales de inmueble
    bool pileta, quincho;
    std::cout << "Pileta: (1. Si/ 0. no): ";
    std::cin >> pileta;
    this->setPileta(pileta);

    std::cout << "Quincho: (1. Si/ 0. no): ";
    std::cin >> quincho;
    this->setQuincho(quincho);

    std::cin.ignore();
}

//Getters
bool Casaquinta::getPileta()
{
    return _pileta;
}
bool Casaquinta::getQuincho()
{
    return _quincho;
}
//Setters
void Casaquinta::setPileta(bool pileta)
{
    _pileta = pileta;
}
void Casaquinta::setQuincho(bool quincho)
{
    _quincho = quincho;
}