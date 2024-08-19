// Hacer un programa para ingresar 10 números y guardarlos en un vector.
// Determinar e informar cuál es la suma de los valores del vector.

#include <iostream>
using namespace std;

void cargaVector(int *, int);
void muestraVector(int *, int);
int sumaVector(int *, int);

int main()
{
    
    const int TAM = 10;
    int vec[TAM]{0};

    cout << "---" << endl;
    cout << "INGRESE 10 VALORES" << endl;

    cargaVector(vec,TAM);

    muestraVector(vec,TAM);

    cout << "---" << endl << "LA SUMA DE LOS ELEMENTOS ES " << sumaVector(vec,TAM) << endl;


    return 0;
}



void cargaVector(int *v, int TAM)
{
    cout << "---" << endl;
    cout << "CARGA VECTOR: " << endl;
    for (int i = 0; i < TAM; ++i) {
        cout << "POS " << i+1 << "  ";
        cin >> v[i];
    }
}

void muestraVector(int *v, int TAM)
{

    cout << "---" << endl;
    cout << "VECTOR CARGADO: {";
    for (int i = 0; i < TAM; ++i) {
        if(i!=TAM-1)
        {
        cout << v[i] << ", ";

        }
        else
        {
         cout << v[i] << "}" << endl;

        }
    }
}

int sumaVector(int *vec, int TAM)
{
    int suma=0;
    for (int i = 0; i < TAM; ++i) {
        suma += vec[i];
    }
    return suma;
}