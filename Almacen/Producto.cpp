#include "Producto.h"

Producto::Producto(){

}Producto::Producto(int codigo, int stockMinimo, int stockActual, float precio, std::string nombre){
    _codigo = codigo;
    _stockMinimo = stockMinimo;
    _stockActual = stockActual;
    _precio = precio;
    _nombre = nombre;
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