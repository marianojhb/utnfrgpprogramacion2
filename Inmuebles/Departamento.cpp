#include <iostream>
#include "Departamento.h"
#include <string>

Departamento::Departamento()
{
    std::strcpy(_piso, "");
    std::strcpy(_depto, "");
    _superficieBalcon = .0f;
    _cochera = false;
    _expensa = .0f;
}

void Departamento::imprimir()
{
    Departamento::imprimirDatosInmueble();
    Departamento::imprimirDatosPrecio();
    Departamento::imprimirDatosPropietario();
}

void Departamento::imprimirDatosInmueble()
{
    Casa::imprimirDatosInmueble();
    std::cout << "Piso: " << getPiso() << std::endl;
    std::cout << "Depto: " << getDepto()<< std::endl;
    std::cout << "Superficie balcon: " << getSuperficieBalcon() << " m2" << std::endl;
    std::cout << "Cochera: " << (getCochera() ? "Si" : "No") << std::endl;
    std::cout << "Expensa: $" << getExpensa() << std::endl;
}

void Departamento::cargar()
{
    Departamento::cargarDatosInmueble();
    Departamento::cargarDatosPrecio();
    Departamento::cargarDatosPropietario();
}

void Departamento::cargarDatosInmueble()
{
    Casa::cargarDatosInmueble();

    std::string piso, depto, superficieBalcon, cochera, expensa;

    std::cout << "Piso: ";
    std::getline(std::cin, piso);
    this->setPiso(piso);

    std::cout << "Depto: ";
    std::getline(std::cin, depto);
    this->setDepto(depto);

    std::cout << "Superficie balcon: ";
    std::getline(std::cin, superficieBalcon);
    this->setSuperficieBalcon(std::stof(superficieBalcon));

    std::cout << "Cochera (1. Si / 0. No): ";
    std::getline(std::cin, cochera);
    this->setCochera(std::stoi(cochera));

    std::cout << "Expensa: ";
    std::getline(std::cin, expensa);
    this->setExpensa(std::stof(expensa));
}


std::string Departamento::getPiso() const
{
    return _piso;
}
std::string Departamento::getDepto() const
{
    return _depto;
}

float Departamento::getSuperficieBalcon() const
{
    return _superficieBalcon;
}
bool Departamento::getCochera() const
{
    return _cochera;
}
float Departamento::getExpensa() const
{
    return _expensa;
}


//Setter:
void Departamento::setPiso(const std::string &piso, int maxLength)
{
    std::string pisoTruncado = piso.substr(0, maxLength);
    std::strcpy(_piso, pisoTruncado.c_str());
}
void Departamento::setDepto(const std::string &depto, int maxLength)
{
    std::string deptoTruncado = depto.substr(0, maxLength);
    std::strcpy(_depto, deptoTruncado.c_str());
}

void Departamento::setSuperficieBalcon(float superficieBalcon)
{
    _superficieBalcon = superficieBalcon;
}
void Departamento::setCochera(bool cochera)
{
    _cochera = cochera;
}
void Departamento::setExpensa(float expensa)
{
    _expensa = expensa;
}
