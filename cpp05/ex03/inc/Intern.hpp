/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:34:49 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/20 16:11:25 by marirodr         ###   ########.fr       */
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

        class FormDontExistException
        {
            public:
                const char* what () const throw ()
                {
                    return "A form with that name dosen't exist!";
                }
        };
};

#endif