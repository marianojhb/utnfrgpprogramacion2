#include <iostream>
using namespace std;

/*
Funciones amigas
Normalmente, los miembros privados de una clase no pueden ser accedidos desde fuera de esa clase.
Sin embargo, al declarar una función no miembro como amiga de una clase nos permite acceder a los miembros privados de esa clase. Esto se logra al incluir una declaración de esta función externa dentro de la clase, y precediéndola con la palabra clave friend (amigo en inglés).
En el ejemplo a continuación, someFunc(), la cual no es una función miembro de la clase, es una amiga de MyClass y puede acceder sus miembros privados.

Fíjate que cuando pasamos un objeto a la función, tenemos que pasarlo por referencia, utilizando el operador &.

La función someFunc() está definida como una función regular fuera de la clase. Toma un objeto del tipo MyClass como su parámetro, y tiene la capacidad de acceder a los miembros de datos privados de ese objeto.

someFunc() tiene la habilidad de modificar el miembro privado del objeto e imprimir su valor.

Casos típicos donde se usan funciones amigas son operaciones que son conducidas entre dos clases diferentes accediendo miembros privados de ambas.

Puedes declarar una función amiga a través de cualquier número de clases.
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


