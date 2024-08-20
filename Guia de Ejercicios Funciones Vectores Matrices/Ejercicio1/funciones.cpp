#include <iostream>
using namespace std;
#include "libreria_propia.h"

void pedirNotaExamen(int * notas, int examen_numero)
{
    cout << "Examen num "<< examen_numero << " tiene un " << getElement(notas,examen_numero-1) << endl;
}

void cantidadMayorAlPromedio(int*vec,int TAM)
{
    int respuesta=0;
    float promedio = avgElements(vec,TAM);
    for (int i = 0; i < TAM; ++i) {
        if(vec[i]>promedio) respuesta++;
    }
    cout << "Hay " << respuesta << " notas mayores al promedio" << endl;
}

void listarMayorAlPromedio(int*vec,int TAM)
{
    float promedio = avgElements(vec,TAM);
    cout << "Los examenes ";
    for (int i = 0; i < TAM; ++i) {
        if(vec[i]>promedio) {
            cout << i + 1 << " ";
        }
    }
    cout << "superaron el promedio" << endl;
}