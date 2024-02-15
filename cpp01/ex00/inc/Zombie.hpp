/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:51:51 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/15 10:22:30 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE_H
# define H_ZOMBIE_H

#include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(std::string initName);
        ~Zombie();
        
        void announce(void);
        std::string getName(void);
        void setName(std::string newName);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif