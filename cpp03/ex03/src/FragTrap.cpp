#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    std::cout << "\033[32mFragTrap Default constructor called\033[0m" << std::endl;
    //this->setName("FragTrap");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[32mFragTrap param constructor called\033[0m" << std::endl;
    //this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
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
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

/* void FragTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() <= 0)
        std::cout << "\033[33mFragTrap " << this->getName() << " hasn't enough energy!\033[0m" << std::endl;
    else if (this->getHitPoints() <= 0)
        std::cout << "FragTrap " << this->getName() << " can't attack because is dead!" << std::endl;
    else
    {
        std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    return;
} */

void FragTrap::highFivesGuys() //metodo propio, no hace falta especificar el padre
{
    if (this->getHitPoints() <= 0)
        std::cout << "FragTrap " << this->getName() << " can't highfive becasue is dead!" << std::endl;
    else
        std::cout << "FragTrap " << this->getName() << " request kindly a high five" << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &o, const FragTrap &obj)
{
    o << obj.getName() << " stats: " << obj.getHitPoints() << " hit points left, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}