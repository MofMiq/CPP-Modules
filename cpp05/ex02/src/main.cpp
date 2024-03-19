/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/19 20:16:51 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
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

    return 0;
}