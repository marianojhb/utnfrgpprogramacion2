#pragma once
#include <string>

class Herramienta
{
public:
    Herramienta(float longitud=0, float peso=0, std::string nombre="");
    float getPeso() ;
    float getLongitud() ;
    const std::string &getNombre() const;
    void setLongitud(float);
    void setPeso(float);
    void setNombre(std::string);
    void mostrarInformacion();
    float getPrecioDeCompra();
    void setPrecioDeCompra(float);

private:
    float _longitud;
    float _peso;
    std::string _nombre;
    float _precioDeCompra;
};

