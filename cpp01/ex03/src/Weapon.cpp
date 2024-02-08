/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:59:25 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 16:26:21 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string weaponArmed) : type(weaponArmed)
{
    std::cout << "\033[32m" << "Weapon constructor called" << "\033[0m" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "\033[31m" << "Weapon destructor called" << "\033[0m" << std::endl;
}

const std::string &Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}