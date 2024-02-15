/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:57:50 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/15 10:23:50 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/* si quisiesemos usar un constructor parametrizado con un array de objetos
para asi inicializarloscon valores especificos, tendremos que alojar memoria
uno a uno de una forma similar a esta:

Zombie** horde = new Zombie*[N];

for(int i = 0; i < N; i++)
    horde[i] = new Zombie(name);

y despues:

for(int i = 0; i < N; i++)
    delete horde[i];
delete[] horde;

Ahora bien, esto es mas complicado y tiene mayor riesgo de leaks de memoria
si no se hace correctamtene.
 */

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie* horde = new Zombie[N];  //constructor defaut para cuando queremos crear un array de objetos de una sola tacada

    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}
