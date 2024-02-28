/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 17:15:11 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main(void)
{
    ClapTrap Ironclad("Ironclad");
    ScavTrap Silent("Silent");
    FragTrap Defect("Defect");

    std::cout << Ironclad << Silent << Defect << std::endl;
    Ironclad.attack(Silent.getName());
    Silent.takeDamage(Ironclad.getAttackDamage());
    
    Silent.attack(Ironclad.getName());
    Ironclad.takeDamage(Silent.getAttackDamage());
    
    Defect.attack(Silent.getName());
    Silent.takeDamage(Defect.getAttackDamage());

    Ironclad.beRepaired(2);
    Silent.beRepaired(1);
    Defect.beRepaired(5);
    Defect.highFivesGuys();
    std::cout << std::endl << Ironclad << Silent << Defect << std::endl;

    return 0;
}