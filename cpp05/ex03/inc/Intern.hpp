/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:34:49 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/21 18:45:09 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        struct FormTypes
        {
            AForm* (Intern::*create)(const std::string& target);
            std::string name;
        };

        FormTypes _formTypes[3];

        AForm* createShrubberyCreationForm(const std::string& target);
        AForm* createRobotomyRequestForm(const std::string& target);
        AForm* createPresidentialPardonForm(const std::string& target);
        
    public:
        Intern();
        Intern(const Intern& rhs);
        ~Intern();
        
        Intern& operator=(const Intern& rhs);

        AForm* makeForm(const std::string& formName, const std::string& target);

        class FormDontExistException : public std::exception
        {
            public:
                const char* what () const throw ();
        };
};

/*Definimos una estructura DormTypes que contenga un puntero a una funcion miembro que
va a crear un formulario y un string para el nombre. nos servira para mapear los nombres
de los formularios a las funciones que los crean.
Luego declaramos un array de esta estructura _formTypes[3] con el tamaño deseado*/

#endif