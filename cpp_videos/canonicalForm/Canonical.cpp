#include "Canonical.hpp"

CanonicalClass::CanonicalClass(void) : _foo(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

CanonicalClass::CanonicalClass(int const n) : _foo(n)
{
    std::cout << "Param constructor called" << std::endl;
    return;
}

CanonicalClass::CanonicalClass(CanonicalClass const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

CanonicalClass::~CanonicalClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

CanonicalClass &CanonicalClass::operator=(CanonicalClass const &rhs)
{
    std::cout << "Assignament operator called" << std::endl;
    if (this != &rhs)
        this->_foo = rhs.getFoo();
    return *this;
}

int CanonicalClass::getFoo(void) const
{
    return this->_foo;
}

std::ostream &operator<<(std::ostream &p, CanonicalClass const &m)
{
    p << "The value of _foo is: " << m.getFoo();
    return p;
}
