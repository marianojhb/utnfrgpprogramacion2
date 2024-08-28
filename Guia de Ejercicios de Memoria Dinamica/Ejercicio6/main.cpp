#include <iostream>

using namespace std;

int* cargarVectoryProcesar(int*, int, int&);

int main() {

    const int tam=10;
    int vec[tam]={0};

    int* ptr_din;
    int tam_din;

    cout << "CARGAR 10 NUM ";
    for (int i = 0; i < tam; ++i) {
//        cout << "num " << i << ": "<< endl;
        cin >> vec[i];
    }

    ptr_din = cargarVectoryProcesar(vec,tam, tam_din);

    for (int i = 0; i < tam_din; ++i) {
        cout << ptr_din[i] << endl;
    }

    delete[] ptr_din;

    return 0;

}

int* cargarVectoryProcesar(int *vec, int tam, int &tam_din){

    int * ptr = new int[1];
    if(ptr==nullptr)
    {
        cout << "NO SE PUDO ASIGNAR MEMORIA" << endl;
        exit(0);
    }
    int contador_pares = 0;

    for (int i = 0; i < tam; ++i) {
        if (vec[i]%2==0)
        {
            if(contador_pares == 0)
            {
                ptr[contador_pares] = vec[i];
                contador_pares++;
            } else
            {
                bool existe = false;
                for (int j = 0; j < contador_pares; ++j) {
                    if (vec[i]==ptr[j])
                    {
                        existe = true;
                        break;
                    }
                }
                if (existe == false)
                {
                    ptr[contador_pares] = vec[i];
                    contador_pares++;
                }

            }
        }
    }
    tam_din = contador_pares;

    int*resultado = new int[tam_din];
    for (int i = 0; i < tam_din; ++i) {
        resultado[i] = ptr[i];
    }
    delete[]ptr;


    return resultado;
}