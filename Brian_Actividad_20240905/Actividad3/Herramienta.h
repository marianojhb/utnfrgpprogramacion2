#pragma once
#include <string>

class Herramienta
{
public:
    Herramienta();
    float getPeso() ;
    float getLongitud() ;
    const std::string &getNombre() const;
    void setLongitud(float);
    void setPeso(float);
    void setNombre(std::string);
     void mostrarInformacion();

private:
    float _longitud;
    float _peso;
    std::string _nombre;
};

