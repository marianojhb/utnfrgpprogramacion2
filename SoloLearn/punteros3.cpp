#include <iostream>

using namespace std;


int main() {

    // TAMAÑO DE UN VECTOR PERO CON PUNTEROS

    // DEFINASE EL vector de enteros

    int vec[] = {43, 23, 566, 2, 6, 23, 5, 3, 6, 77, 84, 23};


    // ahora podemos calcular la cantidad de elementos, porque sabemos que
    // los enteros ocupan 4 bytes.

    cout << sizeof(vec)/4 << endl;

    return 0;
}
