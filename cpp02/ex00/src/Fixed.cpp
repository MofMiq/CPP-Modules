/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:14:21 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/20 11:52:51 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _i(0)
{
    std::cout << "\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
    return;
}

Fixed::Fixed(const Fixed& rhs)
{
    std::cout << "\033[32m" << "Copy constructor called" << "\033[0m" << std::endl;
    *this = rhs;
    return;
}

Fixed::~Fixed()
{
    std::cout << "\033[31m" << "Destructor called" << "\033[0m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& rhs)
{
    std::cout << "\033[32m" << "Copy assignment operator called" << "\033[0m" << std::endl;
    if (this != &rhs)
        this->_i = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_i;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_i = raw;
    return;
}
