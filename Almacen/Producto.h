#pragma once
#include <string>

class Producto
{
public:
    Producto();
    Producto(int, int, int, float, std::string);
    int getCodigo() const;
    int getStockActual() const;
    int getStockMinimo() const;
    float getPrecio() const;
    std::string getNombre() const;
    void setCodigo(int);
    void setStockActual(int);
    void setStockMinimo(int);
    void setPrecio(float);
    void setNombre(std::string);
private:
    int _codigo, _stockActual, _stockMinimo;
    float _precio;
    std::string _nombre;
};
