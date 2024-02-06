#include "Sample4.hpp"
#include <iostream>

Sample4::Sample4(void)
{
    std::cout << "Constructor called" << std::endl;
    this->Foo = 42;
    return ;
}

Sample4::~Sample4(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample4::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
