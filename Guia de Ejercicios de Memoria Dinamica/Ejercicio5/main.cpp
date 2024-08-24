#include <iostream>

using namespace std;

/*
Hacer una función que reciba un vector de enteros y su tamaño y luego muestre el
vector ordenado de forma ascendente, tener en cuenta que el vector enviado como
 argumento no debe ser modificado.
*/

void verVec(int*, int);

int main()
{
    int*vec;
    vec = new int[0]();
    if (vec == nullptr)
    {
        cout << "ERROR DE ASIGNACION DE MEMORIA";
        exit(0);
    }

    string input="";
    int contador=0;

    cout << "INGRESE UN ENTERO ";
    while(cin >> input )
    {
        if(input == "q")
        {
            break;
        }

        vec[contador] = stoi(input);
        contador++;
        cout << "INGRESE UN ENTERO ";

    }

    verVec(vec,contador);

    delete[]vec;

    return 0;
}

void verVec(int*vec, int tam)
{
    for(int i = 0; i<tam; i++)
    {
        cout << "pos="<< i << " valor="<< vec[i] << endl;
    }
}
