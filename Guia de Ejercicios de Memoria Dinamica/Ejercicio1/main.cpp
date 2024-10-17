#include <iostream>

using namespace std;

int main()
{
    int tam;
    cout << "INGRESE EL TAMAÑO DEL ARRAY: ";
    cin >> tam;
    int * arreglo;
    if (arreglo == nullptr)
    {
        cout << "ERROR DE ASIGNACION DE MEMORIA";
        exit(0);
    }
    arreglo = new int[tam];
    cout << "INGRESE LOS VALORES: " << endl;
    for (int i = 0; i < tam; ++i) {
        cout << i+1 << ": ";
        cin >> arreglo[i];
    }
    for (int i = 0; i < tam; ++i) {
        cout << i <<  ": " << arreglo[i] << endl;
    }
    delete [] arreglo;
    return 0;
}
