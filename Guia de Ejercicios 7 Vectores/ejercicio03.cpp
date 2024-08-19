/**
 * Leer 10 números y guardarlos en un vector.
 * Determinar e informar cuál es el valor máximo y su posición dentro del vector.
 */

#include <iostream>
using namespace std;

void cargaVector(int *, int);
void muestraVector(int *, int);
int sumaVector(int *, int);
float promedioVector(int *, int);
int maximoVector(int *,int);

int main()
{

    const int TAM = 10;
    int vec[TAM]{0};

    cout << "---" << endl;
    cout << "INGRESE 10 VALORES" << endl;

    cargaVector(vec,TAM);

    muestraVector(vec,TAM);

    cout << "---" << endl << "LA SUMA DE LOS ELEMENTOS ES " << sumaVector(vec,TAM) << endl;
    cout << "---" << endl << "EL PROMEDIO DE LOS ELEMENTOS ES " << promedioVector(vec,TAM) << endl;
    cout << "---" << endl << "EL MAXIMO DE LOS ELEMENTOS ES " << maximoVector(vec,TAM) << endl;


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

float promedioVector(int *vec, int TAM)
{
    float promedio;

    promedio = (float)sumaVector(vec, TAM) / TAM;

    return promedio;
}

int maximoVector(int *vec,int TAM)
{
    int maximo = 0;

    for (int i = 0; i < TAM; ++i) {
        if(i==0)
        {
            maximo=vec[i];
        }
        else
        {
            if(vec[i]>maximo) maximo=vec[i];
        }
    }

    return maximo;
}
