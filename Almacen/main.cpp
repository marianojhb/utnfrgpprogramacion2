#include <iostream>
#include "Producto.h"
#include "ProductosArchivo.h"

using namespace std;

Producto cargarProducto();
void crearProducto();
void mostrarProducto(Producto);
void mostrarTodos();

int main()
{
    Producto p;
    ProductosArchivo pa;

//    p = cargarProducto();
//
//    if(pa.guardar(p)) {
//        cout << "Producto guardado con exito!" << endl;
//    } else {
//        cout << "No se pudo guardar el producto" << endl;
//    }

//    for (int i = 0; i < pa.getCantidad(); ++i) {
//        p = pa.leer(i);
//        mostrarProducto(p);
//    }
//    cout << "--------------------------" << endl;
//    cout << pa.getCantidad() << " registros" << endl;

    Producto *productos;
    int cantidad = pa.getCantidad();
    productos = new Producto[cantidad];

    pa.leerTodos(productos, cantidad);

    for (int i = 0; i < cantidad; ++i) {
        mostrarProducto(productos[i]);
    }
    delete [] productos;

    return 0;
}

Producto cargarProducto()
{
    int codigo, stockMinimo, stockActual;
    float precio;
    string nombre;

    cout << "Ingrese codigo: ";
    cin >> codigo;

    cout << "Ingrese stock minimo: " ;
    cin >> stockMinimo;

    cout << "Ingrese stock actual: ";
    cin >> stockActual;

    cout << "Ingrese precio: ";
    cin >> precio;

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);

    return Producto(codigo, stockMinimo, stockActual, precio, nombre);
}

void mostrarProducto(Producto producto){
    cout << "--------------------------" << endl;
    cout << "Codigo: " << producto.getCodigo() << endl;
    cout << "Nombre: " << producto.getNombre() << endl;
    cout << "Precio: " << producto.getPrecio() << endl;
    cout << "Stock Minimo: " << producto.getStockMinimo() << endl;
    cout << "Stock Actual: " << producto.getStockActual() << endl;
}

