#include <iostream>
using namespace std;

class Mother
{
public:
    int _edad;
        Mother()
        {
            _edad = 42;
        }
        void sayHi() {
            cout << "Hi";
        }
    int getEdad(){ return _edad; }
    void setEdad(int edad) {
            _edad=edad;
        }
};

class Daughter: public Mother
{
public:
        Daughter() {};

        int getEdad() {
            return Mother::getEdad()+1;
        }
};

int main() {
    Mother m;
    cout << m.getEdad() << endl;
    cout << endl << endl << "---" << endl << endl;
//    Daughter d;
//    cout << d.getEdad() << endl;
    return 0;

}
