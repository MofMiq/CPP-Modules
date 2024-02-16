#include "OCF.hpp"
#include <iostream>

int main(void)
{
    MyClass i1;         //Constructor por defecto
    MyClass i2(100);    //Constructor parametrizado
    MyClass i3(i1);     //Constructor de copia

    std::cout << i1 << std::endl;
    std::cout << i2 << std::endl;
    std::cout << i3 << std::endl;

    i3 = i2 = i1 = i2;
    //i3 = i3;

    std::cout << i3 << i2 << i1 << std::endl;

    return 0;
}