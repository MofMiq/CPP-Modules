#include "Sample1.hpp"
#include <iostream>

Sample1::Sample1(char _a1, int _a2, float _a3)
{
    std::cout << "Constructor called" << std::endl;

    this->a1 = _a1;
    std::cout << "This->a1: " << this->a1 << std::endl;

    this->a2 = _a2;
    std::cout << "This->a2: " << this->a2 << std::endl;

    this->a3 = _a3;
    std::cout << "This->a3: " << this->a3 << std::endl;

    return ;
}

Sample1::~Sample1(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}