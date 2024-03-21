/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:52:17 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/21 18:46:07 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

const char* Intern::FormDontExistException::what() const throw ()
{
    return "A form with that name dosen't exist!";
}

/*inicializamos la estructuraa de forma explicita para cada campo por que si no
da errores al haber miembro constantes.*/

Intern::Intern()
{
    this->_formTypes[0].create = &Intern::createShrubberyCreationForm;
    this->_formTypes[0].name = "ShrubberyCreationForm";
    this->_formTypes[1].create = &Intern::createRobotomyRequestForm;
    this->_formTypes[1].name = "RobotomyRequestForm";
    this->_formTypes[2].create = &Intern::createPresidentialPardonForm;
    this->_formTypes[2].name = "PresidentialPardonForm";
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

/*recorremos el array de estrucutras _formTypes miemtras comparamos el nombre del
formulario que nos pasan por parametro. en el caso de coincidir el nombre con uno
de los formularios existentes, llama a la funcion de creacion de formulario correspondiente
alojado en la estrucutura devolviendo un puntero del mismo. Si no, lanzamos mensaje de error
y devolvemos null*/

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (formName == this->_formTypes[i].name)
            {
                std::cout << "Intern creates " << this->_formTypes[i].name << std::endl;
                return (this->*_formTypes[i].create)(target);
            }
        }
        throw FormDontExistException();
    }
    catch (const FormDontExistException& e)
    {
        std::cerr << e.what() << std::endl;
        return nullptr;
    }
}

/*     std::string typeForm[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int c = -1;

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
                std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
                return new ShrubberyCreationForm(target);
            }
            case 1:
            {
                std::cout << "Intern creates RobotomyRequestForm" << std::endl;
                return new RobotomyRequestForm(target);
            }
            case 2:
            {
                std::cout << "Intern creates PresidentialPardonForm" << std::endl;
                return new PresidentialPardonForm(target);
            }
            default:
                throw FormDontExistException();
        }
    }
    catch (const FormDontExistException& e)
    {
        std::cerr << e.what() << std::endl;
        return NULL;
    } */