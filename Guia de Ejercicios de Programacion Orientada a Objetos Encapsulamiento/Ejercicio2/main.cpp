#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Dado
{
public:
    Dado()
    {
        _valor = rand()%6 + 1;
    }
    int getValor()
    {
        return _valor;
    }
    void lanzar()
    {
        _valor = rand()%6 + 1;
    }
    bool esMaximo()
    {
        return  (_valor==6) ? true : false;
    }
    bool esMinimo()
    {
        return  (_valor==1) ? true : false;
    }
private:
    int _valor; // almacena un numero entre 1 y 6
};


int main()
{
    srand(time(NULL));

    Dado jug1;

    cout << "Valor inicial: " << endl;
    cout << jug1.getValor() << endl;

    jug1.lanzar();
    cout << "Lanzamiento 1: " << endl;
    cout << jug1.getValor() << endl;

    cout << "Es Máximo: " << endl;
    cout << jug1.esMaximo() << endl;

    cout << "Es Minimo: " << endl;
    cout << jug1.esMinimo() << endl;



    return 0;
}
