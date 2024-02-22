/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:55:05 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 13:17:37 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _i(0)
{
    return;
}

Fixed::Fixed(const int i)
{
    this->_i = i << this->_f;
    return;
}

Fixed::Fixed(const float f)
{
    this->_i = roundf(f * (1 << this->_f));
    return;
}

Fixed::Fixed(const Fixed& rhs)
{
    *this = rhs;
    return;
}

Fixed::~Fixed()
{
    return;
}

bool Fixed::operator>(const Fixed &rhs) const
{
    return this->_i > rhs._i;
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return this->_i < rhs._i;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return this->_i >= rhs._i;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return this->_i <= rhs._i;
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return this->_i == rhs._i;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return this->_i != rhs._i;
}

Fixed &Fixed::operator=(const Fixed& rhs)
{
    if (this != &rhs)
    {
        this->_i = rhs.getRawBits();
    }
    return *this;
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    if (rhs._i == 0)
        return 0;
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this); //copia el valor actual
    this->_i++; //incremento
    return tmp; //devuelve el valor original
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_i--;
    return tmp;
}

Fixed& Fixed::operator++(void)
{
    this->_i++;
    return *this;
}

Fixed& Fixed::operator--(void)
{
    this->_i--;
    return *this;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_i;
}

void Fixed::setRawBits(const int raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_i = raw;
    return;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_i / (1 << this->_f));
}

int Fixed::toInt(void) const
{
    return this->_i >> this->_f;
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj)
{
    o << obj.toFloat();
    return o;
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}
