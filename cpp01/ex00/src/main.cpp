/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:28:10 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/07 17:52:15 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
    Zombie obj("Hunter");
    Zombie *obj2 = newZombie("Chosen Undead");

    obj.announce();
    randomChump("Ashen One");
    delete obj2;

    return 0;
}