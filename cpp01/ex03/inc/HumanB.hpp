/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:50:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 16:33:27 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMAN_B_H
# define H_HUMAN_B_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string     name;
        Weapon          *weapon; //por que puntero aqui?

    public:
        HumanB(std::string initName);
        ~HumanB();
        void attack(void);
        const std::string getName(void) const;
        void setName(std::string newName);
        void setWeapon(Weapon &weaponEquiped); //por que referencia aqui?
};

#endif