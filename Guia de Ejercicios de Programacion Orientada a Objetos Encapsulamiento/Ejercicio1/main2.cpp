#include <iostream>

using namespace std;

class Rectangulo
{
public:
    Rectangulo(float b, float a)
            : _base(b), _altura(a) {}

    void setBase(float base)
    {
        this->_base = base;
    }

    void setAltura(float altura)
    {
        this->_altura = altura;
    }

    float getBase() { return _base; }
    float getAltura() { return _altura; }

    float calcularArea()
    {
        return this->_base * this->_altura;
    }

    float calcularPerimetro()
    {
        return (2 * this->_base) + (2 * this->_altura);
    }

private:
    float _base;
    float _altura;
};


int main()
{
    Rectangulo rect1(1,1);

    rect1.setAltura(4);

    cout << rect1.calcularPerimetro() << endl;

    return 0;
}
