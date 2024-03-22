/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:29:41 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/22 10:33:32 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form() : _name("Default"), _gradeRequired(75), _gradeExecution(5)
{
    std::cout << "\033[32mForm default constructor called\033[0m" << std::endl;
    return ;
}

Form::Form(const std::string name, const int gradeReq, const int gradeExec) : _name(name), _gradeRequired(gradeReq), _gradeExecution(gradeExec)
{
    std::cout << "\033[32mForm param constructor called\033[0m" << std::endl;
    try
    {
        if (gradeReq < 1 || gradeExec < 1)
            throw GradeTooHighException();
        else if (gradeReq > 150 || gradeExec > 150)
            throw GradeTooLowException();
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return ;
}

Form::Form(const Form &rhs) : _name(rhs.getName()), _gradeRequired(rhs.getGradeReq()), _gradeExecution(rhs.getGradeExec())
{
    std::cout << "\033[32mForm copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getSign();
    }
    return ;
}

Form::~Form()
{
    std::cout << "\033[31mForm destructor called\033[0m" << std::endl;
    return;
}

Form &Form::operator=(const Form &rhs)
{
    std::cout << "\033[32mForm copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getSign();
    }
    return *this;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getSign() const
{
    return this->_isSigned;
}

int Form::getGradeReq() const
{
    return this->_gradeRequired;
}

int Form::getGradeExec() const
{
    return this->_gradeExecution;
}

void Form::setSign(bool status)
{
    this->_isSigned = status;
}

bool Form::beSigned(const Bureaucrat &b)
{
    try
    {
        if (this->_gradeRequired < 1 || this->_gradeExecution < 1)
            throw GradeTooHighException();
        else if (this->_gradeRequired > 150 || this->_gradeExecution > 150)
            throw GradeTooLowException();
        else if (this->_gradeRequired < b.getGrade())
            return false;
        this->setSign(true);
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    catch (const GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    return this->_isSigned;
}

const char* Form::GradeTooHighException::what() const throw ()
{
    return "Error: bad number: grade can't be lower than 1";
}
const char* Form::GradeTooLowException::what() const throw ()
{
    return "Error: bad number: grade can't be greater than 150";
}

std::ostream &operator<<(std::ostream &o, const Form &obj)
{
    std::string status;
    if (obj.getSign())
        status = "True";
    else
        status = "False";
    o << "\033[35mForm name: " << obj.getName() << " / signed: " << status << " / grade required to sign it: " << obj.getGradeReq() << " / grade to executed it: " << obj.getGradeExec() << "\033[0m" << std::endl;
    //o << "\033[35mForm name: " << obj.getName() << " / signed: " << obj.getSign() << " / grade required to sign it: " << obj.getGradeReq() << " / grade to executed it: " << obj.getGradeExec() << "\033[0m" << std::endl;
    return o;
}
