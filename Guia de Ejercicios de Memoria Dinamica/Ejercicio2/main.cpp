#include <iostream>

using namespace std;

void cargarVector(int *, int);
void mostrarVector(int *, int);


int main()
{
    int opcion = 1, tam;
    int *vec = nullptr;
    do {
        cout << "-------------------" << endl;
        cout << "Menu de opciones:  " << endl;
        cout << "1. Cargar vector " << endl;
        cout << "2. Mostrar vector " << endl;
        cout << "0. Salir " << endl;
        cout << "-------------------" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
            {
                cout << "Ingrese el tamaño: ";
                cin >> tam;
                vec = new int[tam]{};
                cargarVector(vec, tam);
            }
                break;
            case 2: {
                mostrarVector(vec, tam);
            }
        }
    }
    while(opcion!=0);
    delete [] vec;
    return 0;
}

void cargarVector(int *vec, int tam)
{
    cout << "INGRESE LOS VALORES: " << endl;
    for (int i = 0; i < tam; ++i) {
        cout << i+1 << ": ";
        cin >> vec[i];
    }
    cout << "FINALIZO LA CARGA" << endl;
}

void mostrarVector(int *vec, int tam)
{
    cout << "LOS VALORES INGRESADOS: " << endl;
    for (int i = 0; i < tam; ++i) {
        cout << i+1 << ": " << vec[i] << endl;
    }
    cout << "FIN" << endl;
}