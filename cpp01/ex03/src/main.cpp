/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:06:42 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 16:29:45 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("Some other type of club");
    bob.attack();

    Weapon greatsword = Weapon("moonlight greatsword");
    
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(greatsword);
    jim.attack();
    greatsword.setType("Some other type of greatsword");
    jim.attack();

    return 0;
}