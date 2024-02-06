#include "Sample6.hpp"
#include <iostream>

int main(void)
{
    Sample6 obj1(42);
    Sample6 obj2(42);

/*     obj.setFoo(5);
    std::cout << "Seteando el valor de _foo: " << obj.getFoo() << std::endl;
    obj.setFoo(-1);
    std::cout << "Seteando el valor de _foo: " << obj.getFoo() << std::endl;
    obj.setFoo(42);
    std::cout << "Seteando el valor de _foo: " << obj.getFoo() << std::endl; */

    if (&obj1 == &obj1)
        std::cout << "obj1 and obj1 are physically equal" << std::endl;
    else
        std::cout << "obj1 and obj1 are not physically equal" << std::endl;

    if (&obj1 == &obj2)
        std::cout << "obj1 and obj2 are physically equal" << std::endl;
    else
        std::cout << "obj1 and obj2 are not physically equal" << std::endl;
   
    if (obj1.compare(&obj1) == 0)
        std::cout << "obj1 and obj1 are structurally equal" << std::endl;
    else
        std::cout << "obj1 and obj1 are not structurally equal" << std::endl;
  
    if (obj1.compare(&obj2) == 0)
        std::cout << "obj1 and obj2 are structurally equal" << std::endl;
    else
        std::cout << "obj1 and obj2 are not structurally equal" << std::endl;
    return 0;
}