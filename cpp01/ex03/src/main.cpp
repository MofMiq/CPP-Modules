/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:06:42 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/15 10:27:29 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    std::cout << club.getType() << std::endl;

    Weapon greatsword = Weapon("moonlight greatsword");
    
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(greatsword);
    jim.attack();
    greatsword.setType("some other type of greatsword");
    jim.attack();

    return 0;
}