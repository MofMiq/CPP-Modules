/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:41:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/28 12:34:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>
#include "../inc/ClapTrap.hpp"

/* La herencia virtual es una característica de C++ que se utiliza para evitar
múltiples instancias de una clase base cuando se utiliza la herencia múltiple. */

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& rhs);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& rhs);

        void highFivesGuys();
};

std::ostream& operator<<(std::ostream& o, const FragTrap& obj);

#endif