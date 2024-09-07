#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"

using namespace std;

int main()
{
    // Herramienta (Se instancia un nuevo objeto de tipo Herramienta)
    Herramienta h;
    h.setNombre("Herramienta sin clase"); // Los valores de peso y longitud se crean con 0
    h.mostrarInformacion();


    // Martillo
    cout << "----" << endl;
    cout << "Martillo:" << endl;
    Martillo m; // Instancia de class Martillo
    m.setLongitud(17); // Metodo heredado de class Herramienta
    m.setPeso(0.6); // Metodo heredado de class Herramienta
    m.setTipoCabeza("Cuadrada"); // Metodo especifico de class Martillo
    m.mostrarInformacion();  // Metodo heredado de class Herramienta, con un agregado

    // Destornillador
    cout << "----" << endl;
    cout << "Destornillador:" << endl;
    Destornillador d;
    d.setLongitud(10);
    d.setPeso(0.1);
    d.setTipoPunta("Phillips");
    d.mostrarInformacion();

    // Taladro
    cout << "----" << endl;
    cout << "Taladro:" << endl;
    Taladro t;
    t.setLongitud(15);
    t.setPeso(0.7);
    t.setPotencia(2300);
    t.mostrarInformacion();

    return 0;
}
