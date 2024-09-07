#pragma once
#include "Taladro.h"
#include <string>

class TaladroPercutor: public Taladro
{
public:
    TaladroPercutor();
    const int getGolpesPorMinuto();
    void setGolpesPorMinuto(int);
    const void mostrarInformacion();
private:
    int _golpesPorMinuto;

};

