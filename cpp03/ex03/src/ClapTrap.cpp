/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:51:11 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 12:42:52 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "\033[32mClapTrap default constructor called\033[0m" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "\033[32mClapTrap param constructor called\033[0m" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    std::cout << "\033[32mClapTrap copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[31mClapTrap destructor called\033[0m" << std::endl;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "\033[32mClapTrap copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_attackDamage = rhs.getAttackDamage();
    }
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->getName() << " can't attack becasue is dead!" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "\033[33mClapTrap " << this->_name << " hasn't enough energy!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints <= 0)
        std::cout << "\033[31mClapTrap " << this->getName() << " is dead!\033[0m" << std::endl;
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->getName() << " can't repair itself becasue is dead!" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "\033[33mClapTrap " << this->_name << " hasn't enough energy!\033[0m" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " is being repaired " << amount << " points of health!" << std::endl;
        this->_energyPoints -= 1;
        this->_hitPoints += amount;
    }
    return;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setName(std::string newName)
{
    this->_name = newName;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

void ClapTrap::setHitPoints(int n)
{
    this->_hitPoints = n;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

void ClapTrap::setEnergyPoints(int n)
{
    this->_energyPoints = n;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}

void ClapTrap::setAttackDamage(int n)
{
    this->_attackDamage = n;
}

std::ostream &operator<<(std::ostream &o, const ClapTrap &obj)
{
    o << obj.getName() << " stats: " << obj.getHitPoints() << " hit points, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}