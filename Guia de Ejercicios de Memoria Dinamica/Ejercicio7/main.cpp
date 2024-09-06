#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void limpiar();
void pausar();
void cargarLibros(string*, int);
void verLibros(string*, int); // Punto 1


int main()
{
//    cout << fixed;
    cout << endl;
    limpiar();
    cout << " --- Sistema Club de Lectura --- " << endl;
    cout << endl;

    int libros_cantidad;
    cout << "Ingrese la cantidad de libros que desea cargar:" << endl;
    cin >> libros_cantidad;

    string * libros;
    libros = new string[libros_cantidad];
    if(libros== nullptr) { cout << "NO SE PUDO ASIGNAR MEMORIA" << endl; exit(0); }

    cargarLibros(libros, libros_cantidad);

    int opcion = 0;
    while(opcion>=0)
    {
        limpiar();
        cout << "Menú de opciones: " << endl;
        cout << "1.- Listado" << endl;
        cout << "2.- Tiempo de lectura" << endl;
        cout << "3.- Ranking" << endl;
        cout << "4.- Salir" << endl;
        cout << endl;
        cout << "INGRESE LA OPCION: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                limpiar();
                verLibros(libros,libros_cantidad);
                pausar();
                break;
            case 2:
                pausar();
                break;
            case 3:
                pausar();
                break;
            case 4:
                return 0;
        }
    }

    limpiar();

    delete[] libros;
    return 0;
}
void cargarLibros(string* libros, int libros_cantidad)
{
    cin.ignore();
    string nombre;
    for (int i = 0; i < libros_cantidad; ++i) {
        cout << "INGRESE EL NOMBRE DEL LIBRO" << endl;
        getline(cin, libros[i]);
    }
}

void verLibros(string* libros, int libros_cantidad)
{
    for (int i = 0; i < libros_cantidad; ++i) {
//        cout << setw(4)  <<  i+1 << setw(40)  <<  "  " << libros[i] << endl;
        cout  <<  i+1 <<  "  " << libros[i] << endl;
    }
}

void limpiar() {
#ifdef _WIN32
    std::system("cls");  // Limpiar la pantalla en Windows
#else
    std::system("clear");  // Limpiar la pantalla en macOS y Linux
#endif
}

// Función para pausar la ejecución
void pausar() {
#ifdef _WIN32
    system("pause");  // Pausar la ejecución en Windows
#else
    cout << endl << "Presiona Enter para continuar..." << endl;
    system("read -r");  // Pausar la ejecución en macOS y Linux
//    cin.get(); // no funciona en mac
#endif
}
