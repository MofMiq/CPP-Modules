/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:53:32 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 17:54:55 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;
    
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