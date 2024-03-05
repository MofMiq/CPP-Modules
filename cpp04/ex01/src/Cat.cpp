/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:49:52 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:08 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "\033[32mCat default constructor called\033[0m" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    return;
}


 /*copia profunda: implica copiar todos los recursos de un objeto, incluyendo cualquier
 recurso de memoria dinamica al que apunte. Esto es diferente de una copia superficial,
 que solo copia los valores de los miembros del objeto, lo que puede llevar a multiples
 punteros apuntando al mismo recurso, en este caso dos Cats apuntando al mismo _brain.
 1) se desreferencia el puntero _brain del objeto rhs, obteniendo el objeto Brain al que apunta.
 2)  se crea un nuevo objeto Brain en el heap y se copian los datos del objeto Brain original
 al nuevo objeto.*/

Cat::Cat(const Cat& rhs) : Animal()
{
    std::cout << "\033[32mCat copy constructor called\033[0m" << std::endl;
    this->_type = rhs.getType();
    this->_brain = new Brain(*rhs._brain); 
    return;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "\033[31mCat Destructor called\033[0m" << std::endl;
    return;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "\033[32mCat copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "\033[33m*Miau miau!!!*\033[0m" << std::endl;
    return ;
}