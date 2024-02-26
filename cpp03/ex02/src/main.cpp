/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/26 18:07:07 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main(void)
{
    ClapTrap Bob("Bob");
    ScavTrap Jim("Jim");
    FragTrap Adam("Adam");

    std::cout << Bob << Jim << Adam << std::endl;
    Bob.attack(Jim.getName());
    Jim.takeDamage(Bob.getAttackDamage());
    
    Jim.attack(Bob.getName());
    Bob.takeDamage(Jim.getAttackDamage());
    
    Adam.attack(Jim.getName());
    Jim.takeDamage(Adam.getAttackDamage());

    Bob.beRepaired(2);
    Jim.beRepaired(1);
    Adam.beRepaired(5);
    Adam.highFivesGuys();
    std::cout << std::endl << Bob << Jim << Adam << std::endl;

    return 0;
}