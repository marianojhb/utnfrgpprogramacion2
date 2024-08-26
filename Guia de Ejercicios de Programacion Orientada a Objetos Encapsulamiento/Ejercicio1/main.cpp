#include <iostream>

using namespace std;

class Rectangulo
{
public:
    // Declaracion del Constructor:
    Rectangulo(float b, float a);

    // Declaracion de Metodos setters
    void setBase(float);
    void setAltura(float);

    // Declaracion de Metodos getters:
    float getBase() { return _base; }
    float getAltura() { return _altura; }

    // Declaracion de Metodos de objetos:
    float calcularArea();
    float calcularPerimetro();

private:
    // Atributos de objetos
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


// IMPLEMENTACIONES:

// CONSTRUCTOR
Rectangulo::Rectangulo(float b, float a)
    : _base(b), _altura(a) {}

// SETTERS
void Rectangulo::setBase(float base)
{
    this->_base = base;
}

void Rectangulo::setAltura(float altura)
{
    this->_altura = altura;
}

// METODOS
float Rectangulo::calcularArea()
{
    return this->_base * this->_altura;
}

float Rectangulo::calcularPerimetro()
{
    return (2 * this->_base) + (2 * this->_altura);
}