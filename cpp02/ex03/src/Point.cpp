/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:00:02 by hunter            #+#    #+#             */
/*   Updated: 2024/02/21 18:23:35 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point() : _x(0), _y(0)
{
    std::cout << "\033[32m" << "[POINT]Default constructor called" << "\033[0m" << std::endl;
    return;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    std::cout << "\033[32m" << "[POINT]Param constructor called" << "\033[0m" << std::endl;
    return;
}

Point::Point(const Point& rhs)
{
    std::cout << "\033[32m" << "[POINT]Copy constructor called" << "\033[0m" << std::endl;
    *this = rhs;
    return;
}

Point::~Point()
{
    std::cout << "\033[31m" << "[POINT]Destructor called" << "\033[0m" << std::endl;
    return;
}

Point& Point::operator=(const Point& rhs)
{
    std::cout << "\033[32m" << "[POINT]Assignment operator overload called" << "\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_x = rhs.getX();
        this->_y = rhs.getY();
    }
    return *this;
}

const Fixed Point::getX(void) const
{
    return this->_x;
}

const Fixed Point::getY(void) const
{
    return this->_y;
}

void Point::setX(const Fixed x)
{
    this->_x = x;
}

void Point::setY(const Fixed y)
{
    this->_y = y;
}
