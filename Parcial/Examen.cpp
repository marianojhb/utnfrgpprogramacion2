#include <iostream>
using namespace std;

#include "Examen.h"
#include "ServicioMesa.h"
#include "ArchivoServicioMesa.h"

void Examen::EjemploDeListado(){
   ArchivoServicioMesa archivo("restaurant.dat");
   ServicioMesa registro;

   int i, cantidadRegistros = archivo.CantidadRegistros();
   for(i = 0; i < cantidadRegistros; i++){
      registro = archivo.Leer(i);
      cout << registro.toCSV() << endl;
   }
}

void Examen::Punto1(){
    ArchivoServicioMesa archivo("restaurant.dat");
    int cantidad = archivo.CantidadRegistros();
    ServicioMesa * registros;
    registros = new ServicioMesa[cantidad];
    if(registros== nullptr)
    {cout << "No se puedo asignar memoria" << endl; }

    int contador=0;

    int mozos[20]{0};
    archivo.Leer(cantidad,registros);

    for (int i = 0; i < cantidad; i++) {
        if( registros[i].getPropina()==0 )
        {
            mozos[ registros[i].getIDMozo()-1 ] += 1;
        }
    }

    for (int i = 0; i < 20; ++i) {
        if(mozos[i]>0)
            contador++;
    }

    cout << "cantidad de mozos distintos que no recibieron propina: " << contador << endl;

    delete[] registros;
}

void Examen::Punto2(){
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa * registros;
    int cantidad = archivo.CantidadRegistros();
    int respuesta;
    registros = new ServicioMesa[cantidad];
    int mozos[20]{0};
    archivo.Leer(cantidad,registros);
    for (int i = 0; i < cantidad; ++i) {
        if (registros[i].getPuntajeObtenido() ==  10 ||registros[i].getPuntajeObtenido() ==  1 )
        {

            mozos[registros[i].getIDMozo()-1] += 1;
        }
    }

    for (int i = 0; i < 20; ++i) {
        if( mozos[i]==0 && (i+1==2 || i+1 == 10 || i+1 == 19 || i+1 == 14 || i+1 == 7 ))
            respuesta = i+1;
    }

    cout << "número de mozo que no obtuvo nunca un puntaje de 10 pero tampoco un 1: "<< respuesta << endl;

    delete[] registros;
}

void Examen::Punto3(){
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa * registros;
    int cantidad = archivo.CantidadRegistros();
    int respuesta;
    registros = new ServicioMesa[cantidad];
    archivo.Leer(cantidad,registros);
    int platos2023[70]{0};
    int platos2024[70]{0};

    for (int i = 0; i < cantidad; ++i) {
        if(registros[i].getFecha().getAnio()==2023)
        {
            platos2023[registros[i].getIDPlato()-1] +=1;
        }
        if(registros[i].getFecha().getAnio()==2024)
        {
            platos2024[registros[i].getIDPlato()-1] +=1;
        }
    }

    for (int i = 0; i < 70 ; ++i) {
        if( platos2024[i] > platos2023[i]){
            respuesta = i+1;
        }
    }

    cout << "plato se vendió más veces en el 2024 que en el 2023: "<< respuesta << endl;
}
