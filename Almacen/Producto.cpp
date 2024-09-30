#include "Producto.h"
#include <iostream>

Producto::Producto()
{
    _codigo = 0;
    _stockMinimo = 0;
    _stockActual = 0;
    _precio = 0;
    _nombre = "";
    _estado = true;
}

Producto::Producto(int codigo, int stockMinimo, int stockActual, float precio, std::string nombre, bool estado){
    _codigo = codigo;
    _stockMinimo = stockMinimo;
    _stockActual = stockActual;
    _precio = precio;
    _nombre = nombre;
    _estado = true;
}
int Producto::getCodigo() const {
    return _codigo;
}
int Producto::getStockActual() const{
    return _stockActual;
}
int Producto::getStockMinimo() const{
    return _stockMinimo;
}
float Producto::getPrecio() const{
    return _precio;
}
std::string Producto::getNombre() const{
    return _nombre;
}
bool Producto::getEstado() const{
    return _estado;
}
void Producto::setCodigo(int codigo){
    _codigo = codigo;
}
void Producto::setStockActual(int stockActual){
    _stockActual = stockActual;
}
void Producto::setStockMinimo(int stockMinimo){
    _stockMinimo = stockMinimo;
}
void Producto::setPrecio(float precio){
    _precio = precio;
}
void Producto::setNombre(std::string nombre){
    _nombre = nombre;
}
void Producto::setEstado(bool estado){
    _estado = estado;
}

bool Producto::operator==(Producto &otro)
{
    bool res =  this->_codigo == otro._codigo;
    int num1= this->_codigo ;
    int num2= _codigo ;
    return this->_codigo == otro._codigo;
}