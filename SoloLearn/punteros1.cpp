#include <iostream>

using namespace std;


int main() {

    int numeros[] = {14,32,53,74,95};


    int *direccion = numeros;

    for (int i=0; i<5; i++)
    {
        cout << i << "=" << *direccion << " dir=" << direccion++ << endl;
        cout << endl;
    }

    return 0;
}
