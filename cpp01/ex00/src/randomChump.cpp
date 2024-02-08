/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:05:40 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 10:32:25 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/* Stack: es una regioin de memoria que se gestiona automaticamente. Cuando una 
funcion se llama, un bloque de memoria se reserva en el stack para todas sus 
variables locales y se libera automaticamente cuando la funcion retorna. Es
rapido y no tienes que preocuparte por la gestion de la memoria, pero su espacio
es limitado.

la varaible newZombie es una variable local que se aloja en el stack. cuando la
funcion randomChump termina, esta se destruye automaticamente.
 */

void randomChump(std::string name)
{
    Zombie newZombie(name);

    newZombie.announce();
}
