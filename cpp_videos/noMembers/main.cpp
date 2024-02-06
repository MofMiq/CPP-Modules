#include "Sample7.hpp"
#include <iostream>

void f0(void)
{
    Sample7 instance;
    std::cout << "Number of instances/objets: " << Sample7::getNbObj() << std::endl;

    return ;
}

void f1(void)
{
    Sample7 instance;
    std::cout << "Number of instances/objets: " << Sample7::getNbObj() << std::endl;
    f0();
    return ;
}

int main(void)
{
    std::cout << "Number of instances/objets: " << Sample7::getNbObj() << std::endl;
    f1();
    std::cout << "Number of instances/objets: " << Sample7::getNbObj() << std::endl;

    return 0;
}