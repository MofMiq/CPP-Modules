#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    std::cout << "\033[32mFragTrap Default constructor called\033[0m" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[32mFragTrap param constructor called\033[0m" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return;
}

FragTrap::FragTrap(const FragTrap& rhs)
{
    std::cout << "\033[32mFragTrap copy assignment operator called\033[0m" << std::endl;
    *this = rhs;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[31mFragTrap Destructor called\033[0m" << std::endl;
    return;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << "\033[32mFragTrap copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getEnergyPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_attackDamage = rhs.getAttackDamage();
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    if (this->_energyPoints <= 0)
        std::cout << "FragTrap " << this->_name << " can't highfive becasue is dead!" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " request kindly a high five" << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &o, const FragTrap &obj)
{
    o << obj.getName() << " stats: " << obj.getHitPoints() << " hit points left, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}