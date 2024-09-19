#include <iostream>
#include "Alumno.h"

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
        puts("2. Mostrar 1er alumno");
        puts("3. Mostrar todos los alumnos");
        puts("0. Exit");
        puts("-------------------");
        std::cout << "INGRESE LA OPCION: ";
        std::cin >> opcion;
        Alumno registro;
        switch(opcion)
        {
            case 1:
                registro.cargar();
                Alumno::grabarRegistroAlumno(registro);
                break;
            case 2:
                Alumno::leerRegistroAlumno(registro);
                break;
            case 3:
                Alumno::leerRegistroAlumno2();
                break;
        }
    limpiarBuffer(); // LIMPIA CIN PARA LA PROXIMA ITERACION
    }
    while(opcion!=0);

return 0;
}
