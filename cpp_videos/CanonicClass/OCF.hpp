#ifndef H_OFC_H
# define H_OFC_H

#include <iostream>

class MyClass
{
    public:
        MyClass(void);          //Constructor por defecto
        MyClass(int const n);   //Constructor parametrizado
        ~MyClass(void);         //Destructor
        MyClass(const MyClass& other);      //Constructor de copia
        MyClass& operator=(const MyClass& other); //Operador de asiganacion de copia

        int getFoo(void) const;
    private:
        int _foo;
};

std::ostream   &operator<<(std::ostream &p, const MyClass &i);

#endif