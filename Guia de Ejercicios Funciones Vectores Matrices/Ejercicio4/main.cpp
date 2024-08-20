#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void punto_a(int *, string *);
void punto_b(int*, int*, string*);
void punto_c(int matrizAnimalVivienda[][5], string*, string*);

int main()
{
    // VARIABLES GENERALES
    int mes, idAnimal, edadAdoptante, idVivienda;
    int meses[12]={};
    string categoriaAnimal[6]={
            "Perro",
            "Gato",
            "Conejo",
            "Huron",
            "Caballo",
            "Oveja"
    };
    string categoriaVivienda[5]={
            "Casa",
            "Depto",
            "Casaq.",
            "Finca",
            "Duplex"
    };

    // VARIABLES PUNTO A
    int categoriaAnimal_contador[6]={}; // Indice: categoria de animales, Valor: cantidad de animales

    // VARIABLES PUNTO B
    int categoriaAnimal_edades[6]={}; // Indice: categoria de animales, Valor: sumatoria de edades

    // VARIABLES PUNTO C
    int matrizAnimalVivienda[6][5]={};

    // CARGA DE DATOS
    cout << "--- CARGA DE DATOS ---" << endl;
    cout << "MES ";
    cin >> mes;
    cout << "ID TIPO ANIMAL ";
    cin >> idAnimal;
    cout << "EDAD ADOPTANTE ";
    cin >> edadAdoptante;
    cout << "ID TIPO VIVIENDA ";
    cin >> idVivienda;
    while(mes!=0)
    {
        // PROCESO PUNTO A
        categoriaAnimal_contador[idAnimal-10] += 1;

        // PROCESO PUNTO B
        categoriaAnimal_edades[idAnimal-10] += edadAdoptante;

        // PROCESO PUNTO C
        matrizAnimalVivienda[idAnimal-10][idVivienda-1] += 1;

        cout << "---" << endl;
        cout << "MES ";
        cin >> mes;
        if (mes == 0) break;
        cout << "ID TIPO ANIMAL ";
        cin >> idAnimal;
        cout << "EDAD ADOPTANTE ";
        cin >> edadAdoptante;
        cout << "ID TIPO VIVIENDA ";
        cin >> idVivienda;
    }

    // PROCESO Y RESPUESTA PUNTO A
    cout << endl <<"--- PUNTO A ---" <<endl;
    punto_a(categoriaAnimal_contador, categoriaAnimal);

    // PROCESO Y RESPUESTA PUNTO B
    cout << endl <<"--- PUNTO B ---" <<endl;
    punto_b(categoriaAnimal_edades, categoriaAnimal_contador, categoriaAnimal);

    // PROCESO Y RESPUESTA PUNTO C
    cout << endl <<"--- PUNTO C ---" <<endl;
    punto_c(matrizAnimalVivienda, categoriaAnimal, categoriaVivienda);

    return 0;
}

void punto_a(int *categoriaAnimal_contador, string *categoriaAnimal)
{
    int categoriaAnimal_maximo_pos;
    int categoriaAnimal_maximo_cantidad;
    int i;
    for (i = 0; i < 6; ++i) {
        if(i==0)
        {
            categoriaAnimal_maximo_pos = 0;
            categoriaAnimal_maximo_cantidad = categoriaAnimal_contador[0];
        }
        else if (categoriaAnimal_contador[i]>categoriaAnimal_maximo_cantidad)
        {
            categoriaAnimal_maximo_cantidad = categoriaAnimal_contador[i];
            categoriaAnimal_maximo_pos = i;
        }
    }
    cout << "CATEGORIA CON MAS ANIMALES:" << endl;
    cout << categoriaAnimal[categoriaAnimal_maximo_pos] << " CON " << categoriaAnimal_maximo_cantidad << " ANIMALES" << endl;
}

void punto_b(int*categoriaAnimal_edades, int*categoriaAnimal_contador, string*categoriaAnimal)
{
    cout << "EDAD PROMEDIO POR CATEGORIA DE ANIMAL" << endl;
    cout << endl;
    cout << "CATEG.\tEDAD PROM."<<endl;
    for (int i = 0; i < 6; ++i) {
        cout << categoriaAnimal[i] << "\t" << (float)categoriaAnimal_edades[i]/categoriaAnimal_contador[i] << endl;
    }
}

void punto_c(int matrizAnimalVivienda[][5], string *categoriaAnimal, string *categoriaVivienda)
{
    cout << "MATRIZ" << endl;
    cout << "\t\t\t\tTIPO DE VIVIENDA" << endl;
    cout << setw(8) << "ANIMAL\t\t";
    for(int label=0; label<5;label++){cout << setw(8) << categoriaVivienda[label] << "\t";}
    cout << endl;
    for (int i = 0; i < 6; ++i) {
        cout << categoriaAnimal[i] << "\t";
        for (int j = 0; j < 5; ++j) {
            cout<< setw(8) << matrizAnimalVivienda[i][j] << "\t";
        }
        cout << endl;
    }
}