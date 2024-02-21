/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:00:02 by hunter            #+#    #+#             */
/*   Updated: 2024/02/21 21:11:34 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point() :_x(0), _y(0)
{
    return;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    return;
}

Point::Point(const Point& rhs) : _x(rhs.getX()), _y(rhs.getY())
{
    //*this = rhs;
    return;
}

Point::~Point()
{
    return;
}

Point& Point::operator=(const Point& rhs)
{
    if (this != &rhs)
    {
        (Fixed)this->_x = rhs.getX();
        (Fixed)this->_y = rhs.getY();
    }
    return *this;
}

bool Point::operator==(const Point& rhs) const
{
    if (this->_x == rhs.getX() && this->_y == rhs.getY())
        return true;
    return false;
}

Fixed Point::getX(void) const
{
    return this->_x;
}

Fixed Point::getY(void) const
{
    return this->_y;
}

