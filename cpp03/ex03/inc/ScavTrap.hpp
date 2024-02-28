/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:41:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 11:00:10 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include "../inc/ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    protected:
        static const int _scavEnergy = 50; //esta variable es para poder solucionar el Diamond Problem
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& rhs);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& rhs);

        void guardGate();

        void attack(const std::string& target);
};

std::ostream& operator<<(std::ostream& o, const ScavTrap& obj);

#endif