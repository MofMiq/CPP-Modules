/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:12:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 17:29:46 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "../inc/AMateria.hpp"
#include <iostream>

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria*   _inventory[4];
        int         _count;
        
    public:
        Character();
        Character(const std::string name);
        Character(const Character& rhs);
        ~Character();

        Character& operator=(const Character& rhs);

        const std::string& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void recolector(AMateria* drop);

};

#endif