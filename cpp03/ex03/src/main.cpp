/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 17:15:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main(void)
{
    ScavTrap Silent("Silent");
    FragTrap Defect("Defect");
    DiamondTrap Watcher("Watcher");

    std::cout << Silent << Defect << Watcher << std::endl;
    Watcher.attack(Silent.getName());
    Silent.takeDamage(Watcher.getAttackDamage());

    Silent.beRepaired(1);
    Defect.beRepaired(5);
    Watcher.beRepaired(2);

    Watcher.whoAmI();
    Watcher.guardGate();
    Watcher.highFivesGuys();
    std::cout << std::endl << Silent << Defect << Watcher << std::endl;

    return 0;
}