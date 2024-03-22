/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/22 10:54:29 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"
#include "../inc/AForm.hpp"

int main()
{
    Bureaucrat bob("Bob", 5);
    Bureaucrat jim("Jim", 52);
    Intern someRandomIntern;
    AForm* llf;
    AForm* rrf;

    llf = someRandomIntern.makeForm("lala", "Bender");
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    //rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
    //rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    std::cout << std::endl;
    bob.executeForm(*rrf);
    jim.executeForm(*rrf);
    std::cout << std::endl;
    jim.signForm(*rrf);
    bob.signForm(*rrf);
    std::cout << std::endl;
    bob.executeForm(*rrf);
    jim.executeForm(*rrf);


    delete rrf;

    return 0;
}
