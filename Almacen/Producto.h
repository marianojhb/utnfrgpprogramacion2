#pragma once
#include <string>

class Producto
{
public:
    Producto();
    Producto(int, int, int, float, std::string, bool);
    int getCodigo() const;
    int getStockActual() const;
    int getStockMinimo() const;
    float getPrecio() const;
    std::string getNombre() const;
    bool getEstado() const;
    void setCodigo(int);
    void setStockActual(int);
    void setStockMinimo(int);
    void setPrecio(float);
    void setNombre(std::string);
    void setEstado(bool);
    bool operator==(Producto&);


private:
    int _codigo, _stockActual, _stockMinimo;
    float _precio;
    bool _estado;
    std::string _nombre;
};
