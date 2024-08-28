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

int getUserIndex(Usuario*, int, string, string);

int main()
{
    const int tam = 5;
    Usuario usuarios[tam] = {
            {"Mariano","ma1234","admin"},
            {"Enzo","en1234","admin"},
            {"Nico","ni1234","admin"},
            {"Carlos","ca1234","admin"},
            {"Bautista","ba1234","user"},
    };
    string user;
    string pwd;

    int intentos = 1;

    system("clear");
    cout << "Bienvenido al sistema Mac Linux" << endl;
    cout << endl;

    int userIndex = -1;

    while(intentos <= 3 && userIndex == -1)
    {

        cout << "Ingrese su usuario: ";
        cin >> user;
        cout << "Ingrese su password: ";
        cin >> pwd;

        userIndex = getUserIndex(usuarios, tam, user, pwd);

        if ( userIndex != -1 )
        {
            cout << "Login correcto " << endl << "Rol: " << usuarios[userIndex].getRol() << endl;
        }
        else
        {
            cout << "Usuario o contrasena no encontrado" << endl;
            intentos++;
            system("clear");
           cout << "Bienvenido al sistema Mac Linux" << endl;
            cout << endl;
            if (intentos>1 && intentos<=3)
                cout << "Intento " << intentos << endl;
                 cout << endl;
        }
    }
    if(userIndex == -1)
    {
        cout << "No hay mas intentos" << endl;
        cout << endl;
        cout << "Saliendo del sistema" << endl;
        cout << endl;
    }

    return 0;
}


int getUserIndex(Usuario* usuarios, int tam, string user, string pwd)
{
    int i;
    int intentos = 1;
        for (i = 0; i < tam; ++i) {
            if (usuarios[i].getNombre() == user && usuarios[i].getClave() == pwd)
            {
                return i;
            }
        }
    return -1;
}