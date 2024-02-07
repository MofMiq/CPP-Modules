/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:51:51 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/07 18:25:05 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE_H
# define H_ZOMBIE_H

#include <string>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string initName);
        ~Zombie();
        
        void announce(void);
        std::string getName(void);
        void setName(std::string newName);
};

Zombie *zombieHorde(int N, std::string name);

#endif