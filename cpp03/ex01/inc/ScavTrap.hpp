/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:41:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/26 18:05:49 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
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