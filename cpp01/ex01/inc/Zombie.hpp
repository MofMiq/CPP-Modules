/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:51:51 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/15 10:24:01 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE_H
# define H_ZOMBIE_H

#include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(); //constructor defaut para cuando queremos crear un objeto de una sola tacada
        Zombie(std::string initName);
        ~Zombie();
        
        void announce(void);
        std::string getName(void);
        void setName(std::string newName);
};

Zombie *zombieHorde(int N, std::string name);

#endif