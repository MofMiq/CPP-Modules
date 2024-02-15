/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:48:17 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/15 10:23:54 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string initName)
{
    this->name = initName;
    std::cout << this->name << " constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destructor has been called" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void)
{
    return this->name;
}

void Zombie::setName(std::string newName)
{
    this->name = newName;
}
