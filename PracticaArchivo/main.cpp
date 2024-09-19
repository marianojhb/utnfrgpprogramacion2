#include <iostream>

using namespace std;

class Auto
{
public:
    Auto(int ruedas, int puertas, float velocidad)
    {
        _ruedas = ruedas;
        _puertas = puertas;
        _velocidad = velocidad;
    }
private:
    int _ruedas;
    int _puertas;
    float _velocidad;

};


int main()
{
    Auto auto1 (4,4,172.3);

    FILE * pArchivo;

    pArchivo = fopen("archivo_autos.dat","wb");
    if (pArchivo == NULL)
    {
        puts("No se puedo abrir el archivo");
        exit(1);
    }

    fwrite(&auto1,sizeof(Auto),1,pArchivo);



    fclose(pArchivo);
    return 0;
}
