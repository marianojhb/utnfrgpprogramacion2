#pragma once
#include "Inmueble.h"

class Casa : public Inmueble
{
public:
    Casa();

    virtual void imprimir();

    void imprimirDatosInmueble(); // metodo abstracto implementado

    virtual void cargar();

    virtual void cargarDatosInmueble(); // metodo abstracto implementado


    //Getters
    int getAntiguedad();
    float getSuperficieTotal();
    float getSuperficieCubierta();
    int getHabitaciones();
    //Setters
    void setAntiguedad(int);
    void setSuperficieTotal(float);
    void setSuperficieCubierta(float);
    void setHabitaciones(int);

    virtual ~Casa() = default;

private:
    int _antiguedad;
    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;
};
