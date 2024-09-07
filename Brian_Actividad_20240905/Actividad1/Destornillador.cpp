#include <iostream>
#include "Destornillador.h"
#include <string>

Destornillador::Destornillador()
{
    setNombre("Destornillador");
}

const std::string &Destornillador::getTipoPunta() const
{
    return _tipoPunta;
}

void Destornillador::setTipoPunta(const std::string &tipoPunta)
{
    _tipoPunta = tipoPunta;
}

void Destornillador::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    std::cout << "Tipo de Punta=" << getTipoPunta()  << std::endl;
}
