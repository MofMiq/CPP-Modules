#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    std::cout << "\033[32mScavTrap Default constructor called\033[0m" << std::endl;
    //this->setName("ScavTrap");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[32mScavTrap param constructor called\033[0m" << std::endl;
    //this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
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
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyPoints() <= 0)
        std::cout << "\033[33mScavTrap " << this->getName() << " hasn't enough energy!\033[0m" << std::endl;
    else if (this->getHitPoints() <= 0)
        std::cout << "ScavTrap " << this->getName() << " can't attack because is dead!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
    return;
}

void ScavTrap::guardGate() //metodo propio, no hace falta especificar el padre
{
    if (this->getHitPoints() <= 0)
        std::cout << "ScavTrap " << this->getName() << " can't enter Gate keeper mode becasue is dead!" << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &o, const ScavTrap &obj)
{
    o << obj.getName() << " stats: " << obj.getHitPoints() << " hit points left, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}