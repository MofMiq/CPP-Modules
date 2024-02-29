/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:18:27 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "\033[32mAnimal default constructor called\033[0m" << std::endl;
    return;
}

Animal::Animal(const Animal& rhs)
{
    std::cout << "\033[32mAnimal copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

Animal::~Animal()
{
    std::cout << "\033[31mAnimal Destructor called\033[0m" << std::endl;
    return;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "\033[32mAnimal copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "\033[33m*Random animal sound*\033[0m" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return this->_type;
}

void Animal::setType(std::string newType)
{
    this->_type = newType;
    return;
}
