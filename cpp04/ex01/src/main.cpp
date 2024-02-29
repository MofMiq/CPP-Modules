/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:53:32 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 14:40:34 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    Animal* array[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            array[i] = new Dog;
        else
            array[i] = new Cat;
    }

    /*una expresion como esta: delete [] array; solo funciona cuando el array se ha creado con new[]*/
    
    array[2]->makeSound();
    array[7]->makeSound();

    for (int i = 0; i < 10; i++)
        delete array[i];
    return 0;
}