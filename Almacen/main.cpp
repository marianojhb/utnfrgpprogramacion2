#include <iostream>
#include "Producto.h"
#include "ProductosArchivo.h"
#include "Mariano.h"

using namespace std;

Producto cargarProducto();
void guardarProducto(Producto&);
void mostrarProducto(Producto);
void mostrarProductos();
void editarProducto();
void eliminarProducto();
void buscarProducto();

int main()
{
    int opcion;
    Producto p;
    ProductosArchivo pa;
    while(true)
    {
        limpiar();
        cout << endl << endl << endl;
        cout << "1. Mostrar productos" << endl;
        cout << "2. Agregar productos" << endl;
        cout << "3. Modificar producto" << endl;
        cout << "4. Eliminar producto" << endl;
        cout << "5. Buscar producto" << endl;
        cout << "0. Salir" << endl;
        cout << "---------------------" << endl;
        cout << "Elija la opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarProductos();
                break;
            case 2: // Agregar producto
            {
                Producto j;
                j = cargarProducto();
                guardarProducto(j);
            }
                break;
            case 3:
                editarProducto();
                break;
            case 4:
                eliminarProducto();
                break;
            case 5:
                buscarProducto();
                break;
            case 0:
                exit(0);
        }
    }
    return 0;
}

//void guardarProducto(Producto &producto)
//{
//    ProductosArchivo pa;
//    int cantidad;
//    cantidad = pa.getCantidad();
//    bool result;
//    result = pa.guardar(producto);
//
//    if (result)
//    {
//    cout << "Producto guardado con exito!" << endl;
//    }
//    else
//    {
//        std::cout << "El registro ya existe y no se puede agregar" << std::endl;
//    }
//}

void guardarProducto(Producto &producto)
{
    ProductosArchivo pa;
    Producto *registros;
    int cantidad;
    int codProductoNuevo = producto.getCodigo();
    cantidad = pa.getCantidad();
    bool result = false;
    bool existe = false;
    registros = new Producto[cantidad];
    pa.leerTodos(registros,cantidad);

    for (int i = 0; i < cantidad; ++i) {
        cout <<  registros[i].getCodigo() << "==" << codProductoNuevo << "? " << endl;
        pausar();

        if ( registros[i].getCodigo() == codProductoNuevo)
        {
            cout << "Ya existe" << endl;
            existe = true;
            break;
        }
    }
    if(!existe)
    {
        result = pa.guardar(producto);
    }
    if (result)
    {
    cout << "Producto guardado con exito!" << endl;
    }
    else
    {
        std::cout << "El registro ya existe y no se puede agregar" << std::endl;
    }
}

Producto cargarProducto()
{
    int codigo, stockMinimo, stockActual;
    float precio;
    string nombre;
    bool estado = true;

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


    return Producto(codigo, stockMinimo, stockActual, precio, nombre, estado);
}

void mostrarProducto(Producto producto){
    cout << "--------------------------" << endl;
    cout << "Codigo: " << producto.getCodigo() << endl;
    cout << "Nombre: " << producto.getNombre() << endl;
    cout << "Precio: " << producto.getPrecio() << endl;
    cout << "Stock Minimo: " << producto.getStockMinimo() << endl;
    cout << "Stock Actual: " << producto.getStockActual() << endl;
    cout << "Estado: " << producto.getEstado() << endl;
}

void mostrarProductos()
{
    ProductosArchivo pa;
    Producto * productos;
    int registros_eliminados = 0;

    int registros_totales = pa.getCantidad();
    productos = new Producto[registros_totales];

    pa.leerTodos(productos, registros_totales);

    for (int i = 0; i < registros_totales; ++i) {
        if (productos[i].getEstado() == true)
        {
            mostrarProducto(productos[i]);
        }
        else
            {
                registros_eliminados++;
        }
    }

    cout << "--------------------------" << endl;
    cout << registros_totales-registros_eliminados << " registros activos" << endl;
    cout << registros_eliminados << " registros eliminados" << endl;
    cout << registros_totales << " registros totales" << endl;
    delete [] productos;
}

void editarProducto()
{
    Producto p;
    ProductosArchivo pa;
    int cantidad = pa.getCantidad();
    int codProducto;
    int i;
    bool result;

    Producto * productos;
    productos = new Producto[cantidad];

    pa.leerTodos(productos, cantidad);
    cout << "Ingrese codigo del producto: " << endl;
    cin >> codProducto; // 1
    for (i = 0; i < cantidad; ++i) {
        if (productos[i].getCodigo() == codProducto) // TODO: USAR LA FUNCION BUSCAR
        {
            p = cargarProducto();

            result = pa.editar(i, p);
            if(result)
            {
                std::cout << "Se grabaron los cambios" << std::endl;

            } else
            {
                std::cout << "No se grabaron los cambios" << std::endl;
            }
        }
        break;
    }
    delete []productos;
}

void eliminarProducto()
{
    Producto p;
    ProductosArchivo pa;
    int cantidad;
    int codProducto;
    int pos;
    int i;
    bool result;
    Producto * productos;

    cantidad = pa.getCantidad();
    productos = new Producto[cantidad];

    std::cout << "Ingrese cod de producto a eliminar: ";
    cin >> codProducto;

    pa.leerTodos(productos, cantidad);

    for (i = 0; i < cantidad; ++i) {
        if(productos[i].getCodigo()==codProducto)
        {
            pos=i;
        }
    }

    result = pa.eliminar(pos);

    if (result)
    {
        std::cout << "Se elimino exitosamente el registro" << endl;
    }
    else {
        std::cerr << "No se elimino el registro" << std::endl;
    }
    delete[]productos;
}

void buscarProducto(){
    ProductosArchivo pa;
    Producto * productos;
    if(productos == nullptr)
    { cout << "Error de asignacion de memoria" << endl;}
    int codProducto;
    int cantidad = pa.getCantidad();
    cout << "Ingrese el codigo de producto a buscar " << endl;
    cin >> codProducto;
    productos = new Producto[cantidad];
    pa.leerTodos(productos,cantidad);
    for (int i = 0; i < cantidad; ++i) {
        if (productos[i].getCodigo() == codProducto) {
            mostrarProducto(productos[i]);
            break;
        }
    }
}