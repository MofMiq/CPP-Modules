/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/22 10:39:06 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat  bob("Bob", 42);
    Bureaucrat  jim("Jim", 5);

    PresidentialPardonForm  presi("Miles");
    RobotomyRequestForm     robot("Miles");
    ShrubberyCreationForm   tree("Miles");


    std::cout << bob << jim;
    std::cout << presi << robot << tree << std::endl;
    
    bob.executeForm(presi);
    jim.executeForm(presi);
    bob.signForm(presi);
    jim.signForm(presi);
    bob.executeForm(presi);
    jim.executeForm(presi);

    jim.signForm(robot);
    jim.executeForm(robot);
    jim.signForm(tree);
    jim.executeForm(tree);

    std::cout << presi << robot << tree << std::endl;

    return 0;
}