#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"
using namespace std;

int main()
{
    Herramienta h;

    h.mostrarInformacion();

    cout << "----" << endl;

    Martillo m;
    m.setTipoCabeza("plana");
    m.mostrarInformacion();

    return 0;
}
