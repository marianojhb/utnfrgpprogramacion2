#include <iostream>
#include <string>
using namespace std;

void punto_a(float *, string*);
void punto_b(string*, float*);
void punto_c(string*, float*);
void punto_d(int *);

int main()
{
    string categorias[10] = {"Servicios",
                             "Alimentac.",
                             "Limpieza",
                             "Transporte",
                             "Educacion",
                             "Salud   ",
                             "Ocio    ",
                             "Impuestos",
                             "Vestimenta",
                             "Inversiones"};


    int dia, idGasto;
    float importe;

    cout << "***INGRESE EL GASTO ***" << endl;
    cout << "DIA ";
    cin >> dia;
    cout << "CATEGORIA ID ";
    cin >> idGasto;
    cout << "IMPORTE ";
    cin >> importe;

    // VARIABLES PUNTOS A, B, C
    float categoria_acumulador[10]={0}; // Indice es Categoria. Valor es la suma de los gastos

    // VARIABLES PUNTO D
    int dias_cantidadGastosDiarios[31]={}; // Indice son dias del mes. Valor cantidad de gastos


    while(dia!=0)
    {
        categoria_acumulador[idGasto-1] += importe; // Puntos A,B,C
        dias_cantidadGastosDiarios[dia-1] += 1; // Punto D
        cout << "***INGRESE EL GASTO ***" << endl;
        cout << "DIA ";
        cin >> dia;
        if (dia == 0) break;
        cout << "CATEGORIA ID ";
        cin >> idGasto;
        cout << "IMPORTE ";
        cin >> importe;
    }

    // PROCESO PUNTO A
    cout<<endl<<"--- PUNTO A---" << endl;
    punto_a(categoria_acumulador, categorias);

    // PROCESO PUNTO B
    cout<<endl<<"--- PUNTO B---" << endl;
    punto_b(categorias, categoria_acumulador);

    // PROCESO PUNTO C
    cout<<endl<<"--- PUNTO C---" << endl;
    punto_c(categorias, categoria_acumulador);

    // PROCESO PUNTO D
    cout<<endl<<"--- PUNTO D---" << endl;
    punto_d(dias_cantidadGastosDiarios);

    return 0;
}

void punto_a(float *categoria_acumulador, string *categorias)
{
    int i;
    int categoriaMayor_id;
    int categoriaMayor_importe;
    for ( i = 0; i < 10; i++) {
        if (i==0)
        {
            categoriaMayor_id = i+1;
            categoriaMayor_importe = categoria_acumulador[i];
        }
        else
        {
            if(categoria_acumulador[i] > categoriaMayor_importe)
            {
                categoriaMayor_importe = categoria_acumulador[i];
                categoriaMayor_id = i+1;
            }
        }
    }
    cout << "CATEGORIA MAYOR " << categorias[categoriaMayor_id-1] << " - IMPORTE $ " << categoriaMayor_importe << endl;

}

void punto_b(string*categorias, float*categoria_acumulador)
{
    cout << "CATEG." << "\t\t\tGASTOS" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << categorias[i] << "\t\t\t$ " << categoria_acumulador[i] << endl;
    }
}

void punto_c(string*categorias, float*categoria_acumulador)
{
    int categoriasSinMovimientoAcumulador = 0;
    for (int i = 0; i < 10; ++i) {
        if(categoria_acumulador[i]==0)
        categoriasSinMovimientoAcumulador++;
    }
    cout << "CANTIDAD DE CATEGORIAS SIN MOVIMIENTO " << categoriasSinMovimientoAcumulador << endl;
}

void punto_d(int dias_cantidadGastosDiarios[31])
{
    cout << "Cantidad de gastos por dia" << endl;
    for (int i = 0; i < 31; ++i) {
        if(dias_cantidadGastosDiarios[i]>0)
            cout << "DIA "<< i+1 << " = " << dias_cantidadGastosDiarios[i] << " GASTOS" << endl;
    }
}

