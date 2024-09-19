#include <iostream>

using namespace std;


int main() {

    int numeros[] = {243,343};

    int * direccion = numeros;

    // POSICIONES DE MEMORIA DE CADA ELEMENTO

    cout << endl << "Elemento 1" << endl;
    cout << "Posicion=" << direccion << endl;

    // Muevo a la siguiente posicion:
    direccion++;

    cout << endl << "Elemento 2" << endl;
    cout << "Posicion=" << direccion << endl;


    cout << endl << "------------------------------" << endl;

    // Recorro con bucle para hacer lo mismo

    direccion = numeros; // reseteo el puntero a la primera posicion

    for (int i=0; i<2; i++)
    {
        cout << endl << "Elemento " << i+1 << endl;
        cout << "Posicion=" << direccion++ << endl;
    }





    return 0;
}
