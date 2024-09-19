#pragma once
#include "Inmueble.h"

class Local : public Inmueble
{
public:
    Local();

    void imprimir();
    void imprimirDatosInmueble(); // metodo abstracto implementado
    void cargar();
    void cargarDatosInmueble(); // metodo abstracto implementado

    //Getters
    int getAntiguedad() const;
    float getSuperficieTotal() const;
    bool getZonaComercial() const;
    float getSuperficieEstacionamiento() const;
    //Setters
    void setAntiguedad (int);
    void setSuperficieTotal(float);
    void setZonaComercial(bool);
    void setSuperficieEstacionamiento(float);

    virtual ~Local() = default;

private:
    int _antiguedad;
    float _superficieTotal;
    bool _zonaComercial;
    float _superficieEstacionamiento;
};
