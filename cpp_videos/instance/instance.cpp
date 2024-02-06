#include "Sample.hpp"
#include <iostream>

int main(void)
{
    Sample instance;

    instance.foo = 21;
    std::cout << "instance.foo: " << instance.foo << std::endl;

    return 0;
}