/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:28:10 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/15 10:12:34 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
    Zombie obj("Hunter"); //stack
    Zombie *obj2 = newZombie("Chosen Undead"); //heap

    obj.announce();
    randomChump("Ashen One"); //stack
    obj2->announce(); //como esta en stack, persiste hasta que se borra
    delete obj2; //como esta en stack, hay que borrarlo manualmente

    return 0;
}