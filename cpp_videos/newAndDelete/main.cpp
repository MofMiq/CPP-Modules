#include "Student.hpp"
#include <iostream>

int main(void)
{
    //usamos el constructor parametrizado
    Student bob = Student("lalal");
    Student *jim = new Student("lolol");

    std::cout << "Bienvenidos a cpp" << std::endl;

    delete jim; //jim is destroyed

    return 0; //bob is destroyed
}