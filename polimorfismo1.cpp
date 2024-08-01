#include <iostream>
using namespace std;

class Pointer
{
public:
    int medida;
    virtual void ver()
    {

        cout << "se ejecuto de la clase pointer (base)" << endl;
    }
    void showMedida()
    {
        cout << medida << endl;
    }
};

class Arrow: public Pointer
{
public:
    Arrow()
    {
        cout << otro << endl;
    }
    void ver()
    {
        cout << "se ejecuto desde arrow" << endl;

    }

    int otro=2;

    void asignar(int num)
    {
        medida= num;
        cout << "se asigno " << this->medida << endl;
    }
};

class Cursor: public Pointer
{
public:
    void ver()
    {
        cout << "se ejecuto desde cursor" << endl;
    }
 };

int main() {

    Arrow a;
    Pointer p;
    cout << a.Arrow::otro << endl;


    return 0;
}
