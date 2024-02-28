/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 17:13:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main(void)
{
    ClapTrap Ironclad("Ironclad");
    ScavTrap Silent("Silent");

    std::cout << Ironclad << Silent << std::endl;
    Ironclad.attack(Silent.getName());
    Silent.takeDamage(Ironclad.getAttackDamage());
    Silent.attack(Ironclad.getName());
    Ironclad.takeDamage(Silent.getAttackDamage());
    Ironclad.beRepaired(2);
    Silent.beRepaired(1);
    Silent.guardGate();
    std::cout << std::endl << Ironclad << Silent << std::endl;

    return 0;
}