#include <iostream>
#include "Inmueble.h"
#include "Casa.h"
#include "Casaquinta.h"
#include "Departamento.h"
#include "Local.h"
#include "Terreno.h"
#include "Menu.h"

void menuPrincipal()
{
    int opcion;
    std::vector<Inmueble*> propiedadesVenta;
    std::vector<Inmueble*> propiedadesAlquiler;

    do
    {
        puts("---------------------------------");
        puts("      Menu de opciones           ");
        puts("---------------------------------");
        puts("1. Cargar inmuebles");
        puts("2. Ver inmuebles en venta");
        puts("3. Ver inmuebles en alquiler");
        puts("0. Salir");
        puts("---------------------------------");
        std::cout << "Ingrese la opcion: ";
        std::cin >> opcion;
        std::cin.ignore();
        switch(opcion)
        {
            case 1:
                submenuCargar(propiedadesVenta, propiedadesAlquiler);
                break;
            case 2:
            {
                std::cout << propiedadesVenta.at(0)->getIdInmueble() << std::endl;
            }
                break;
            case 3:
            {
                for (const auto& propiedadadAlquiler : propiedadesAlquiler)
                {
                    propiedadadAlquiler->imprimir();
                }
            }
            case 0:
                return;
        }
    }
    while(true);
}


void submenuCargar(std::vector<Inmueble*> &propiedadesVenta, std::vector<Inmueble*> &propiedadesAlquiler)
//void submenuCargar()
{
    int opcion;


    do
    {
        puts("---------------------------------");
        puts("        Nuevo Inmueble           ");
        puts("---------------------------------");
        puts("1. Casa");
        puts("2. Casaquinta");
        puts("3. Departamento");
        puts("4. Local");
        puts("5. Terreno");
        puts("0. Volver");
        puts("---------------------------------");
        std::cout << "Ingrese la opcion: ";
        std::cin >> opcion;
        std::cin.ignore();
        switch(opcion)
        {
            case 1:
            {
                encabezado("Casa");
                Casa objCasa;
                Inmueble * inmueble = &objCasa;
                inmueble->cargar();
                inmueble->imprimir();
                if(inmueble->getPrecioVta()>0)
                    propiedadesVenta.push_back(inmueble);
                if(objCasa.getPrecioAlq()>0)
                    propiedadesAlquiler.push_back(inmueble);
                break;
            }
            case 2:
            {
                encabezado("Casaquinta");
                Casaquinta objCasaquinta;
                Inmueble * i = &objCasaquinta;
                i->cargar();
                i->imprimir();
//                if(objCasaquinta.getPrecioVta()>0)
//                    propiedadesVenta->push_back(objCasaquinta);
//                if(objCasaquinta.getPrecioAlq()>0)
//                    propiedadesAlquiler->push_back(objCasaquinta);
                break;
            }
            case 3:
            {
                encabezado("Departamento");
                Departamento objDepartamento;
                Inmueble * i = &objDepartamento;
                i->cargar();
                i->imprimir();
                if(objDepartamento.getPrecioVta()>0)
//                    propiedadesVenta->push_back(objDepartamento);
//                if(objDepartamento.getPrecioAlq()>0)
//                    propiedadesAlquiler->push_back(objDepartamento);
                break;
            }
            case 4:
            {
                encabezado("Local");
                Local objLocal;
                Inmueble * i = &objLocal;
                i->cargar();
                i->imprimir();
//                if(objLocal.getPrecioVta()>0)
//                    propiedadesVenta->push_back(objLocal);
//                if(objLocal.getPrecioAlq()>0)
//                    propiedadesAlquiler->push_back(objLocal);
                break;
            }
            case 5:
            {
                encabezado("Terreno");
                Terreno objTerreno;
                Inmueble * i = &objTerreno;
                i->cargar();
                i->imprimir();
//                if(objTerreno.getPrecioVta()>0)
//                    propiedadesVenta->push_back(objTerreno);
//                if(objTerreno.getPrecioAlq()>0)
//                    propiedadesAlquiler->push_back(objTerreno);
                break;
            }
            case 0:
                return;
        }
    }
    while(true);
}

void encabezado(std::string label)
{
    system("clear");
    puts("---------------------------------");
    std::cout << " Nuevo " << label << std::endl;
    puts("---------------------------------");
}