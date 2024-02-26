/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/26 17:20:27 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main(void)
{
    ClapTrap Bob("Bob");
    ScavTrap Jim("Jim");

    std::cout << Bob << Jim << std::endl;
    Bob.attack(Jim.getName());
    Jim.takeDamage(Bob.getAttackDamage());
    Jim.attack(Bob.getName());
    Bob.takeDamage(Jim.getAttackDamage());
    Bob.beRepaired(2);
    Jim.beRepaired(1);
    std::cout << std::endl << Bob << Jim << std::endl;

    return 0;
}