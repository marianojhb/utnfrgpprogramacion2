#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

class CuentaBancaria
{
public:
    CuentaBancaria(int a, float b)
    : _numCuenta(a), _saldo(b)
    {

    }
    void depositar(float monto)
    {
        _saldo += monto;
    }
    void retirar(float monto)
    {
        if(_saldo >= monto)
        {
            _saldo -= monto;
        }
    }
    float obtenerSaldo()
    {
        return _saldo;
    }
    int _numCuenta;

private:
    float _saldo;
};


int main()
{

    CuentaBancaria micuenta(2180,0);

    cout << "Cuenta No. " << micuenta._numCuenta << endl;
    cout << "Saldo actual: $ ";
    cout << micuenta.obtenerSaldo() << endl;

    cout << "----" << endl;
    micuenta.depositar(1200000);
    cout << "Cuenta No. " << micuenta._numCuenta << endl;
    cout << "Saldo actual: $ ";
    std::cout.imbue(std::locale("es_ES.UTF-8"));
    std::cout  << put_money(micuenta.obtenerSaldo() * 100) << std::endl;

    cout << "----" << endl;
    micuenta.retirar(1000000);
    cout << "Cuenta No. " << micuenta._numCuenta << endl;
    cout << "Saldo actual: $ ";
    std::cout.imbue(std::locale("es_ES.UTF-8"));
    std::cout  << put_money(micuenta.obtenerSaldo() * 100) << std::endl;


    return 0;
}
