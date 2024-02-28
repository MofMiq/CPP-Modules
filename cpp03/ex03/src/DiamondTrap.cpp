#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "\033[32mDiamondTrap Default constructor called\033[0m" << std::endl;
    this->_name = "DiamondTrap";
    ClapTrap::_name = "DiamondTrap_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_scavEnergy;
    this->_attackDamage = FragTrap::_attackDamage;
    return;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "\033[32mDiamondTrap param constructor called\033[0m" << std::endl;
    this->_name = name; //se refiere a _name de DiamondTrap, oculata _name de ClapTrap
    ClapTrap::_name = name + "_clap_name"; //se refiere a _name de ClapTrap porque se llama de forma explicita desde la clase base
    this->_hitPoints = FragTrap::_hitPoints; //FragTrap (100)
    this->_energyPoints = ScavTrap::_scavEnergy; //ScavTrap(50) -> usamos en vez de _energyPoints porque se sobreescribe con el valor dado en el constructor de FragTrap, asi que usamos una varaible estatica adicional de ScavTrap para poder manteneer su valor
    this->_attackDamage = FragTrap::_attackDamage; //FragTrap; (30)
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
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    if (this->_hitPoints <= 0)
        std::cout << "DiamondTrap " << this->_name << " can't say nothing becasue is dead!" << std::endl;
    else
        std::cout << "My name is " << this->_name << " and my clap name is " << ClapTrap::_name << std::endl;
    return;
}

std::string DiamondTrap::getDiamondName() const
{
    return this->_name;
}

std::ostream &operator<<(std::ostream &o, const DiamondTrap &obj)
{
    o << obj.getDiamondName() << " stats: " << obj.getHitPoints() << " hit points left, " << obj.getEnergyPoints() << " energy points left and " << obj.getAttackDamage() << " points of power attack" << std::endl;
    return o;
}