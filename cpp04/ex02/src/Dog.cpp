/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:48:06 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 20:01:05 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "\033[32mDog default constructor called\033[0m" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
    return;
}

Dog::Dog(const Dog& rhs) : AAnimal()
{
    std::cout << "\033[32mDog copy constructor called\033[0m" << std::endl;
    this->_type = rhs.getType();
    this->_brain = new Brain(*rhs._brain);
    return;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "\033[31mDog Destructor called\033[0m" << std::endl;
    return;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "\033[32mDog copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "\033[33m*Guau guau!!!*\033[0m" << std::endl;
    return ;
}