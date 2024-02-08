/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:02:15 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 10:36:14 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/* Heap:es una region de memoria que se gestiona manualmente. Puedes reservar un bloque
de memoria en el heap usando new y liberarlo usando delete. Ell heap es util cuando
necesitas asignar una gran cantidad de memoria, o si necesitas que un objeto persista
despues de qye una funcion retorna. Sin embargo, debes recordae liberar la memoria
tu mismo, de lo contrario, puedes tener fugas de memoria

newZombie es en este caso un puntero a un objeto Zombie que se aloja en el heap.
este objeto persistira despus de que la funcion newZombie retorne, hasta que se 
llame a delete en el.

 */

Zombie* newZombie(std::string name)
{
    Zombie *newZombie = new Zombie(name);

    return newZombie;
}