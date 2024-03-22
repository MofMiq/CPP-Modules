/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:30:22 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/22 10:35:03 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm() : _name("Default"), _gradeSign(75), _gradeExecution(5)
{
    //std::cout << "\033[32mAForm default constructor called\033[0m" << std::endl;
    return ;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExecution(gradeExec)
{
    //std::cout << "\033[32mAForm param constructor called\033[0m" << std::endl;
    try
    {
        if (gradeSign < 1 || gradeExec < 1)
            throw GradeTooHighException();
        else if (gradeSign > 150 || gradeExec > 150)
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

AForm::AForm(const AForm &rhs) : _name(rhs.getName()), _gradeSign(rhs.getGradeSign()), _gradeExecution(rhs.getGradeExec())
{
    //std::cout << "\033[32mAForm copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getSign();
    }
    return ;
}

AForm::~AForm()
{
    //std::cout << "\033[31mAForm destructor called\033[0m" << std::endl;
    return;
}

AForm &AForm::operator=(const AForm &rhs)
{
    //std::cout << "\033[32mAForm copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getSign();
    }
    return *this;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSign() const
{
    return this->_isSigned;
}

int AForm::getGradeSign() const
{
    return this->_gradeSign;
}

int AForm::getGradeExec() const
{
    return this->_gradeExecution;
}

void AForm::setSign(bool status)
{
    this->_isSigned = status;
}

bool AForm::beSigned(const Bureaucrat &b)
{
    try
    {
        if (this->_gradeSign < 1 || this->_gradeExecution < 1)
            throw GradeInvalidException();
        else if (this->_gradeSign > 150 || this->_gradeExecution > 150)
            throw GradeInvalidException();
        else if (this->_gradeSign < b.getGrade())
            throw GradeTooHighException();
        this->setSign(true);
    }
    catch (const GradeInvalidException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    return this->_isSigned;
}

bool    AForm::execute(const Bureaucrat& b) const
{
    try
    {
        if (!this->_isSigned)
            throw FormNotSignedException();
        else if (this->_gradeExecution < b.getGrade())
            throw GradeTooHighException();
        //this->action();
    }
    catch (const FormNotSignedException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    catch (const GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    return true;
}

const char* AForm::GradeTooHighException::what() const throw ()
{
    return "\033[35mGrade of the form too high to be executed\033[0m";
}
const char* AForm::GradeTooLowException::what() const throw ()
{
    return "\033[35mGrade of the form too low to be executed\033[0m";
}

const char* AForm::GradeInvalidException::what() const throw ()
{
    return "\033[35mError: bad number: grade must be a number between 1 and 150\033[0m";
}
const char* AForm::FormNotSignedException::what() const throw ()
{
    return "\033[35mForm can't be executed without being signed beforehand\033[0m";
};

std::ostream &operator<<(std::ostream &o, const AForm &obj)
{
    std::string status;
    if (obj.getSign())
        status = "True";
    else
        status = "False";
    o << "\033[35mAForm name: " << obj.getName() << " / signed: " << status << " / grade required to sign it: " << obj.getGradeSign() << " / grade to executed it: " << obj.getGradeExec() << "\033[0m" << std::endl;
    //o << "\033[35mAForm name: " << obj.getName() << " / signed: " << obj.getSign() << " / grade required to sign it: " << obj.getGradeReq() << " / grade to executed it: " << obj.getGradeExec() << "\033[0m" << std::endl;
    return o;
}
