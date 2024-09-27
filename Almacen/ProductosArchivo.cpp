#include "ProductosArchivo.h"
#include "Producto.h"
#include <iostream>


ProductosArchivo::ProductosArchivo()
{
    _fileName = "productos.dat";
}

bool ProductosArchivo::guardar(const Producto &registro)
{
    FILE * pFile;
    bool result;
    pFile = fopen(_fileName.c_str(), "ab");
    if (pFile == nullptr)
    {return false;}
    result = fwrite(&registro, sizeof(Producto), 1, pFile) == 1;
    fclose(pFile);
    return result;
}

Producto ProductosArchivo::leer(int pos)
{
    Producto registro;

    FILE * pFile;
    pFile = fopen(_fileName.c_str(), "rb");
    if(pFile == nullptr)
    {return registro;}

    fseek(pFile,sizeof(Producto) * pos,SEEK_SET);

    fread(&registro, sizeof(Producto), 1, pFile);

    fclose(pFile);

    return registro;
}

int ProductosArchivo::getCantidad() const
{
    FILE * pFile;
    pFile = fopen(_fileName.c_str(), "rb");
    if (pFile == nullptr)
    {
        return 1;
    }
    fseek(pFile, 0 , SEEK_END);
    int total = ftell(pFile);
    fclose(pFile);
    return total / sizeof(Producto);
}

bool ProductosArchivo::leerTodos(Producto registros[], int cantidad)
{
    FILE * pFile;
    bool result;
    pFile = fopen(_fileName.c_str(), "rb");
    if(pFile == nullptr)
    {return false;}

    result = fread(&registros, sizeof(Producto), cantidad, pFile) == cantidad;

    fclose(pFile);

    return result;

}