/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:23:30 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/06 19:23:12 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character()
{
    //std::cout << "\033[32mCharacter constructor called\033[0m" << std::endl;
    this->_name = "";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_count = 0;
    return;
}

Character::Character(const std::string name)
{
    //std::cout << "\033[32mCharacter param constructor called\033[0m" << std::endl;
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_count = 0;
    return;
}

Character::Character(const Character& rhs)
{
    //std::cout << "\033[32mCharacter copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_count = rhs._count;
        for (int i = 0; i < 4; i++)
        {
            if (rhs._inventory[i] != NULL)
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return;
}

Character::~Character()
{
    //std::cout << "\033[31mCharacter destructor called\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
    }
    return;
}

Character& Character::operator=(const Character& rhs)
{
    //std::cout << "\033[32mCharacter copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_count = rhs._count;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            if (rhs._inventory[i] != NULL)
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return *this;
}

const std::string& Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
    {
        std::cout << "Error: Can't equip a NULL pointer materia" << std::endl;
        return;
    }
    if (this->_count >= 4)
    {
        std::cout << "Error: The inventory is already full" << std::endl;
        delete m;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[this->_count] == NULL)
        {
            this->_inventory[this->_count] = m;
            this->_count++;
            break;
        }
    }
    return;
}

void Character::unequip(int idx)
{
    if (!(idx >= 0 && idx < 4))
    {
        std::cout << "Error: Index is out of inventory range" << std::endl;
        return;
    }
    if (this->_inventory[idx] != NULL)
        recolector(this->_inventory[idx]);
    this->_inventory[idx] = NULL;
    this->_count--;
    return;
}

void Character::use(int idx, ICharacter& target)
{
    if (!(idx >= 0 && idx < 4))
    {
        std::cout << "Error: Index is out of inventory range" << std::endl;
        return;
    }
    if (this->_inventory[idx] == NULL)
        std::cout << "Error: No materia is stored in " << idx << " inventory slot" << std::endl;
    else
        this->_inventory[idx]->use(target);
    return;
}

void Character::recolector(AMateria* drop)
{
    delete drop;
}