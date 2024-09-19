#pragma once
#include "Casa.h"
#include <string>

class Departamento : public Casa
{
public:
    Departamento();

    void imprimir();
    void imprimirDatosInmueble(); // metodo abstracto implementado
    void cargar();
    void cargarDatosInmueble(); // metodo abstracto implementado

    virtual ~Departamento() = default;

    //Getters:
    std::string getPiso() const;
    std::string getDepto() const;
    float getSuperficieBalcon() const;
    bool getCochera() const;
    float getExpensa() const;

    //Setters:
    void setPiso(const std::string &piso, int maxLength=4);
    void setDepto(const std::string &depto, int maxLength=4);
    void setSuperficieBalcon(float);
    void setCochera(bool);
    void setExpensa(float);


private:
    char _piso[4];
    char _depto[4];
    float _superficieBalcon;
    bool _cochera;
    float _expensa;
};
