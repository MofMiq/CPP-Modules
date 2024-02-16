#include "OCF.hpp"

MyClass::MyClass(void) : _foo(0)
{
    std::cout << "Constructor por defecto called" << std::endl;
    return;
}

MyClass::MyClass(int const n) : _foo(n)
{
    std::cout << "Constructor parametrizado called" << std::endl;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

MyClass::MyClass(const MyClass &other)
{
    std::cout << "Constructor de copia called" << std::endl;
    *this = other; //Literalmente que coño!!!
    return;
}

MyClass& MyClass::operator=(const MyClass& other)
{
    std::cout << "Operador de asignacion de copia called" << std::endl;
    if (this != &other)
    {
        this->_foo = other.getFoo(); ///WTF?!
    }
    return *this;
}

int MyClass::getFoo(void) const
{
    return this->_foo;
}

std::ostream &operator<<(std::ostream &p, const MyClass &i)
{
    p << "The value of _foo is: " << i.getFoo();
    return p;
}
