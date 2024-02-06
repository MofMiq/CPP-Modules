#include "Student.hpp"
#include <iostream>

int main(void)
{
    //usamos el constructor default
    Student *students = new Student[3];

    std::cout << "Bienvenidos a cpp" << std::endl;

    delete [] students; //jim is destroyed

    return 0; //bob is destroyed
}