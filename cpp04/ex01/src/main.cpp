/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:53:32 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:36:42 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    
    //----------------------

    const WrongAnimal* wmeta = new WrongAnimal;
    const WrongAnimal* wi = new WrongCat;

    std::cout << wi->getType() << " " << std::endl;
    std::cout << wmeta->getType() << " " << std::endl;
    wi->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete wi;

    return 0;
}