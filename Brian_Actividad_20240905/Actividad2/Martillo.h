#pragma once
#include "Herramienta.h"

class Martillo : public Herramienta
{
public:
    Martillo();

    const std::string &getTipoCabeza() const;

    void setTipoCabeza(const std::string &tipoCabeza);

    void mostrarInformacion();

private:
    std::string _tipoCabeza;
};

