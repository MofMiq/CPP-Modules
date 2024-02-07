/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:57:50 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/07 18:25:10 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie* horde = new Zombie[N];

    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}
