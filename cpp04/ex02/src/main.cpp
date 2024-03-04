/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:53:32 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 18:10:16 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    const Dog* dog2;
    const Cat* cat2;

    dog2 = new Dog();
    cat2 = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog2->getType() << " " << std::endl;
    std::cout << cat2->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();
    dog2->makeSound();
    cat2->makeSound();

    delete dog;
    delete cat;
    delete dog2;
    delete cat2;

    //Esto seria una prueba de error para comprobar que es una clase abstracta
    //const AAnimal* animal = new AAnimal();

    return 0;
}