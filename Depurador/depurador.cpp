#include <iostream>

using namespace std;


int main() {

    int numeros[] = { 1,5,77,949,5};

    int *dir_num;

    dir_num = numeros;

    for (int i=0; i<5 ; i++)
    {
        cout << "Elemento del vector: " << *dir_num++ << " en la posicion de memoria " << &dir_num << endl;
    }

    return 0;
}
