#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Punto
{
public:
    Punto(float xInicial, float yInicial)
    : _x(xInicial), _y(yInicial)
    {}
    float getX() { return _x; }
    float getY() { return _y; }
    void setX(float num) { _x = num; }
    void setY(float num) { _y = num; }
    float calcularDistancia(Punto otroPunto)
    {
        float dist;
        dist = sqrt( pow((otroPunto._x - this->_x),2) + pow((otroPunto._y - this->_y),2));
        return dist;
    }
    void mover(float deltaX, float deltaY)
    {
        _x += deltaX;
        _y += deltaY;
    }

private:
    float _x;
    float _y;

};

int main()
{
    cout << fixed << setprecision(2);
    Punto p1(0,42);
    cout << "x="<< p1.getX() << endl;
    cout << "y="<< p1.getY() << endl;

    Punto p2(43,0);
    cout << "x="<< p2.getX() << endl;
    cout << "y="<< p2.getY() << endl;

    cout << "Distancia entre p1 y p2 =" << p1.calcularDistancia(p2) << endl;

    p2.mover(37,0);
    cout << "Distancia entre p1 y p2 =" << p1.calcularDistancia(p2) << endl;

    return 0;
}
