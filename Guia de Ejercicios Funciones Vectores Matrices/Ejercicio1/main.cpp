#include <iostream>
using namespace std;
#include "libreria_propia.h"
#include "funciones.h"

/**
 * Cargar las notas del primer parcial de los 78 estudiantes de un curso.
 * Luego de cargar todas las notas:
 * - Pedir un número y mostrar por pantalla la nota registrada.
 * Por ejemplo, se ingresa 10 para mostrar el décimo examen.
 * - Listar cuántos estudiantes obtuvieron una nota mayor al promedio.
 * @return
 */




int main()
{
    int notas[78]{};

    cargarVector(notas,78,"Cargar las Notas por favor");
    pausarLimpiar();
    verVector(notas,78,"Notas obtuvidas");
    pausarLimpiar();
    printElement(notas,78, 10, "Nota obtuvida");
    pedirNotaExamen(notas,10);
    cout << "El promedio es " << avgElements(notas,78) << endl;
    cantidadMayorAlPromedio(notas,78);
    listarMayorAlPromedio(notas,78);


    return 0;

}
