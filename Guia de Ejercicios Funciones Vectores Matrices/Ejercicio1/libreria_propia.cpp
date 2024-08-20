#include <iostream>
using namespace std;
#include <string>
#include "libreria_propia.h"

void cargarVector(int*vec, int TAM, string mensaje)
{
    cout << mensaje << endl;
    for (int i = 0; i < TAM; ++i) {
        cout << i << "=";
        cin >> vec[i];
    }
}

void verVector(int*vec,int TAM, string mensaje)
{
    cout << mensaje << endl;
    for (int i = 0; i < TAM; ++i) {
        cout << i << "=" << vec[i] << endl;
    }
}

int getElement(int*vec, int posicion_buscada)
{
    return vec[posicion_buscada];
}

void printElement(int*vec, int TAM, int posicion_buscada, const std::string& mensaje)
{
    cout << mensaje << endl;
    cout << getElement(vec, posicion_buscada) << endl;
}

int sumElements(int*vec, int TAM)
{
    int sum=0;
    for (int i = 0; i < TAM; ++i) {
        sum += vec[i];
    }
    return sum;
}

float avgElements(int*vec, int TAM)
{
    return (float)sumElements(vec,TAM)/TAM;
}

void limpiar() {
#ifdef _WIN32
    std::system("cls");  // Limpiar la pantalla en Windows
#else
    std::system("clear");  // Limpiar la pantalla en macOS y Linux
#endif
}
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