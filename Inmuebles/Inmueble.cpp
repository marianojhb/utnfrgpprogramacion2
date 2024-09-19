#include <iostream>
#include <string>
#include <cstring>
#include "Inmueble.h"

Inmueble::Inmueble()
{
    _idInmueble = 0;
    std::strcpy(_calle,"");
    std::strcpy(_calleNum,"");
    std::strcpy(_localidad,"");
    _precioVta = 0;
    _precioAlq = 0;
    std::strcpy(_apellidoDuenio,"");
    std::strcpy(_nombreDuenio,"");
    std::strcpy(_dniDuenio,"");
    std::strcpy(_celularDuenio,"");
}

void Inmueble::imprimir()
{

}

void Inmueble::imprimirDatosInmueble()
{
}


void Inmueble::imprimirDatosPrecio()
{
    puts("----------------------");
    puts("        Precio        ");
    puts("----------------------");
    std::cout << "Precio venta: " << Inmueble::getPrecioVta() << std::endl;
    std::cout << "Precio alquiler: " << Inmueble::getPrecioAlq() << std::endl;
}

void Inmueble::imprimirDatosPropietario()
{
    puts("----------------------");
    puts("Datos del Propietario:");
    puts("----------------------");
    std::cout << "Apellido del duenio: " << Inmueble::getApellidoDuenio() << std::endl;
    std::cout << "Nombre del duenio: " << Inmueble::getNombreDuenio() << std::endl;
    std::cout << "DNI del duenio: " << Inmueble::getDniDuenio() << std::endl;
    std::cout << "Celular del duenio: " << Inmueble::getCelularDuenio() << std::endl;
}

void Inmueble::cargar()
{

}

void Inmueble::cargarDatosInmueble()
{
}


void Inmueble::cargarDatosPrecio()

{
    std::string precioVenta, precioAlquiler;
    puts("----------------------");
    puts("        Valor         ");
    puts("----------------------");

    std::cout << "Precio de venta: ";
    std::cin >> precioVenta;
    setPrecioVta(std::stof(precioVenta));

    std::cout << "Precio de alquiler: ";
    std::cin >> precioAlquiler;
    setPrecioAlq(std::stof(precioAlquiler));

    std::cin.ignore();

}

void Inmueble::cargarDatosPropietario()
{
    std::string apellido, nombre, dni, celular;
    puts("----------------------");
    puts("Datos del Propietario:");
    puts("----------------------");

    std::cout << "Apellido: ";
    std::getline(std::cin, apellido);
    setApellidoDuenio(apellido);

    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);
    setNombreDuenio(nombre);

    std::cout << "DNI: ";
    std::getline(std::cin, dni);
    setDniDuenio(dni);

    std::cout << "Celular: ";
    std::getline(std::cin, celular);
    setCelularDuenio(celular);
}



// Getters:
int Inmueble::getIdInmueble() const
{
    return _idInmueble;
}
std::string Inmueble::getCalle() const
{
    return _calle;
}
std::string Inmueble::getCalleNum() const
{
    return _calleNum;
}
std::string Inmueble::getLocalidad() const
{
    return _localidad;
}
float Inmueble::getPrecioVta() const
{
    return _precioVta;
}
float Inmueble::getPrecioAlq() const
{
    return _precioAlq;
}
std::string  Inmueble::getApellidoDuenio() const
{
    return _apellidoDuenio;
}
std::string  Inmueble::getNombreDuenio() const
{
    return _nombreDuenio;
}
std::string Inmueble::getDniDuenio() const
{
    return _dniDuenio;
}
std::string Inmueble::getCelularDuenio() const
{
    return _celularDuenio;
}

//Setters:
void Inmueble::setIdInmueble(int idInmueble)
{
    _idInmueble = idInmueble;
}
void Inmueble::setCalle(const std::string &calle, int maxLength)
{
    std::string calleTruncada = calle.substr(0, maxLength);
    std::strcpy(_calle, calleTruncada.c_str());
}
void Inmueble::setCalleNum(const std::string &calleNum, int maxLength)
{
    std::string calleNumTruncada = calleNum.substr(0, maxLength);
    std::strcpy(_calleNum, calleNumTruncada.c_str());
};
void Inmueble::setLocalidad(const std::string &localidad, int maxLength)
{
    std::string localidadTruncada = localidad.substr(0, maxLength);
    std::strcpy(_localidad, localidadTruncada.c_str());

}
void Inmueble::setPrecioVta(float precioVta)
{
    _precioVta = precioVta;
}
void Inmueble::setPrecioAlq(float precioAlq)
{
    _precioAlq = precioAlq;
}
void Inmueble::setApellidoDuenio(const std::string &apellidoDuenio,  int maxLength)
{
    std::string apellidoDuenioTruncado = apellidoDuenio.substr(0, maxLength);
    std::strcpy(_apellidoDuenio, apellidoDuenioTruncado.c_str());
}
void Inmueble::setNombreDuenio(const std::string &nombreDuenio,  int maxLength)
{
    std::string nombreDuenioTruncado = nombreDuenio.substr(0,maxLength);
    std::strcpy(_nombreDuenio, nombreDuenioTruncado.c_str());
}
void Inmueble::setDniDuenio(const std::string &dniDuenio,  int maxLength)
{
    std::string dniDuenioTruncado = dniDuenio.substr(0,maxLength);
    std::strcpy(_dniDuenio,dniDuenioTruncado.c_str());
}
void Inmueble::setCelularDuenio(const std::string &celularDuenio,  int maxLength)
{
    std::string celularDuenioTruncado = celularDuenio.substr(0,maxLength);
    std::strcpy(_celularDuenio, celularDuenioTruncado.c_str());
}