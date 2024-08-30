#include <iostream>
#include "fecha.h"

using namespace std;

int main()
{
    Fecha f(29,2,2024);
    cout << f.toString() << endl;
    f.agregarDias(10);
    cout << f.toString() << endl;
    f.restarDias(1);
    cout << f.toString() << endl;
    return 0;
}
