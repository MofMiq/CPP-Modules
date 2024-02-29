/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 19:10:31 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << "\033[32mAAnimal default constructor called\033[0m" << std::endl;
    return;
}

AAnimal::AAnimal(const AAnimal& rhs)
{
    std::cout << "\033[32mAAnimal copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

AAnimal::~AAnimal()
{
    std::cout << "\033[31mAAnimal Destructor called\033[0m" << std::endl;
    return;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
    std::cout << "\033[32mAAnimal copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

std::string AAnimal::getType(void) const
{
    return this->_type;
}

void AAnimal::setType(std::string newType)
{
    this->_type = newType;
    return;
}
