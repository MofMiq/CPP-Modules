/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 12:50:15 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main(void)
{
    ScavTrap Jim("Jim");
    FragTrap Adam("Adam");
    DiamondTrap Jack("Jack");

    std::cout << Jim << Adam << Jack << std::endl;
    Jack.attack(Jim.getName());
    Jim.takeDamage(Jack.getAttackDamage());

    Jim.beRepaired(1);
    Adam.beRepaired(5);
    Jack.beRepaired(2);

    Jack.whoAmI();
    Jack.guardGate();
    Jack.highFivesGuys();
    std::cout << std::endl << Jim << Adam << Jack << std::endl;

    return 0;
}