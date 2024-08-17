#include <iostream>
using namespace std;

void recalcularMateriaMasInscripciones(int&, int&, int, int);
void pausar();
int maxVector(int*,int); // procesa modalidades
void matrizLlamadosModalidad(int (*vec_llamados)[4]);

int main()
{
    int cantidadMaterias = 2;
    int ingresoMateria, ingresoCantidadInscripciones=0;
    int legajo, llamado, modalidad, nota;

    // Punto 1.  Variables
    int materiaMasInscripciones_id = 0, materiaMasInscripciones_cantidad = 0;
    int pause;

    // Punto2. Modalidades
    int contadorModalidades[4]{}; // vector de 4 posiciones para contabilizar cada modalidad
    int mayorModalidad = -1; // variable que guarda la modalidad mayor
    int modalidades = 4; // tamaño del vector modalidades

    // Punto 3 Llamados

    /**
    * Estadísticas por llamado: Para cada llamado, la modalidad de examen
    * que más inscripciones haya registrado.
     ciclo que recorre n veces de acuerdo a la cantidad de materias
     se aclara la posición 3, no es la materia 3, porque puede tener otro número distinto (ej 59)
    */

    int vec_llamados[3][4]{}; // matriz para por cada tipo de llamado (fila) y por cada modalidad (col), contar cantidad
    for(int i=0; i<cantidadMaterias; i++)
    {
        system("clear");
        cout << "\t\t\tMATERIA CON MAS INSCRIPTOS AL MOMENTO" << endl;
        cout << "\t\t\tMATERIA " << materiaMasInscripciones_id 
                    << " CON " << materiaMasInscripciones_cantidad 
                    << " INSCRIPCIONES" << endl;
        cout << endl;
        cout << endl;
        matrizLlamadosModalidad(vec_llamados);
        cout << endl;

        cout << endl << "*** MATERIA ***" << endl;
        cout << "MATERIA ";
        cin >> ingresoMateria;
        cout << "INGRESO CANTIDAD DE INSCRIPTOS ";
        cin >> ingresoCantidadInscripciones;
        recalcularMateriaMasInscripciones(materiaMasInscripciones_id, 
                                          materiaMasInscripciones_cantidad, 
                                          ingresoMateria, 
                                          ingresoCantidadInscripciones);// Punto 1

        for(int j=0; j < ingresoCantidadInscripciones; j++)
        {
            cout << endl << "--- POR INSCRIPCION ---" << endl;
            cout << "INGRESE LEGAJO ";
            cin >> legajo;
            cout << "INGRESE LLAMADO ";
            cin >> llamado;
            cout << "INGRESE MODALIDAD ";
            cin >> modalidad;
            cout << "INGRESE NOTA ";
            cin >> nota;

            // punto 2
            contadorModalidades[modalidad-1] +=1;
            mayorModalidad = maxVector(contadorModalidades, modalidades);

            // punto 3
            vec_llamados[llamado-1][modalidad-1] +=1; // falta calcular por cada llamado, la modalidad mas elegida

        }
    }

    // Punto 1 Resultado
    system("clear");
    cout << endl << "--- PUNTO 1 ---" << endl;
    cout << "MATERIA CON MAS INSCRIPCIONES " << materiaMasInscripciones_id << " CON " << materiaMasInscripciones_cantidad << endl;


    // Punto 2 Resultado
    cout << endl << "--- PUNTO 2 ---" << endl;
    cout << "MODALIDAD MAS USADA " << mayorModalidad << endl;
    pausar();

    // Punto 3 Resultado
    matrizLlamadosModalidad(vec_llamados);

    return 0;
}

void pausar()
{
    cout << endl << endl;
    system("bash -c 'read -p \"Press Enter to continue...\"'");
}

void recalcularMateriaMasInscripciones(int &materiaMasInscripciones_id, int &materiaMasInscripciones_cantidad, int ingresoMateria, int ingresoCantidadInscripciones)
{
    if (ingresoCantidadInscripciones > materiaMasInscripciones_cantidad)
    {
        materiaMasInscripciones_id = ingresoMateria;
        materiaMasInscripciones_cantidad = ingresoCantidadInscripciones;
    }
}

// calcula el mayor de un vector
int maxVector(int*vec, int tam)
{
    int res;
    for(int i=0; i<tam-1; i++)
    {
        if(vec[i]>vec[i+1])
        {
            res = i+1; //mas 1 porque 0 no es opcion
        }
    }
    return res;
}

void matrizLlamadosModalidad(int (*vec_llamados)[4])
{
    cout << "\t\tMODALIDAD" << endl;
    cout << "LLAM.\t1\t2\t3\t4" << endl;
    for (int x=0; x<3; x++)
    {
        cout << x+1 << "\t\t";
        for(int y=0; y<4; y++)
        {
            cout << vec_llamados[x][y] << "\t";
        }
        cout << endl;
    }
}