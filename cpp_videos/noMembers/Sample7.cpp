#include "Sample7.hpp"
#include <iostream>

Sample7::Sample7(void)
{
    std::cout << "Constructor called" << std::endl;
    Sample7::_nbObj += 1;
    return ;
}

Sample7::~Sample7(void)
{
    std::cout << "Destructor called" << std::endl;
    Sample7::_nbObj -= 1;
    return ;
}

int Sample7::getNbObj(void)
{
    return Sample7::_nbObj;
}

int Sample7::_nbObj = 0;
