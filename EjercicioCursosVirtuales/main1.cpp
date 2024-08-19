#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void cargarMaterias(int *vectorMATERIAS, int* vectorCANTALUMNOS, int *vectorCANTPROFESORES, int CANTMATERIAS);
void cargarDatos(float *cantHoras, int accesoMarzo[20][31], int accesoMarzoHoras[20][31]);
void mostrarMenu();
void mostrarDatos(float * cantHoras, int CANTMATERIAS);
void materiasSinAcceso(float *cantHoras, int CANTMATERIAS); // PUNTO A MATERIAS SIN ACCESO
void materiaMasAccedida(float *cantHoras, int CANTMATERIAS); // PUNTO B MATERIA CON MAS HORAS DE ACCESO
void verAccesoMarzo(int CANTMATERIAS, int DIASMARZO, int accesoMarzo[][31]); // PUNTO C MARZO Y POR MATERIA MATRIZ CANT ACCESOS
void materiasConAcceso(float *cantHoras,  int CANTMATERIAS); // PUNTO D CANTIDAD DE MATERIAS CON ACCESOS
void alumnosPorProfesor(int CANTMATERIAS, int * vectorCANTPROFESORES, int* vectorCANTALUMNOS); // PUNTO E CANTIDAD DE ALUMNOS POR MATERIA
void verAccesoMarzoHoras(int CANTMATERIAS, int DIASMARZO, int accesoMarzoHoras[][31]); // PUNTO F
void pausar();
void limpiar();
void pausarLimpiar();

int main() {

    const int CANTMATERIAS = 20;
    const int DIASMARZO = 31;

    // cargar materias
    int vectorMATERIAS[CANTMATERIAS] = {};
    int vectorCANTALUMNOS[CANTMATERIAS] = {0};
    int vectorCANTPROFESORES[CANTMATERIAS] = {0};

    // por materia:
    float cantHoras[CANTMATERIAS]= {0}; //  vector que guarda horas por materia
    int accesoMarzo[CANTMATERIAS][DIASMARZO]={0}; // matriz bidimensional accesos y dias de marzo
    int accesoMarzoHoras[CANTMATERIAS][DIASMARZO]={0}; // matriz bidimensional horas y dias de marzo

    // menu:
    int opcion;
    mostrarMenu();
    cin >> opcion;

    while (opcion != 0) {
        switch (opcion)
        {
            case 1:
                cargarMaterias(vectorMATERIAS, vectorCANTALUMNOS, vectorCANTPROFESORES, CANTMATERIAS);
                break;
            case 2:
                cargarDatos(cantHoras, accesoMarzo, accesoMarzoHoras); // AGREGAR vectorCANTALUMNOS
                break;
            case 3:
                mostrarDatos(cantHoras, CANTMATERIAS);
                break;
            case 4:
                materiasSinAcceso(cantHoras, CANTMATERIAS); // PUNTO A
                break;
            case 5:
                materiaMasAccedida(cantHoras, CANTMATERIAS); // PUNTO B
                break;
            case 6:
                verAccesoMarzo(CANTMATERIAS, DIASMARZO, accesoMarzo); // PUNTO C
                break;
            case 7:
                materiasConAcceso(cantHoras, CANTMATERIAS); // PUNTO D
                break;
            case 8:
                alumnosPorProfesor(CANTMATERIAS, vectorCANTPROFESORES, vectorCANTALUMNOS);
                break;
            case 9:
                verAccesoMarzoHoras(CANTMATERIAS, DIASMARZO, accesoMarzoHoras); // PUNTO F
                break;
            case 0:
                return 0;

        }
        mostrarMenu();
        cin >> opcion;
    }
    return 0;
}

void mostrarMenu()
{
    limpiar();
    cout << "INGRESE LA OPCION:" << endl;
    cout << "1. CARGAR MATERIAS" << endl;//ok
    cout << "2. CARGAR INFORMACION DE ALUMNOS" << endl;//ok
    cout << "3. VER VECTOR DE HORAS" << endl;//ok
    cout << "4. MATERIAS QUE NO TUVIERON ACCESO NUNCA" << endl; // PUNTO A
    cout << "5. MATERIA MAS ACCEDIDA" << endl;// punto B <<<<<<<<<< ver >>>>>>>>>>
    cout << "6. VER ACCESO MARZO CANTIDAD" << endl; //ok
    cout << "7. MATERIAS ACCEDIDAS" << endl;
    cout << "8. POR CADA MATERIA LA CANTIDAD DE ALUMNOS POR PROFESOR" << endl;
    cout << "9. VER ACCESO MARZO HORAS" << endl;
    cout << "0. SALIR DEL PROGRAMA" << endl;
}

void cargarMaterias(int *vectorMATERIAS, int* vectorCANTALUMNOS, int *vectorCANTPROFESORES, int CANTMATERIAS)
{
    int materiaId;

    for (int i = 0; i < CANTMATERIAS; ++i) {
        cout << "ID DE MATERIA ";
        cin >> materiaId; // se ingresa 14
        vectorMATERIAS[materiaId-1] = materiaId;
        cout << "CANTIDAD DE ALUMNOS ";
        cin >> vectorCANTALUMNOS[materiaId-1];
        cout << "CANTIDAD DE PROFESORES ";
        cin >> vectorCANTPROFESORES[materiaId-1];
    }
    pausarLimpiar();
    for (int i = 0; i < CANTMATERIAS; ++i) {
        cout << "ID DE MATERIA " << vectorMATERIAS[i] << endl;
        cout << "CANTIDAD DE ALUMNOS " << vectorCANTALUMNOS[i] << endl;
        cout << "CANTIDAD DE PROFESORES " << vectorCANTPROFESORES[i] << endl;
        cout << "---" << endl;
    }
    pausarLimpiar();
}

void cargarDatos(float *cantHoras, int accesoMarzo[20][31], int accesoMarzoHoras[20][31])

{
    // por alumno
    int legajo, dia, mes, materia;
    float horas; // contador de horas

    cout << "---"<< endl;
    cout << "Ingrese legajo (0 para salir): ";
    cin >> legajo;

    while (legajo != 0) {
        cout << "Ingrese día: ";
        cin >> dia;
        cout << "Ingrese mes: ";
        cin >> mes;
        cout << "Ingrese materia: ";
        cin >> materia; // vector con 20 elementos, ir sumando la cantidad de horas con un float.
        cout << "Ingrese horas: ";
        cin >> horas;

        cantHoras[materia-1] += horas;

        // PUNTO C
        if(mes==3)
        {
            accesoMarzo[materia-1][dia-1] += 1;

            accesoMarzoHoras[materia-1][dia-1] += horas;
        }

        cout << "---"<< endl;
        cout << "Ingrese legajo (0 para salir): ";
        cin >> legajo;
    }

}

void mostrarDatos(float * cantHoras, int CANTMATERIAS)
{
    cout << "---" << endl;
    for (int i=0; i<CANTMATERIAS; i++)
    {
        cout << "MATERIA " << i+1  << " HORAS " << cantHoras[i] << endl;
    }
    pausarLimpiar();
}

void materiasSinAcceso(float *cantHoras, int CANTMATERIAS)
{
    bool hayMateriasSinAcceso = false;

    cout << "MATERIAS SIN ACCESO: " << endl;
    for (int i=0; i<CANTMATERIAS; i++)
    {
        if( cantHoras[i] == 0 )
        {
            hayMateriasSinAcceso = true;
            cout << "MATERIA " << i+1  << " HORAS " << cantHoras[i] << endl;

        }
    }
    if (hayMateriasSinAcceso == false)
    {
        cout << "No hay materias sin acceso" << endl;
    }
    pausarLimpiar();
}

void materiaMasAccedida(float *cantHoras, int CANTMATERIAS)
{
    float horasMax;

    for (int i=0; i<CANTMATERIAS; i++)
    {

        if ( i == 0 ) // maximo en la primera posicion
        {
            horasMax = cantHoras[0];
        }
        else if (cantHoras[i] > horasMax)
        {
            horasMax = cantHoras[i];
        }
    }
    if (horasMax > 0) {
        cout << "MATERIA MAS ACCEDIDA " << endl;
        for (int i = 0; i < CANTMATERIAS; ++i) {
            if ( cantHoras[i]==horasMax) {
                cout << i+1 << " ";
            }
        }
            cout << " CON " <<  horasMax << " HORAS "  << endl;
    } else
    {
        cout << "Ninguna materia fue accedida" << endl;
    }
    pausarLimpiar();
}

void verAccesoMarzo(int CANTMATERIAS, int DIASMARZO, int accesoMarzo[][31])
{
    cout << setw(14) << "DIA" << endl;
    cout << setw(4) << "MAT."; // Espacio para la columna de días
    for (int j = 0; j < DIASMARZO; j++) {
        cout << setw(4) << j + 1; // Cabecera de columnas
    }
    cout << endl;
    int dia=0;
    for (int i=0; i<CANTMATERIAS; i++)
    {
        cout << setw(4) << ++dia ;
        for (int j=0; j<DIASMARZO; j++)
        {
            if (accesoMarzo[i][j] == 0 )
            {
                cout << setw(4) <<  "-";
            }
            else
            {

                cout << setw(4) <<  accesoMarzo[i][j];
            }
        }
        cout << endl;
    }
    pausarLimpiar();
}

// CANTIDAD DE MATERIAS CON ACCESO
void materiasConAcceso(float *cantHoras,  int CANTMATERIAS)
{
    int contador = 0;
    for (int i = 0; i < CANTMATERIAS; ++i) {
        if (cantHoras[i]>0) contador++;
    }
    cout << "---" << endl;
    if (contador>0)
    {
        cout << "CANTIDAD DE MATERIAS CON ACCESO " << contador << endl;
    } else
    {
        cout << "NINGUNA MATERIA CON ACCESO" << endl;
    }
    pausarLimpiar();
}


void alumnosPorProfesor(int CANTMATERIAS, int * vectorCANTPROFESORES, int * vectorCANTALUMNOS)
{
    int aux;
    cout << setw(9) << "MATERIA" << setw(9) << "ALUMNOS" << setw(12) << "PROFESORES" << setw(13) << "ALUM P/PROF" << endl;
    for (int i = 0; i < CANTMATERIAS; i++) {
        aux = (int)vectorCANTALUMNOS[i] / vectorCANTPROFESORES[i];
        cout << setw(9) <<  i+1 << setw(9) << vectorCANTALUMNOS[i] << setw(12) << vectorCANTPROFESORES[i] << setw(13) << aux << endl;
    }
    pausarLimpiar();
}

void verAccesoMarzoHoras(int CANTMATERIAS, int DIASMARZO, int accesoMarzoHoras[][31])
{
    cout << setw(14) << "DIA:" << endl;
    cout << setw(4) << "MAT."; // Espacio para la columna de días
    for (int j = 0; j < DIASMARZO; j++) {
        cout << setw(4) << j + 1; // Cabecera de columnas
    }
    cout << endl;
    int dia=0;
    for (int i=0; i<CANTMATERIAS; i++)
    {
        cout << setw(4) << ++dia ;
        for (int j=0; j<DIASMARZO; j++)
        {
            if (accesoMarzoHoras[i][j] == 0 )
            {
                cout << setw(4) <<  "-";
            }
            else
            {

                cout << setw(4) <<  accesoMarzoHoras[i][j];
            }
        }
        cout << endl;
    }
    pausarLimpiar();
}


void limpiar() {
    #ifdef _WIN32
        std::system("cls");  // Limpiar la pantalla en Windows
    #else
        std::system("clear");  // Limpiar la pantalla en macOS y Linux
    #endif
}

// Función para pausar la ejecución
void pausar() {
    #ifdef _WIN32
        system("pause");  // Pausar la ejecución en Windows
    #else
        cout << endl << "Presiona Enter para continuar..." << endl;
        system("read -r");  // Pausar la ejecución en macOS y Linux
    #endif
}
void pausarLimpiar() {
    #ifdef _WIN32
        system("pause");  // Pausar la ejecución en Windows
        system("cls");  // Limpiar la pantalla en Windows
    #else
        cout << endl << "Presiona Enter para continuar..." << endl;
        system("read -r");  // Pausar la ejecución en macOS y Linux
        system("clear");  // Limpiar la pantalla en macOS y Linux
    #endif
}