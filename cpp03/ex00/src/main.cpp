/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/26 16:19:28 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap Bob("Bob");
    ClapTrap Jim("Jim");

    std::cout << Bob << Jim << std::endl;
    Bob.attack(Jim.getName());
    Jim.takeDamage(Bob.getAttackDamage());
    Bob.beRepaired(2);
    Jim.beRepaired(1);
    std::cout << std::endl << Bob << Jim << std::endl;

    return 0;
}