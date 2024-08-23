#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

// Por cada hamburguesa, la cantidad de unidades vendidas y el total recaudado
void punto_a(float*,int*,float*,int);

// La hamburguesa más vendida del viernes
void punto_b(int*);

//Los días que se vendieron hamburguesas acompañadas de Batatas pero no se vendieron hamburguesas acompañadas de Aros de Cebolla.
struct batataycebolla
{
    bool batata;
    bool cebolla;
};
void punto_c(batataycebolla*);



//Las hamburguesas que lograron un sold out (vendieron todo)
void punto_d(int*);

//Por cada día y acompañamiento, la cantidad de hamburguesas vendidas.
void punto_e(int [][4]);


int main()
{


    // VARIABLES TABLA 1
    float precio[5];// indice: codigo(-1) de hambuesa, valor:precio
    int stock[5]; // indice: codigo(-1) de hamburguesa, stock de hamburguesa al comienzo de la semana

    // VARIABLES TABLA 2
    int idHamburguesa; // 1 a 5
    int weekday; // Entero de 1=Lunes a 7=Domingo Viernes es 5
    int quantity; // cantidad por venta
    char side; // acompañamiento 'B' – con batatas / 'P' – con papas / 'C' – Aros de cebolla / 'X' – sin acompañamiento

    // VARIABLE PUNTO A
    float idHamburguesa_acumulador_de_ventas[5]={}; // indice: codigo -1 hamburguesa, valor: suma de ventas
    int idHamburguesa_acumulador_de_cantidad[5]={};// indice: codigo -1 hamburguesa, valor: cantidad de ventas
    float suma_de_ventas = 0; // suma de ventas totales

    // VARIABLE PUNTO B
    int idHamburguesa_acumulador_de_ventas_viernes[5]={}; // indice: codigo de hamburguesa -1, valor: suma de ventas viernes

    // VARIABLE PUNTO C
    batataycebolla weekday_batataycebolla[7] = {};

    // VARIABLE PUNTO E
    int matriz_weekday_side[7][4]{0};
    int side_pos;

    // CARGA TABLA 1
    cout << "CARGAR DATOS DE HAMBURGUESAS" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> stock[i];
        cin >> precio[i];
    }

        // ELIMINO COUTS PARA CARGA RAPIDA COPIAR-PEGAR EXCEL
    // CARGA TABLA 2
//    cout << "CARGAR VENTAS" << endl;
//    cout << "DIA DE LA SEMANA, CANTIDAD DE HAMB, GUARNICION" <<endl;
    cin >> idHamburguesa;
    cin >> weekday;
    cin >> quantity;
    cin >> side;
    while(idHamburguesa!=0)
    {
        // PROCESO PUNTO A
        idHamburguesa_acumulador_de_ventas[idHamburguesa-1] += quantity * precio[idHamburguesa-1];
        idHamburguesa_acumulador_de_cantidad[idHamburguesa-1] += quantity;
        suma_de_ventas += quantity * precio[idHamburguesa-1];

        // PROCESO PUNTO B
        if(weekday==5)
        {
            idHamburguesa_acumulador_de_ventas_viernes[5]+= quantity;
        }

        // PROCESO PUNTO C
        if(side=='P') weekday_batataycebolla[weekday-1].batata = true;
        else if (side == 'C') weekday_batataycebolla[weekday-1].cebolla = true;

        // PROCESO PUNTO D
        stock[idHamburguesa-1]-=quantity;

        // PROCESO PUNTO E
        side_pos = (side=='B') ?  0:(side=='P') ? 1:(side=='C') ? 2:(side=='X') ? 3:99; // ternario anidado
        matriz_weekday_side[weekday-1][side_pos] += quantity;

        // SIGUE LA CARGA DE DATOS
        cin >> idHamburguesa;
        if (idHamburguesa==0) break;
        cin >> weekday;
        cin >> quantity;
        cin >> side;

    }

    // RESULTADO PUNTO A
    cout << endl << "--------" << endl;
    cout << "PUNTO A" << endl;
    punto_a(precio,idHamburguesa_acumulador_de_cantidad,idHamburguesa_acumulador_de_ventas, suma_de_ventas);

    // RESULTADO PUNTO B
    cout << endl << "--------" << endl;
    cout << "PUNTO B" << endl;
    punto_b(idHamburguesa_acumulador_de_cantidad);

    // RESULTADO PUNTO C
    cout << endl << "--------" << endl;
    cout << "PUNTO C" << endl;
    punto_c(weekday_batataycebolla);

    // RESULTADO PUNTO D
    cout << endl << "--------" << endl;
    cout << "PUNTO D" << endl;
    punto_d(stock);

    // RESULTADO PUNTO E
    cout << endl << "--------" << endl;
    cout << "PUNTO E" << endl;
    punto_e(matriz_weekday_side);

    return 0;
}

void punto_a(float*precio,int*idHamburguesa_acumulador_de_cantidad,float*idHamburguesa_acumulador_de_ventas, int suma_de_ventas)
{
    cout << setw(8) <<"HAMB." << setw(8) << "PRECIO" << setw(8) << "CANT." << setw(10) << "VENTAS"<< endl;
    for (int i = 0; i < 5; ++i) {
        cout << setw(8) << i+1 << setw(2) << "$" << setw(6) << precio[i] << setw(7) << idHamburguesa_acumulador_de_cantidad[i] << setw(2) << " $" << setw(8) << idHamburguesa_acumulador_de_ventas[i] << endl;
    }
    cout << endl;
    cout << "VENTAS TOTALES $" << fixed << setprecision(2) << suma_de_ventas << endl;
}

void punto_b(int*idHamburguesa_acumulador_de_cantidad)
{
    int idHamburguesa_masvendidaviernes_id;
    int idHamburguesa_masvendidaviernes_cantidad;
    for (int i = 0; i < 5; ++i) {
        if(i==0)
        {
            idHamburguesa_masvendidaviernes_cantidad = idHamburguesa_acumulador_de_cantidad[0];
        }
        else if (idHamburguesa_acumulador_de_cantidad[i]>idHamburguesa_masvendidaviernes_cantidad)
        {
            idHamburguesa_masvendidaviernes_cantidad = idHamburguesa_acumulador_de_cantidad[i];
            idHamburguesa_masvendidaviernes_id = i;
        }
    }
    cout << "HAMBURGUESA MAS VENDIDA LOS VIERNES " << idHamburguesa_masvendidaviernes_id + 1 << endl;
    cout << "VENDIO " << idHamburguesa_masvendidaviernes_cantidad << " UNIDADES" << endl;

}

void punto_c(batataycebolla *weekday_batataycebolla)
{
    cout << "DIA QUE SE VENDIERON HAMBURGUESAS+PATATAS PERO QUE NO SE VENDIERON HAMBURGUESAS+AROS " << endl;
    cout << "DIA: ";
    for (int i = 0; i < 7; ++i) {
        if(weekday_batataycebolla[i].batata>0 && weekday_batataycebolla[i].cebolla > 0)
        {
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

void punto_d(int*stock)
{
    cout << "LAS HAMBURGUESAS QUE LOGRARON SOLD OUT SON ";
    for (int i = 0; i < 5; ++i) {
        if(stock[i]==0)
            cout << i+1 << " ";
    }
    cout << endl;
}

void punto_e(int matriz_weekday_side[7][4])
{
    cout << setw(32) << "ACOMPAÑAMIENTO" << endl;
    cout << setw(8) << "DIA" << setw(8) << "B" << setw(8) << "P" << setw(8) << "C" << setw(8) << "X"<< endl;
    for (int i = 0; i < 7; ++i) {
        cout << setw(8) <<i+1;
        for (int j = 0; j < 4; ++j) {
            cout << setw(8) << matriz_weekday_side[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Leyenda: B' – con batatas / 'P' – con papas / 'C' – Aros de cebolla / 'X' – sin acompañamiento" << endl;

}
