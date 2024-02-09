/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:36:21 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/09 13:44:44 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string initName, Weapon &initWeapon) : name(initName), weapon(initWeapon)
{
	std::cout << "\033[32m" << "HumanA constructor called" << "\033[0m" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "\033[31m" << "HumanA destructor called" << "\033[0m" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << getName() << " attacks with their " << this->weapon.getType() << std::endl;
}

const std::string HumanA::getName(void) const
{
    return this->name;
}

void HumanA::setName(std::string newName)
{
    this->name = newName;
}
