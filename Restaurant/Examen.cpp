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
    ServicioMesa registro;
    int cantidadServiciosMayoresAlPromedio = 0;
    float acumulador = 0;
    float promedio;

    int i;
    int cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);
        acumulador += registro.getPuntajeObtenido(); // sumo los puntajes
    }
    promedio = (float)acumulador / cantidadRegistros;

    for(i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);
        if(registro.getPuntajeObtenido() > promedio)
        {
            cantidadServiciosMayoresAlPromedio++;
        }
    }
    cout << "Punto1: La cantidad de servicios que fueron valorados con un puntaje mayor al puntaje promedio: " << cantidadServiciosMayoresAlPromedio << endl;

}

void Examen::Punto2(){
    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;
    int maxPlato_numero;
    float maxPlato_dinero;
    float recaudacionPorPlato[70]{};
    int i;
    int cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);
        recaudacionPorPlato[registro.getIDPlato()-1] += registro.getImporte();
    }


    for(int i=0; i<70; i++)
    {
        if(i==0)
        {
            maxPlato_dinero = recaudacionPorPlato[0];
            maxPlato_numero = 1;
        } else
        {
            if(recaudacionPorPlato[i] > maxPlato_dinero)
            {
                maxPlato_dinero = recaudacionPorPlato[i];
                maxPlato_numero = i+1;
            }
        }
    }
    cout << "Punto2: Número de plato recaudó mayor cantidad de dinero: " << maxPlato_numero << " con $" << maxPlato_dinero << endl;

}

void Examen::Punto3(){
    ServicioMesa registro;
    ArchivoServicioMesa archivo("restaurant.dat");
    int acumuladorPropinasPorMozo2024[20]{};
    int maxMozo_numero = 1;
    int maxPropina_cantidad = 0;
    Fecha fecha;
    int anio;
    int i;
    int cantidadRegistros = archivo.CantidadRegistros();
    for(i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);
        fecha = registro.getFecha();
        anio = fecha.getAnio();
        if(anio == 2024 && registro.getPropina() > 0)
            acumuladorPropinasPorMozo2024[registro.getIDMozo()-1] += 1;
    }

    for(int i=0; i<20; i++)
    {
        if(acumuladorPropinasPorMozo2024[i] > maxPropina_cantidad)
        {
            maxPropina_cantidad = acumuladorPropinasPorMozo2024[i];
            maxMozo_numero = i+1;
        }
    }
    cout << "Punto3: Número de mozo recibió mayor cantidad total de propinas en el 2024: " << maxMozo_numero << " con " << maxPropina_cantidad << " propinas" << endl;

}
