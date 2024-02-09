/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:50:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/09 14:09:05 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMAN_B_H
# define H_HUMAN_B_H

#include <iostream>
#include "Weapon.hpp"

/* En esta clase weapon es un puntero (*weapon) por que como en el ejercicio nos
piden que no tenga equipada el arma desde el principio, de esta manera podemos
inicializar esta variable a NULL y mas tarde con la funcion setWeapon asignarlo
a otro objeto real en el main (club). ESto no lo podriamos hacer con referencias.

en setType usamos una referencia por lo mismo que en la clase HumanA para que 
cuando cambiemos el objeto real se paliquen los cambios en el weapon de la clase 
HumanB.*/

class HumanB
{
    private:
        std::string     name;
        Weapon          *weapon;

    public:
        HumanB(std::string initName);
        ~HumanB();
        void attack(void);
        const std::string getName(void) const;
        void setName(std::string newName);
        void setWeapon(Weapon &weaponEquiped);
};

#endif