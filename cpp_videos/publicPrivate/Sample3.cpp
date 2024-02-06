#include "Sample3.hpp"
#include <iostream>

Sample3::Sample3(void)
{
    std::cout << "Constructor called" << std::endl;

    this->publicFoo = 0;
    std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
    this->_privateFoo = 0;
    std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

    this->publicBar();
    this->_privateBar();
    return ;
}

Sample3::~Sample3(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample3::publicBar(void) const
{
    std::cout << "Member function publicBar called" << std::endl;
    return ;
}

void Sample3::_privateBar(void) const
{
    std::cout << "Member function _privateBar called" << std::endl;
    return ;
}