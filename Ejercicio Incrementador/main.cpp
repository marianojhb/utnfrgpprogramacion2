#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:

    // Constructor
    Animal(int arg1) // Animal obj(2);
    {
        cout << "Se creo un objeto de la clase Animal, ENTERO" << endl;
    }

    // Constructor recargado:
    Animal()  // Animal obj(2);
    {
        cout << "Se creo un objeto de la clase Animal, FLOTANTE" << endl;
    }


};

int main()
{
    Animal perro_a((float)2); // instancia / creando una instancia
    Animal perro_b(2);

    int cantidad;

    cantidad = perro_a + perro_b; // 2


    return 0;
}


// struct tiene los miembros de clase publicos por defecto y clases
