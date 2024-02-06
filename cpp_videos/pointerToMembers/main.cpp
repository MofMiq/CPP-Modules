/* La diferencia entre una instancia y un puntero a una instancia es que la instancia es un objeto en real,
mientras que el puntero es simplemente una dereccion de memoria que apunta a un objeto.
Podemos usar un puntero para acceder y modificar el objeto al que apunta. */
#include "Sample8.hpp"
#include <iostream>

int main(void)
{
    Sample8 instance;                   //crea una instancia de la clase Sample8
    Sample8* instancePtr = &instance;   //crea un puntero a una instancia de la clase Sample8 y la apunta a la anterior instancia

    int Sample8::*p = NULL;             // declara un puntero a un miembro de la clase Sample8 que es un int, que puede apuntar a cualquier miembro de Sampl8 que sea de tipo int
    void (Sample8::*f)(void) const;     //declara un puntero a una funcion miembro de la clase Sample8 que no toma argumentos, sea tipo void y sea constante

    p = &Sample8::foo;                  //apuntamos el puntero 'p' a la variable miembro 'foo' de la clase Sample8

    std::cout << "Value of member foo: " << instance.foo << std::endl; //imprime el valor inicial de foo = 0
    std::cout << "Value of member i: " << instance.i << std::endl;
    instance.*p = 21;                   //usa el puntero 'p' a miembro para cambiar el valor de foo
    p = &Sample8::i;
    instance.*p = 2;
    std::cout << "Value of member i: " << instance.i << std::endl;
    std::cout << "Value of member foo: " << instance.i << std::endl;  //imprime el valor cambiado de foo = 21
    instancePtr->*p = 42;               //usa el puntero a la instancia 'instancePtr' para cambiar el valor de foo
    std::cout << "Value of member i: " << instance.i << std::endl;  //imprime el valor cambiado de foo = 42

    f = &Sample8::bar;                  //hace que el puntero a funcion miembro 'f' apunte a la funcion bar de Sample8
    (instance.*f)();                    //usa el puntero 'f' para llamar a la funcion bar desde la instancia
    (instancePtr->*f)();                //usa el puntero 'f' para llamar a la funcion bar desde el puntero a la instancia

    return 0;
}