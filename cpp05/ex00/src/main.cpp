/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/22 10:30:14 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
    Bureaucrat bob;
    Bureaucrat jim("Jim", 3);
    Bureaucrat jack("Jack", 200);
    Bureaucrat adam("Adam", 0);
    Bureaucrat miles(jack);

    std::cout << bob << jim << jack << adam << miles;

    adam = jim;

    std::cout << adam;

    bob.decrementGrade();
    jim.decrementGrade();
    std::cout << bob << jim;
    bob.incrementGrade();
    jim.incrementGrade();
    std::cout << bob << jim;
    jim.incrementGrade();
    jim.incrementGrade();
    jim.incrementGrade();
    std::cout << bob << jim;

    return 0;
}