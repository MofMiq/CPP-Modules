#include "Sample6.hpp"
#include <iostream>

Sample6::Sample6(int v) : _foo(v)
{
    std::cout << "Constructor called" << std::endl;
    
    //this->setFoo(0);
    //std::cout << "initializated with this->setFoo(): " << this->getFoo() << " showing with this->getFoo()" << std::endl;

    return ;
}

Sample6::~Sample6(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Sample6::getFoo(void) const
{
    return this->_foo;
}

void Sample6::setFoo(int v)
{
    if (v >= 0)
        this->_foo = v;
}

int Sample6::compare(Sample6* other) const
{
    if (this->_foo < other->getFoo())
    {
        //std::cout << "This->_foo is smaller" << std::endl;
        return -1;
    }
    else if (this->_foo > other->getFoo())
    {
        //std::cout << "This->_foo is greatest" << std::endl;
        return 1;
    }
    //std::cout << "Both variables are equal" << std::endl;
    return 0;
}
