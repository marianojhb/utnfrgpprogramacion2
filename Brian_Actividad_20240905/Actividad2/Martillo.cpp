#include <iostream>
#include "Martillo.h"
#include <string>

Martillo::Martillo()
{
    setNombre("Martillo");
}

const std::string &Martillo::getTipoCabeza() const
{
    return _tipoCabeza;
}

void Martillo::setTipoCabeza(const std::string &tipoCabeza)
{
    _tipoCabeza = tipoCabeza;
}

void Martillo::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    std::cout << "Tipo de cabeza=" << getTipoCabeza() << std::endl;
}
