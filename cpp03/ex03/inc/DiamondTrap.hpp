/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:41:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/26 18:35:19 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include <iostream>
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

/*Una clase puede heredar de múltiples clases al mismo tiempo. Esto se conoce como herencia múltiple.
Diamond problem: cuando una clase hereda de dos o más clases que tienen un método con la misma firma,
y estas clases a su vez heredan de una misma clase base.En este caso, no está claro cuál de los métodos
heredados debe usar la clase derivada.
La manera de resolver este problema es a traves de la herencia virtual. Es una característica que se utiliza
para evitar múltiples instancias de una clase base cuando se utiliza la herencia múltiple. Esto siginifica
que solo habra una unica instancia de la clase Padre en un objeto de clase "nieto", incluso aunque "nieto"
herede de "hijo" e "hija".
*/

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& rhs);
        ~DiamondTrap();

        DiamondTrap& operator=(const DiamondTrap& rhs);

        void whoAmI();
};

std::ostream& operator<<(std::ostream& o, const DiamondTrap& obj);

#endif