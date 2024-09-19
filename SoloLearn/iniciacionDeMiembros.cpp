#include <iostream>

using namespace std;

class Motor {
public:
    Motor(int a, int b);
    void setCilindrada(int x);
    void setValvulas(int x);
    int getCilindrada();
    int getValvulas();
protected:
private:
    int cilindrada;
    int valvulas;
    friend void funcionAmiga(Motor &obj);
};


// CONSTRUCTOR
Motor::Motor(int a, int b)
    : valvulas(b) {
    setCilindrada(a);
    cout << cilindrada << endl;
    cout << valvulas << endl;
}

// SETTER CILINDRADA
void Motor::setCilindrada(int x) {
    cilindrada = x;
}

// SETTER VALVULAS
void Motor::setValvulas(int x) {
    valvulas = x;
}

// GETTERS CILINDRADA
int Motor::getCilindrada() {
    return cilindrada;
}

// GETTER VALVULAS
int Motor::getValvulas() {
    return valvulas;
}

// FUNCION AMIGA
void borrarCilindrada(Motor &obj)
{
    obj.setCilindrada(0);
}

int main() {

    Motor motor1(200, 4);

    // motor1.setCilindrada(600);

    cout << motor1.getCilindrada() << endl;
    cout << "---" << endl;
    borrarCilindrada(motor1);

    cout << motor1.getCilindrada() << endl;
    // motor1.setValvulas(10);

    // cout << motor1.getValvulas() << endl;


    return 0;
}
