#include "../inc/DiamondTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "\033[32mDiamondTrap Default constructor called\033[0m" << std::endl;
    this->_name = ClapTrap::getName();
    ClapTrap::_name = ClapTrap::getName() + "_clap_name";
    this->_hitPoints = 100; //FragTrap
    this->_energyPoints = 50 //ScavTrap
    this->_attackDamage = 30 //FragTrap;
    return;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout << "\033[32mDiamondTrap param constructor called\033[0m" << std::endl;
    this->_name = ClapTrap::getName();
    ClapTrap::_name = ClapTrap::getName() + "_clap_name";
    this->_hitPoints = 100; //FragTrap
    this->_energyPoints = 50 //ScavTrap
    this->_attackDamage = 30 //FragTrap;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
{
    std::cout << "\033[32mDiamondTrap copy assignment operator called\033[0m" << std::endl;
    *this = rhs;
    return;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[31mDiamondTrap Destructor called\033[0m" << std::endl;
    return;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
    std::cout << "\033[32mDiamondTrap copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

void DiamondTrap::whoAmI() //metodo propio, no hace falta especificar el padre
{
    if (this->getHitPoints() <= 0)
        std::cout << "DiamondTrap " << this->getName() << " can't say nothing becasue is dead!" << std::endl;
    else
        std::cout << "My name is " << this->getName() << " and my clap name is " << ClapTrap::_name << std::endl;
    return;
}

std::ostream &operator<<(std::ostream &o, const DiamondTrap &obj)
{
    o << obj.getName() << " stats: " << obj.getHitPoints() << " hit points left, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}