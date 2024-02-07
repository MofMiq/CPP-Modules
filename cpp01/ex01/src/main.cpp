/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:28:10 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/07 18:21:59 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
    int i = 5;
    Zombie *horde = zombieHorde(i, "Hunter");

    for (int c = 0; c < i; c++)
        horde[c].announce();
    delete [] horde;
    return 0;
}