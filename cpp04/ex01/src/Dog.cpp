/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:48:06 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:18:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "\033[32mDog default constructor called\033[0m" << std::endl;
    this->_type = "Dog";
    return;
}

Dog::Dog(const Dog& rhs)
{
    std::cout << "\033[32mDog copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

Dog::~Dog()
{
    std::cout << "\033[31mDog Destructor called\033[0m" << std::endl;
    return;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "\033[32mDog copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "\033[33m*Guau guau!!!*\033[0m" << std::endl;
    return ;
}