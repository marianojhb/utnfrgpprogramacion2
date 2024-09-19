#pragma once

class Fecha
{
public:
    Fecha(int d = 0, int m = 0, int a = 0);
    void cargar();
    void mostrar();

    ///Setters
    void setDia(int);
    void setMes(const int);
    void setAnio(int);

    ///Getters
    int getDia();
    int getMes();
    int getAnio();

private:
    int _dia, _mes, _anio;
};
