/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:50:18 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 16:32:56 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMAN_A_H
# define H_HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class HumanA 
{
    private:
        std::string     name;
        Weapon          &weapon; //por que referencia aqui?

    public:
        HumanA(std::string initName, Weapon &initWeapon);
        ~HumanA();
        void attack(void);
        const std::string getName(void) const;
        void setName(std::string newName);
};

#endif