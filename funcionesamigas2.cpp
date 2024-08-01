#include <iostream>
using namespace std;

template <class T>
void funcion(T &obj) {
    obj.valor = 42;
    cout << obj.valor;
}

class Base {

    private:
    protected:

    public:
        int valor;
    Base() {
        valor = 0;
    }

    friend void funcion<Base>(Base &obj);
};

//class Hija: public Base {
//public:
//    friend void funcion<Hija>(Hija &obj);
//};


int main() {
    Base b;
    funcion(b);
}
