#pragma once
#include "Casa.h"

class Casaquinta : public Casa
{
public:
    Casaquinta();

    void imprimir();

    void imprimirDatosInmueble(); // metodo abstracto implementado

    void cargar();

    void cargarDatosInmueble(); // metodo abstracto implementado

    virtual ~Casaquinta() = default;

    //Getters
    bool getPileta();
    bool getQuincho();
    //Setters
    void setPileta(bool);
    void setQuincho(bool);
private:
    bool _pileta;
    bool _quincho;
};
