#include <iostream>
using namespace std;
#include "modeloparcial.h"

void mostrarMenu()
{
    int opcion;
    do {

        cout << "------------------------------" << endl;
        cout << "Menu de opciones: " << endl;
        cout << "1. Obras" << endl;
        cout << "2. Materiales" << endl;
        cout << "3. Compras" << endl;
        cout << "4. Proveedores" << endl;
        cout << "0. Salir" << endl;
        cout << "------------------------------" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar caracteres restantes
        std::cin.clear(); // Limpiar el estado del flujo
        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
            {
                do {
                    cout << "------------------------------" << endl;
                    cout << "1. Cargar Proveedor" << endl;
                    cout << "2. Cargar Proveedores" << endl;
                    cout << "3. Ver lista de Proveedores" << endl;
                    cout << "0. Volver" << endl;
                    cout << "------------------------------" << endl;
                    cout << "Ingrese la opcion: ";
                    cin >> opcion;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar caracteres restantes
                    std::cin.clear(); // Limpiar el estado del flujo

                    ArchivoProveedores archivo = "proveedores.dat";  // ABRO EL ARCHIVO PARA GUARDAR LA INFORMACION
                    switch(opcion)
                    {
                        case 1:
                        {
                            // CARGO UN PROVEEDOR
                            cout << "INGRESE EL PROVEEDOR " << endl;
                            Proveedor proveedorNuevo;
                            cout << "INGRESE NUMERO DE PROVEEDOR, NOMBRE, TELEFONO, DIRECCION, Y PROVINCIA" << endl;
                            proveedorNuevo.Cargar();
                            // GRABO EL REGISTRO EN ARCHIVO
                            archivo.grabarRegistro(proveedorNuevo);
                        }
                            break;
                        case 2:
                        {
                            // CARGO UN PROVEEDORES
                            int proveedoresNuevos;
                            cout << "CUANTOS PROVEEDORES QUIERE AGREGAR: "  << endl;
                            cin >> proveedoresNuevos;
                            for (int i = 0; i < proveedoresNuevos; ++i) {
                                cout << "INGRESE EL PROVEEDOR " << proveedoresNuevos << endl;
                                Proveedor proveedorNuevo;
                                cout << "INGRESE NUMEROPROVEEDOR, NOMBRE, TELEFONO, DIRECCION, Y PROVINCIA" << endl;
                                proveedorNuevo.Cargar();
                                // GRABO EL REGISTRO EN ARCHIVO
                                archivo.grabarRegistro(proveedorNuevo);
                            }
                        }
                            break;
                        case 3:
                        {
                            // LEO EL ARCHIVO GUARDADO
                            Proveedor proveedor;
                            int registros = archivo.contarRegistros();
                            for (int i = 0; i < registros; ++i) {
                                proveedor = archivo.leerRegistro(i);
                                proveedor.Mostrar();
                                cout << "---" << endl;
                            }
                            cout << "Total " << registros << " registros" << endl;
                        }
                            break;
                    }
                } while(opcion!=0);
                opcion = 9999; // volver al menu anterior
            }
            break;
        }
    } while (opcion!=0);
}

int main()
{

    mostrarMenu();


    return 0;
}
