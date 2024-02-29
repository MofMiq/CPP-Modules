/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:49:52 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:27:49 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "\033[32mWrongCat default constructor called\033[0m" << std::endl;
    this->_type = "WrongCat";
    return;
}

WrongCat::WrongCat(const WrongCat& rhs)
{
    std::cout << "\033[32mWrongCat copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

WrongCat::~WrongCat()
{
    std::cout << "\033[31mWrongCat Destructor called\033[0m" << std::endl;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << "\033[32mWrongCat copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "\033[33m*Miau miau!!!*\033[0m" << std::endl;
    return ;
}