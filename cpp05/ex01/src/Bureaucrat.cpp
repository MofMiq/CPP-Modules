/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:54 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/22 10:33:17 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "\033[32mBureaucrat default constructor called\033[0m" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : _name(name)
{
    std::cout << "\033[32mBureaucrat param constructor called\033[0m" << std::endl;
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
            this->_grade = grade;
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        this->_grade = 1;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
        this->_grade = 150;
    }
    return ;
}

/*El problema es que estás intentando asignar un valor a _name en el cuerpo del constructor de copia.
Sin embargo, _name es const, por lo que solo puedes asignarle un valor en la lista de inicialización
del constructor.*/

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs.getName())
{
    std::cout << "\033[32mBureaucrat copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_grade = rhs.getGrade();
    }
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[31mBureaucrat destructor called\033[0m" << std::endl;
    return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "\033[32mBureaucrat copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_grade = rhs.getGrade();
    }
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    try
    {
        if (this->_grade <= 1)
            throw GradeTooHighException();
        this->_grade--; 
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        if (this->_grade >= 150)
            throw GradeTooLowException();
        this->_grade++;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(Form& f)
{
    if (f.getSign())
        std::cout << f.getName() << " form is already signed" << std::endl;
    else
    {
        if (f.beSigned(*this))
            std::cout << this->getName() << " signed " << f.getName() << std::endl;
        else
        {
            if ((f.getGradeReq() >= 1 && f.getGradeReq() <= 150) && (f.getGradeExec() >= 1 && f.getGradeExec() <= 150))
                std::cerr << this->getName() << " couldn't sign " << f.getName() << " because their grade is too low" << std::endl;
            else
                std::cerr << this->getName() << " couldn't sign " << f.getName() << " form format is bad" << std::endl;
        }
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
    return "Grade is already the highest!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
    return "Grade is already the lowest!";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << "\033[33m" << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\033[0m" << std::endl;
    return o;
}
