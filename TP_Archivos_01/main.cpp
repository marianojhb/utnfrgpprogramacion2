#include <iostream>
#include "Alumno.h"
#include "ArchivoAlumno.h"

using namespace std;

// FUNCION QUE PERMITE QUE POR CADA ITERACION SE PUEDA VOLVER A CARGR UN ALUMNO Y NO QUEDEN CARACTERES EN EL BUFFER
void limpiarBuffer() {
    std::cin.clear(); // Limpiar el estado del flujo
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar caracteres restantes
}

int main()
{

///Hace un proyecto con un menú para cargar (1 registro) y mostrar los registros de alumnos
///Usar los .h y .cpp según corresponda.


    int opcion;
    do
    {
        puts("-------------------");
        puts("Menu de opciones:");
        puts("1. Cargar alumno");
        puts("2. Mostrar alumnos");
        puts("0. Exit");
        puts("-------------------");
        std::cout << "INGRESE LA OPCION: ";
        std::cin >> opcion;
        std::cin.ignore();
        Alumno registro;
        ArchivoAlumno archivo("alumnos.dat");
        switch(opcion)
        {
            case 1:
                registro.cargar();
                registro.mostrar();
                if(archivo.grabarRegistroAlumno(registro))
                {
                    std::cout << "DATOS GUARDADOS CORRECTAMENTE..." << std::endl;
                }
                break;
            case 2:
                if(archivo.leerRegistrosAlumnos())
                {
                    std::cout << "DATOS LEIDOS CORRECTAMENTE" << std::endl;
                }
                break;
        }
//    limpiarBuffer(); // LIMPIA CIN PARA LA PROXIMA ITERACION
    }
    while(opcion!=0);

return 0;
}
