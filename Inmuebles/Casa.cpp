#include <iostream>
#include "Casa.h"

Casa::Casa()
{
    _antiguedad = 0;
    _superficieTotal = 0;
    _superficieCubierta = 0;
    _habitaciones = 0;
}

void Casa::imprimir()
{
    Casa::imprimirDatosInmueble();
    Casa::imprimirDatosPrecio();
    Casa::imprimirDatosPropietario();
}

void Casa::imprimirDatosInmueble()
{
    puts("----------------------");
    puts("        Datos         ");
    puts("----------------------");
    std::cout << "Id: " << this->getIdInmueble() << std::endl;
    std::cout << "Calle: " << this->getCalle() << std::endl;
    std::cout << "Numero: " << this->getCalleNum() << std::endl;
    std::cout << "Localidad: " << this->getLocalidad() << std::endl;

    std::cout << "Antiguedad construccion: " << this->getAntiguedad() << std::endl;
    std::cout << "Superficie total m2: " << this->getSuperficieTotal() << std::endl;
    std::cout << "Superficie cubierta m2: " << this->getSuperficieCubierta() << std::endl;
    std::cout << "Habitaciones: " << this->getHabitaciones() << std::endl;
}



void Casa::cargar()
{
    cargarDatosInmueble(); // Datos generales de inmueble
    Casa::cargarDatosPrecio(); // Datos generales de precio
    Casa::cargarDatosPropietario(); // Datos generales del duenio
}

void Casa::cargarDatosInmueble()
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

    // ademas:

    int antiguedad;
    float superficieTotal, superficieCubierta, habitaciones;

    std::cout << "Antiguedad: ";
    std::cin >> antiguedad;
    this->setAntiguedad(antiguedad);

    std::cout << "Superficie Total: ";
    std::cin >> superficieTotal;
    this->setSuperficieTotal(superficieTotal);

    std::cout << "Superficie Cubierta: ";
    std::cin >> superficieCubierta;
    this->setSuperficieCubierta(superficieCubierta);

    std::cout << "Habitaciones: ";
    std::cin >> habitaciones;
    this->setHabitaciones(habitaciones);

    std::cin.ignore();
}



//Getters
int Casa::getAntiguedad()
{
    return _antiguedad;
}
float Casa::getSuperficieTotal()
{
    return _superficieTotal;
}
float Casa::getSuperficieCubierta()
{
    return _superficieCubierta;
}
int Casa::getHabitaciones()
{
    return _habitaciones;
}

//Setters
void Casa::setAntiguedad(int antiguedad)
{
    _antiguedad = antiguedad;
}
void Casa::setSuperficieTotal(float superficieTotal)
{
    _superficieTotal = superficieTotal;
}
void Casa::setSuperficieCubierta(float superficieCubierta)
{
    _superficieCubierta = superficieCubierta;
}
void Casa::setHabitaciones(int habitaciones)
{
    _habitaciones = habitaciones;
}
