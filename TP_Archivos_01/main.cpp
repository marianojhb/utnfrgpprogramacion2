#include <iostream>
#include "Alumno.h"
#include "ArchivoAlumno.h"
#include "Mariano.h"

using namespace std;

int main()
{

///Hace un proyecto con un menú para cargar (1 registro) y mostrar los registros de alumnos
///Usar los .h y .cpp según corresponda.


//    FILE * _p2;
//    Alumno reg11;
//    _p2 = fopen("alumnos.dat", "rb");
//
//    cout << fread(&reg11, sizeof(Alumno),1,_p2) << endl;
//    reg11.mostrar();
//    pausar();
//
//    cout << fread(&reg11, sizeof(Alumno),1,_p2) << endl;
//    reg11.mostrar();
//    pausar();
//
//    cout << fread(&reg11, sizeof(Alumno),1,_p2) << endl;
//    reg11.mostrar();
//    pausar();

    int opcion;
    do
    {
        limpiar();
        puts("-------------------");
        puts("Menu de opciones:");
        puts("1. Agregar alumno");
        puts("2. Mostrar listado de alumnos");
        puts("3. Mostrar legajo");
        puts("4. Menu reportes");
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
                archivo.grabarRegistroAlumno(registro);
                break;
            case 2:
                archivo.leerRegistrosAlumnos();
                break;
            case 3:
                {
                    Alumno reg;
                    int input_legajo;
                    limpiar();
                    cout << "INGRESE LEGAJO ";
                    cin >> input_legajo;
                    reg = archivo.buscaLegajo(input_legajo);
                    if (reg.getLegajo()!=0)
                    {
                        limpiar();
                        reg.mostrar();
                    } else
                    {
                        cerr << "No se encontro el legajo" << endl;
                    }
                    pausar();
                }
                break;
            case 4:
            {
                do {
                    limpiar();
                    puts("-------------------");
                    puts("Menu de reportes:");
                    puts("1. Listar alumnos por anio de nacimiento");
                    puts("2. Carrera con mas cantidad de alumnos (1-8)");
                    puts("3. Carrera con menos cantidad de alumnos");
                    puts("4. Listado alfabetico de alumnos");
                    puts("5. Generar ordenados.dat con el listado alfabetico");
                    puts("0. Volver al menu anterior");
                    puts("-------------------");
                    std::cout << "INGRESE LA OPCION: ";
                    std::cin >> opcion;
                    std::cin.ignore();
                    switch(opcion)
                    {
                        case 0:
                            break;
                    }
                } while (opcion!=0);
                opcion = 1;
            }
        }
    }
    while(opcion!=0);

return 0;
}
