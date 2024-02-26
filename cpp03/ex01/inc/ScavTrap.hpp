/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:41:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/26 15:34:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
/*     private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage; */

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& rhs);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& rhs);

        void guardGate();

        void attack(const std::string& target);
/*        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        void        setName(std::string newName);
        int         getHitPoints() const;
        void        setHitPoints(int n);
        int         getEnergyPoints() const;
        void        setEnergyPoints(int n);
        int         getAttackDamage() const;
        void        setAttackDamage(int n); */
};

std::ostream& operator<<(std::ostream& o, const ScavTrap& obj);

#endif