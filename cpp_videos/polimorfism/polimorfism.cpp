#include "polimorfism.hpp"
#include <iostream>

Polimorfism::Polimorfism()
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Polimorfism::~Polimorfism()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void Polimorfism::bar(char const c) const
{
    std::cout << "Member function bar called with char overload: " << c << std::endl;
    return;
}

void Polimorfism::bar(int const i) const
{
    std::cout << "Member function bar called with int overload: " << i << std::endl;
    return;
}

void Polimorfism::bar(float const z) const
{
    std::cout << "Member function bar called with float overload: " << z << std::endl;
    return;
}

void Polimorfism::bar(Polimorfism const &i) const
{
    (void)i;
    std::cout << "Member function bar called with class overload" << std::endl;
    return;
}
