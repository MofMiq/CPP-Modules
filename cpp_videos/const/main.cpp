#include "Sample.hpp"
#include <iostream>

int main(void)
{
    Sample obj(3.14);

    obj.bar();
    //obj.pi = 0; //no se puede modificar su valor despues de inicializarla porque es const
    obj.qd = 89;
    std::cout << "obj.qd: " << obj.qd << std::endl;
    return 0;
}