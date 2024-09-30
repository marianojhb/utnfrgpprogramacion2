#pragma once
#include <string>
#include "Producto.h"
#include "Mariano.h"

class ProductosArchivo
{
public:
    ProductosArchivo();
    bool guardar(const Producto &producto);
    Producto leer(int); // devuelve un objeto Producto en la posicion que le pida dentro del archivo
    bool leerTodos(Producto registros[], int cantidad);
    int getCantidad() const;
    bool editar(int, Producto&);
    bool eliminar(int);
private:
    std::string _fileName;

};
