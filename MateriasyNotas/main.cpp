#include <iostream>
using namespace std;

void recalcularMateriaMasInscripciones(int&, int&, int, int);
void pausar();
void cuentaModalidad(int*, int &, int); // cuenta las modalidades
void calculaMayorModalidad(int*, int &, int); // procesa modalidades

int main()
{
    int ingresoMateria, ingresoCantidadInscripciones=0;
    int legajo, llamado, modalidad, nota;

    // Punto 1.  Variables
    int materiaMasInscripciones = 0, cantidadInscripcionesMaximaPorMateria = 0;
    int pause;

    // Punto2. Modalidades
    int contadorModalidades[4]{}; // vector de 4 posiciones para contabilizar cada modalidad
    int mayorModalidad = -1; // variable que guarda la modalidad mayor

    for(int i=0; i<3; i++)
    {
        system("clear");
        cout << "\t\t\tMATERIA CON MAS INSCRIPTOS AL MOMENTO" << endl;
        cout << "\t\t\tMATERIA " << materiaMasInscripciones << " CON " << cantidadInscripcionesMaximaPorMateria << " INSCRIPCIONES" << endl;
        cout << endl << "*** MATERIA ***" << endl;
        cout << "MATERIA ";
        cin >> ingresoMateria;
        cout << "INGRESO CANTIDAD DE INSCRIPTOS ";
        cin >> ingresoCantidadInscripciones;
        recalcularMateriaMasInscripciones(materiaMasInscripciones, cantidadInscripcionesMaximaPorMateria, ingresoMateria, ingresoCantidadInscripciones);// Punto 1

        for(int j=0; j < ingresoCantidadInscripciones; j++)
        {
            cout << endl << "--- POR INSCRIPCION ---" << endl;
            cout << "INGRESE LEGAJO ";
            cin >> legajo;
            cout << "INGRESE LLAMADO ";
            cin >> llamado;
            cout << "INGRESE MODALIDAD ";
            cin >> modalidad;
            cuentaModalidad(contadorModalidades, mayorModalidad, modalidad);
            calculaMayorModalidad(contadorModalidades, mayorModalidad, modalidad);
            cout << "INGRESE NOTA ";
            cin >> nota;
        }
    }

    // Punto 1 Resultado
    system("clear");
    cout << endl << "--- PUNTO 1 ---" << endl;
    cout << "MATERIA CON MAS INSCRIPCIONES " << materiaMasInscripciones << " CON " << cantidadInscripcionesMaximaPorMateria << endl;


    // Punto 2 Resultado
    cout << endl << "--- PUNTO 2 ---" << endl;
    cout << "MODALIDAD MAS USADA " << mayorModalidad << endl;
    pausar();

    return 0;
}

void pausar()
{
    cout << endl << endl;
    system("bash -c 'read -p \"Press Enter to continue...\"'");
}

void recalcularMateriaMasInscripciones(int &materiaMasInscripciones, int &cantidadInscripcionesMaximaPorMateria, int ingresoMateria, int ingresoCantidadInscripciones)
{
    if (ingresoCantidadInscripciones > materiaMasInscripciones)
    {
        materiaMasInscripciones = ingresoMateria;
        cantidadInscripcionesMaximaPorMateria = ingresoCantidadInscripciones;
    }
}

void cuentaModalidad(int*contadorModalidades, int &mayorModalidad, int modalidad)
{
    switch (modalidad)
    {
    case 1:
        contadorModalidades[0] +=1;
        break;
    case 2:
        contadorModalidades[1] +=1;
        break;
    case 3:
        contadorModalidades[2] +=1;
        break;
    case 4:
        contadorModalidades[3] +=1;
        break;
    default:
        return;
    }
    cout << "Modalidad 1 = " <<  contadorModalidades[0] << endl;
    cout << "Modalidad 2 = " <<  contadorModalidades[1] << endl;
    cout << "Modalidad 3 = " <<  contadorModalidades[2] << endl;
    cout << "Modalidad 4 = " <<  contadorModalidades[3] << endl;
}


void calculaMayorModalidad(int*contadorModalidades, int &mayorModalidad, int modalidad)
{
    for(int i=0; i<3; i++)
    {
        if(contadorModalidades[i]>contadorModalidades[i+1])
        {
            mayorModalidad = i;
        }
    }
}
