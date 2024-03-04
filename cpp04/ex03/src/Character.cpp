/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:23:30 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 18:19:01 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character(const std::string name)
{
    std::cout << "\033[32mCharacter constructor called\033[0m" << std::endl;
    this->_name = name;
    return;
}

Character::Character(const Character& rhs)
{
    std::cout << "\033[32mCharacter copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

Character::~Character()
{
    std::cout << "\033[32mCharacter destructor called\033[0m" << std::endl;
    return;
}

Character& Character::operator=(const Character& rhs)
{
    std::cout << "\033[32mCharacter copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
        this->_name = rhs.getName();
    return *this;
}