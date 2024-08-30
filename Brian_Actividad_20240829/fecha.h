#pragma once
#include <string>

class Fecha
{
public:
    Fecha(int dia, int mes, int anio);
    std::string toString();
    void agregarDias(int dias);
    void restarDias(int dias);

private:
    int _dia;
    int _mes;
    int _anio;
    int getDia();
    int getMes();
    int getAnio();
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    bool validarDia();
    bool validarMes();
    bool validarAnio();
    void setDefaultFecha();
    void validarFecha();
    bool esBisiesto(int anio);
    void agregarDia();
    void restarDia();
};
