/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/23 13:29:30 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap Jim;
    ClapTrap Bob("Bob");

    std::cout << Bob << std::endl;
    Bob.attack("John");
    std::cout << Bob << std::endl;
    Bob.takeDamage(2);
    std::cout << Bob << std::endl;
    Bob.beRepaired(1);
    std::cout << Bob << std::endl;

    return 0;
}