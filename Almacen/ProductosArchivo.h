#pragma once
#include <string>
#include "Producto.h"

class ProductosArchivo
{
public:
    ProductosArchivo();
    bool guardar(const Producto &registro);
    Producto leer(int); // devuelve un objeto Producto en la posicion que le pida dentro del archivo
    bool leerTodos(Producto registros[], int cantidad);
    int getCantidad() const;
private:
    std::string _fileName;

};
