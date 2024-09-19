#include <iostream>
using namespace std;

/*
Funciones amigas
Normalmente, los miembros privados de una clase no pueden ser accedidos desde fuera de esa clase.
Sin embargo, al declarar una funci�n no miembro como amiga de una clase nos permite acceder a los miembros privados de esa clase. Esto se logra al incluir una declaraci�n de esta funci�n externa dentro de la clase, y precedi�ndola con la palabra clave friend (amigo en ingl�s).
En el ejemplo a continuaci�n, someFunc(), la cual no es una funci�n miembro de la clase, es una amiga de MyClass y puede acceder sus miembros privados.

F�jate que cuando pasamos un objeto a la funci�n, tenemos que pasarlo por referencia, utilizando el operador &.

La funci�n someFunc() est� definida como una funci�n regular fuera de la clase. Toma un objeto del tipo MyClass como su par�metro, y tiene la capacidad de acceder a los miembros de datos privados de ese objeto.

someFunc() tiene la habilidad de modificar el miembro privado del objeto e imprimir su valor.

Casos t�picos donde se usan funciones amigas son operaciones que son conducidas entre dos clases diferentes accediendo miembros privados de ambas.

Puedes declarar una funci�n amiga a trav�s de cualquier n�mero de clases.
De forma similar a funciones amigas, puedes definir una clase amiga, la cual tenga acceso a los miembros privados de otra clase.

*/

class MyClass {
    public:
        MyClass() {
            regVar = 0;
        }
    private:
        int regVar;

    friend void someFunc(MyClass &obj);
};

// en otra parte del proyecto se implementa la funcion amiga:
void someFunc(MyClass &obj)
{
    obj.regVar = 42;
    cout << obj.regVar;
}

int main()
{
    MyClass obj;
    someFunc(obj);
}


