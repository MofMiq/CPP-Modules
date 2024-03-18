/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/18 13:42:36 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
    Bureaucrat bob;
    Bureaucrat jim("Jim", 2);
    Bureaucrat adam(jim);
    Bureaucrat jack;

    std::cout << bob << jim << adam << jack;
    
    jack = jim;

    jim.decrementGrade();
    bob.decrementGrade();
    std::cout << bob << jim;
    bob.incrementGrade();
    jim.incrementGrade();
    jim.incrementGrade();
    jim.incrementGrade();
    std::cout << bob << jim << adam << jack;

    return 0;
}