#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    std::cout << "\033[32mScavTrap Default constructor called\033[0m" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[32mScavTrap param constructor called\033[0m" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
{
    std::cout << "\033[32mScavTrap copy assignment operator called\033[0m" << std::endl;
    *this = rhs;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[31mScavTrap Destructor called\033[0m" << std::endl;
    return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "\033[32mScavTrap copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getEnergyPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_attackDamage = rhs.getAttackDamage();
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints <= 0)
        std::cout << "\033[33mScavTrap " << this->_name << " hasn't enough energy!\033[0m" << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << "ScavTrap " << this->_name << " can't attack because is dead!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    return;
}

void ScavTrap::guardGate()
{
    if (this->_energyPoints <= 0)
        std::cout << "ScavTrap " << this->_name << " can't enter Gate keeper mode becasue is dead!" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &o, const ScavTrap &obj)
{
    o << obj.getName() << " stats: " << obj.getHitPoints() << " hit points left, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}