/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:00:37 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 16:35:12 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string initName) : name(initName), weapon(NULL)
{
    std::cout << "\033[32m" << "HumanB constructor called" << "\033[0m" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "\033[31m" << "HumanB destructor called" << "\033[0m" << std::endl;
}

void HumanB::attack(void)
{
    if (this->weapon) //comprobamos aqui primero porque puede o no existir el puntero
        std::cout << getName() << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << getName() << " can't attacks because doesn't have a weapon equiped" << std::endl;
}

const std::string HumanB::getName(void) const
{
    return this->name;
}

void HumanB::setName(std::string newName)
{
    this->name = newName;
}

void HumanB::setWeapon(Weapon &weaponEquiped)
{
    this->weapon = &weaponEquiped; //this->weapon es un puntero, weaponEquipe es una referencia -> le pasamos la direccion de memoria de weponEquiped al puntero para "equiparnoslo"
}