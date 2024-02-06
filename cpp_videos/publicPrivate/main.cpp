#include "Sample3.hpp"
#include <iostream>

int main(void)
{
    Sample3 obj;

    obj.publicFoo = 42;
    std::cout << "obj.publicFoo: " << obj.publicFoo << std::endl;

    //obj._privateFoo = 42;
    //std::cout << "obj._privateFoo: " << obj._privateFoo << std::endl;

    obj.publicBar();
    //obj._privateBar();
    return 0;
}