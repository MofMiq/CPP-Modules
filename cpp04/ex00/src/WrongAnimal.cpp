/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:27:06 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "\033[32mWrongAnimal default constructor called\033[0m" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
    std::cout << "\033[32mWrongAnimal copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[31mWrongAnimal Destructor called\033[0m" << std::endl;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "\033[32mWrongAnimal copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "\033[33m*Random WrongAnimal sound*\033[0m" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return this->_type;
}

void WrongAnimal::setType(std::string newType)
{
    this->_type = newType;
    return;
}
