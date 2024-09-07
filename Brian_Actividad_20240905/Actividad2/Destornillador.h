#pragma once
#include "Herramienta.h"
#include <string>

class Destornillador: public Herramienta
{
public:
    Destornillador();
    const std::string &getTipoPunta() const;
    void setTipoPunta(const std::string &_tipoPunta);
    void mostrarInformacion();
private:
    std::string _tipoPunta;
};
