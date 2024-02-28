/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 17:13:36 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap Ironclad("Ironclad");
    ClapTrap Silent("Silent");

    std::cout << Ironclad << Silent << std::endl;
    Ironclad.attack(Silent.getName());
    Silent.takeDamage(Ironclad.getAttackDamage());
    Ironclad.beRepaired(2);
    Silent.beRepaired(1);
    std::cout << std::endl << Ironclad << Silent << std::endl;

    return 0;
}