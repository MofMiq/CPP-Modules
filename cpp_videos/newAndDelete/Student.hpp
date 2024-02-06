#ifndef STUDENT_CLASS_H
# define STUDENT_CLASS_H

#include <iostream>

class Student
{
    private:
        std::string _login;
    
    public:
        Student();
        Student(std::string login);
        ~Student();
};

#endif