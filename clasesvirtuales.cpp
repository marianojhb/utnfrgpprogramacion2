#include <iostream>

using namespace std;


class Base
{
public:
     virtual void funcion() // si no ponemos virtual, las funciones de las clases hijas no sobreescriben esta funcion de la clase base.
    {
        cout << "Funcion miembro de Base " << endl;
    }
};

class Hija: public Base
{
public:
     void funcion()
    {
        cout << "Funcion miembro de Hija" << endl;
    }
};

class Hijo: public Base
{
public:
    void funcion()
    {
        cout << "Funcion miembro de Hijo" << endl;
    }
};
int main() {

    Hijo hijo;
    Hija hija;

    Base *b1 = &hijo;
    Base *b2 = &hija;

    b1->funcion();
    b2->funcion();

    return 0;
}
