#include <iostream>
#include "Menu.h"

int showMenuPrincipal()
{
    int opcion;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Cargar registro" << std::endl;
        std::cout << "2. Mostrar registros" << std::endl;
        std::cout << "0. Sale del programa" << std::endl;
        std::cout << "Elija la opcion: ";
        std::cin >> opcion;
        switch (opcion) {
            case 0:
                return 0;
            case 1:
                submenu1();
                break;
            case 2:
                submenu2();
                break;
            default:
                return 0;
        }
    } while(true);
}

void submenu1()
{
    int opcion;
    do
    {
        std::cout << "Submenu 1:" << std::endl;
        std::cout << "1. Opcion A" << std::endl;
        std::cout << "2. Opcion B" << std::endl;
        std::cout << "3. Opcion C" << std::endl;
        std::cout << "4. Retorna al menu anterior" << std::endl;
        std::cout << "0. Sale del programa" << std::endl;
        std::cout << "Elija la opcion: ";
        std::cin >> opcion;
        switch (opcion) {
            case 0:
                exit(0);
            case 1:
                std::cout << "Ejecuta A" << std::endl;
                break;
            case 2:
                std::cout << "Ejecuta B" << std::endl;
                break;
            case 3:
                std::cout << "Ejecuta C" << std::endl;
                break;
            case 4:
                return;
            default:
                return;
        }
    }
    while(true);
}

void submenu2()
{
    int opcion;
    do
    {
        std::cout << "Submenu 2:" << std::endl;
        std::cout << "1. Opcion D" << std::endl;
        std::cout << "2. Opcion E" << std::endl;
        std::cout << "3. Opcion F" << std::endl;
        std::cout << "4. Retorna al menu anterior" << std::endl;
        std::cout << "0. Sale del programa" << std::endl;
        std::cout << "Elija la opcion: ";
        std::cin >> opcion;
        switch (opcion) {
            case 0:
                exit(0);
            case 1:
                std::cout << "Ejecuta D" << std::endl;
                break;
            case 2:
                std::cout << "Ejecuta F" << std::endl;
                break;
            case 3:
                std::cout << "Ejecuta G" << std::endl;
                break;
            case 4:
                return;
            default:
                return;
        }
    }
    while(true);
}
