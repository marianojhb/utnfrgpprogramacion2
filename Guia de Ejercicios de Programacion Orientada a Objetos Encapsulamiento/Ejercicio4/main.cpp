#include <iostream>

using namespace std;

class Triangulo
{
public:

    Triangulo()
    {

    }
    float getLado(int lado)
    {
        return (lado==1) ? vec[0] : (lado == 2) ? vec[1] : (lado == 3) ? vec[2] : 0;
    }

    void setLado(int numero, float valor)
    {
        if (numero==1) vec[0]=valor;
        else if (numero==2) vec[1]=valor;
        else if (numero==3) vec[2]=valor;
    }

    int getTipo()
    {
        if ((vec[0] == vec[1]) && (vec[0] == vec[2])) return 1;
        else if ((vec[0] == vec[1]) || (vec[0] == vec[2]) || (vec[1] == vec[2])) return 2;
        else return 3;
    }
    bool isEscaleno()
    {
        return getTipo()==3;
    }
    bool isIsosceles()
    {
        return getTipo()==2;
    }
    bool isEquilatero()
    {
        return getTipo()==1;
    }

private:
    float vec[3];
};

int main()
{
    Triangulo t;

    t.setLado(1,13);
    t.setLado(2,13);
    t.setLado(3,13);

    cout << t.getLado(1) << endl;
    cout << t.getLado(2) << endl;
    cout << t.getLado(3) << endl;

    cout << "getTipo: " << t.getTipo() << endl;
    cout << "isEscaleno: " << t.isEscaleno() << endl;
    cout << "isEquilatero: " << t.isEquilatero() << endl;
    cout << "isIsosceles: " << t.isIsosceles() << endl;

    return 0;
}
