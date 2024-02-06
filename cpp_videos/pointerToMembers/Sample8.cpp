#include "Sample8.hpp"
#include <iostream>

Sample8::Sample8(void) : foo(0), i(1)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample8::~Sample8(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample8::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
