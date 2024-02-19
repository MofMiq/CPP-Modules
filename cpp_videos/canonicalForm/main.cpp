#include "Canonical.hpp"

int main(void)
{
    CanonicalClass obj1;
    CanonicalClass obj2(42);
    CanonicalClass obj3(obj1);

    std::cout << obj1 << std::endl;
    std::cout << obj2 << std::endl;
    std::cout << obj3 << std::endl;

    obj3 = obj2;
    std::cout << obj3 << std::endl;

    return 0;
}