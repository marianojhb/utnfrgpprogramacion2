#include <iostream>
#include <iomanip>
using namespace std;

class Termometro
{
public:
    Termometro(float tempInicial, char unidadInicial)
    :_temperatura(tempInicial), _unidad(unidadInicial){}

    float getTemperatura()
    {
        return _temperatura;
    }
    void setTemperatura(float a)
    {
        _temperatura = a;
    }
    void cambiarUnidad()
    {
        if(_unidad == 'F')
        {
            convierteFahrenheitaCelsius();
        }
        else if (this->_unidad == 'C')
        {
            convierteCelsiusaFahrenheit();
        }
    }
    void convierteCelsiusaFahrenheit()
    {
        _temperatura = (_temperatura * 9/5) + 32;
    }
    void convierteFahrenheitaCelsius()
    {
        _temperatura = (_temperatura-32) * 5/9;
    }
private:
    float _temperatura;
    char _unidad; // F o C Fahrenheit o Celsius


};

int main()
{
    Termometro t(15.12,'C');
    cout << fixed << setprecision(2);
    cout  << t.getTemperatura() << endl;
    t.cambiarUnidad();
    cout << t.getTemperatura() << endl;

    return 0;
}
