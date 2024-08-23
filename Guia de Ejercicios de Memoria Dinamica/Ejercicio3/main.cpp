#include <iostream>
#include <string>

using namespace std;

int main() {
    int valor;
    int* vecPos;
    int* vecNeg;

    int tam = 10;
    vecPos = new int[tam]();
    vecNeg = new int[tam]();

    if (vecPos == NULL || vecNeg == NULL) {
        cout << "ERROR DE ASIGNACION DE MEMORIA";
        exit(0);
    }

    int contpos = 0;
    int contneg = 0;

    cout << "INGRESE NUM " << endl;
    for (int i = 0; i < tam; ++i)
    {
        cin >> valor;
        if (valor > 0)
        {
            vecPos[contpos] = valor;
            contpos++;

        }
        else if (valor < 0) {
            vecNeg[contneg] = valor;
            contneg++;
        } else
        {
            break;
        }
    }

    cout << "POS" << endl;
    for (int i = 0; i < contpos; i++) {
        cout << vecPos[i] << "\t"<< endl;
    }

    cout << "POS"<< endl;
    for (int i = 0; i < contneg; i++) {
      cout << vecNeg[i] << "\t"<< endl;
    }

    delete[] vecPos;
    delete[] vecNeg;

    return 0;
}