/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:50:08 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 13:12:07 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_WEAPON_H
# define H_WEAPON_H

#include <iostream>

class   Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string weaponArmed);
        ~Weapon();
        const std::string &getType(void) const;
        void setType(std::string newType);
};

#endif