#include <iostream>
#include <string>
using namespace std;

class Usuario
{
public:
    Usuario(string nombre, string clave, string rol)
    : _nombre(nombre), _clave(clave), _rol(rol)
    {}
    string getNombre() { return _nombre; };
    string getClave() { return _clave; };
    string getRol() { return _rol; };
    void setNombre(string nombre){ _nombre = nombre; }
    void setClave(string clave){ _clave = clave; }
    void setRol(string rol){ _rol = rol; }
private:
    string _nombre;
    string _clave;
    string _rol; // admin o user

};

int main()
{
    Usuario vec[5] = {
            {"Mariano","ma1234","admin"},
            {"Enzo","en1234","admin"},
            {"Nico","ni1234","admin"},
            {"Carlos","ca1234","admin"},
            {"Bautista","ba1234","user"},
    };
    string user;
    string pwd;


    cout << "Bienvenido al sistema Mac Linux" << endl;
    cout << endl;
    cout << "Ingrese su usuario: ";
    cin >> user;
    cout << "Ingrese su password: ";
    cin >> pwd;

    

    return 0;
}
