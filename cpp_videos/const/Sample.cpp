#include "Sample.hpp"
#include <iostream>

Sample::Sample(float const _f) : pi(_f), qd(42)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample::bar(void) const
{
    std::cout << "This->pi: " << this->pi << std::endl;
    std::cout << "This->qd: " << this->qd << std::endl;

    //this->qd = 0;
    //this->pi = 0;
    return ;
}