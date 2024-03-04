/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:12:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 17:31:05 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "../inc/ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string _name;
    public:
        Character(const std::string name);
        Character(const Character& rhs);
        ~Character();

        Character& operator=(const Character& rhs);

};

#endif