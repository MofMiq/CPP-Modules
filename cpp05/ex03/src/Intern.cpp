/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:52:17 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/20 18:55:46 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

AForm *Intern::createShrubberyCreationForm(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

Intern::Intern()
{
   /*  this->_formTypes[0] = {/*&*/Intern::createShrubberyCreationForm, "ShrubberyCreationForm"};
    this->_formTypes[1] = {/*&*/Intern::createRobotomyRequestForm, "RobotomyRequestForm"};
    this->_formTypes[2] = {/*&*/Intern::createPresidentialPardonForm, "PresidentialPardonForm"}; */
    return;
}

Intern::Intern(const Intern & rhs)
{
    (void)rhs;
}

Intern::~Intern()
{
    return;
}

Intern& Intern::operator=(const Intern & rhs)
{
    (void)rhs;
    return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    std::string typeForm[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int c = 0;

    for (int i = 0; i < 3; i++)
    {
        if (formName == typeForm[i])
            c = i;
    }
    try
    {
        switch(c)
        {
            case 0:
            {
                std::cout << "Intern creates ShrubberyCreationForm";
                return new ShrubberyCreationForm(target);
            }
            case 1:
            {
                std::cout << "Intern creates RobotomyRequestForm";
                return new RobotomyRequestForm(target);
            }
            case 2:
            {
                std::cout << "Intern creates PresidentialPardonForm";
                return new PresidentialPardonForm(target);
            }
            defaut:
                throw FormDontExistException();
        }
    }
    catch (const FormDontExistException& e)
    {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
}