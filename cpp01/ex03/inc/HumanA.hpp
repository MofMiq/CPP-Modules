/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:50:18 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/09 13:56:19 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMAN_A_H
# define H_HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

/* En esta clase, necesitamos hacer la varaible weapon una referencia por que en
c++, cuando pasamos un objeto a una funcion o lo asignas a otra variable, realizas
copia de ese objeto. Lo que significa que cualquier cambio que hagas al objeto
original no afertara a la copia. Al hacer que weapon sea una referencia (&weapon)
estamos haciendo que sea una referencia a otro objeto ya existente ('club' en main),
asi que al referirse al mismo objeto cualquier cambio que se haga a 'club' se
reflejara en weapon
 */

class HumanA 
{
    private:
        std::string     name;
        Weapon          &weapon;

    public:
        HumanA(std::string initName, Weapon &initWeapon);
        ~HumanA();
        void attack(void);
        const std::string getName(void) const;
        void setName(std::string newName);
};

#endif