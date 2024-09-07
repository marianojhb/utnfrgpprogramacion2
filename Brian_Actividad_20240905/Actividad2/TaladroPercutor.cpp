#include <iostream>
#include "TaladroPercutor.h"
#include <string>

TaladroPercutor::TaladroPercutor()
{
    setGolpesPorMinuto(0);
    setNombre("Taladro percutor");
}

const int TaladroPercutor::getGolpesPorMinuto()
{
    return _golpesPorMinuto;
}

void TaladroPercutor::setGolpesPorMinuto(int golpesPorMinuto)
{
    _golpesPorMinuto = golpesPorMinuto;
}

const void TaladroPercutor::mostrarInformacion()
{
    Taladro::mostrarInformacion();
    std::cout << "Golpes por minuto=" <<  getGolpesPorMinuto() << std::endl;
}

