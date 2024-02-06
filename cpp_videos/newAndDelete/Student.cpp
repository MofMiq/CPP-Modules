#include "Student.hpp"
#include <iostream>

Student::Student() : _login("logDefault")
{
    std::cout << "Student " << this->_login << " is born" << std::endl;
}

Student::Student(std::string login) : _login(login)
{
    std::cout << "Student " << this->_login << " is born" << std::endl;
}

Student::~Student()
{
    std::cout << "Student " << this->_login << " died" << std::endl;
}
