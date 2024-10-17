#include <iostream>

using namespace std;
//Hacer una función que reciba un vector de enteros y su tamaño y
//devuelva la cantidad de números distintos que se repiten en el vector.

void agregaElemento(int*,int&,int);
void muestraVector(int*,int);
void buscaDistintos(int*, int);

int main()
{
    int num;
    int contador = 0;
    int * vec;
    if (vec == nullptr)
    {
        cout << "ERROR DE ASIGNACION DE MEMORIA";
        exit(0);
    }
    vec = new int[1]();
    cout << "INGRESE NUM ";
    cin >> num;
    while(num>0)
    {
        agregaElemento(vec,contador, num);
        cout << "INGRESE NUM ";
        cin >> num;
    }
    cout << "---" << endl;
    cout << "NUMEROS CARGADOS: " << endl;
    muestraVector(vec,contador);
    cout << endl;
    buscaDistintos(vec,contador);
    delete[]vec;
    return 0;
}

void agregaElemento(int*vec,int &contador, int num)
{
    vec[contador] = num;
    contador++;
}

void buscaDistintos(int*vec, int contador)
{
    int cantidadNumDistintos = 0;
    for (int i = 0; i < contador; i++) {
        bool repetido = false;
        for (int j = 1+i; j < contador; j++) {
            {
                if (vec[i] == vec[j])
                {
                    repetido = true;
                    break;
                }
            }
        }
        if (repetido != true)
        {
            cantidadNumDistintos++;
        }
    }
    cout << "HAY " << cantidadNumDistintos << " NUMEROS DISTINTOS" << endl;
}

void muestraVector(int*vec,int contador)
{
    for (int i = 0; i < contador; ++i) {
        cout << i << "\t" << vec[i] << endl;
    }
}