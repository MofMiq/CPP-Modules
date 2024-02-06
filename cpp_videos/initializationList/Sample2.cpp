//en este ejemplo estamos viendo como inicializar en el constructor
//segun la sintaxis de "initialization list"
#include "Sample2.hpp"
#include <iostream>

Sample2::Sample2(char _a1, int _a2, float _a3) : a1(_a1), a2(_a2), a3(_a3)
{
    std::cout << "Constructor called" << std::endl;

    std::cout << "This->a1: " << this->a1 << std::endl;
    std::cout << "This->a2: " << this->a2 << std::endl;
    std::cout << "This->a3: " << this->a3 << std::endl;

    return ;
}

Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}