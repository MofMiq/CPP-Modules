/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:28:10 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 11:40:15 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
    int i = 5;
    Zombie *horde = zombieHorde(i, "Hunter");

    for (int c = 0; c < i; c++)
        horde[c].announce();
    delete [] horde; //de esta manera borramos un array de objetos en cpp
    return 0;
}