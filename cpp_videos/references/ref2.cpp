#include <string>
#include <iostream>

void    byPtr(std::string *str)
{
    *str += " and ponies";
}

void    byConstPtr(std::string const *ptr)
{
    std::cout << *ptr << std::endl;
}

void byRef(std::string &str)
{
    str += " and ponies";
}

int main(void)
{
    std::string str = "I like butterflies";

    //std::cout << str << std::endl;
    byConstPtr(&str);
    byPtr(&str);
    byConstPtr(&str); //cuando llega aqui str ya está modificado

    str = "I like otters";
    //std::cout << str << std::endl;
    byConstPtr(&str);
    byRef(str);
    byConstPtr(&str);  //cuando llega aqui str ya está modificado

    return 0;
}