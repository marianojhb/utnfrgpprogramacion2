#include <iostream>
using namespace std;

int quitarRepetidos(int*,int*);

int main()
{
    int vectorUno[10]={1, 2, 1, 2, 5, 5, 4, 4, 3, 3 };
    int vectorDos[10]={};
    int elementos = quitarRepetidos(vectorUno, vectorDos);
    cout << "Hay " << elementos << " repetidos" << endl;
    cout << "Registros unicos: " ;
    for (int i = 0; i < elementos; i++) {
        cout << vectorDos[i] << " ";
    }

    return 0;
}

int quitarRepetidos(int *vectorUno, int *vectorDos)
{
    int repetidos = 0;
    bool repite;
    int unicos=0;
    for (int i = 0; i < 10; i++) {
        repite = false;
        for (int j = 1+i; j < 10; j++) {
//            cout << " comparo " << vectorUno[i] << " con " << vectorUno[j] << endl;
            if(vectorUno[i]==vectorUno[j])
            {
                repetidos++;
                repite=true;
                break;
            }
        }
        if(repite==false)
        {
            vectorDos[unicos]=vectorUno[i];
            unicos++;
        }

    }
    return repetidos;
}