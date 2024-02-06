#include "Sample5.hpp"
#include <iostream>

Sample5::Sample5(void)
{
    std::cout << "Constructor called" << std::endl;
    this->Foo = 42;
    return ;
}

Sample5::~Sample5(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample5::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
