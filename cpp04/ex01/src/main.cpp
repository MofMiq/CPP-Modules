/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:53:32 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 15:55:20 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
    Animal* animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
    }

    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();

    /*una expresion como esta: delete [] animals; solo funciona cuando el array se ha creado con new[]*/
    for (int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}