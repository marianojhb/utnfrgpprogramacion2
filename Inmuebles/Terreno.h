#pragma once
#include "Inmueble.h"

class Terreno : public Inmueble
{
public:
    Terreno();

    void imprimir();
    void imprimirDatosInmueble(); // metodo abstracto implementado
    void cargar();
    void cargarDatosInmueble(); // metodo abstracto implementado

    //Getters
    float getAncho() const;
    float getLargo() const;
    float getSuperficieConstruible() const;
    //Setters
    void setAncho(float);
    void setLargo(float);
    void setSuperficieConstruible(float);
private:
    float _ancho;
    float _largo;
    float _superficieConstruible;
};
