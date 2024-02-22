/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:00:02 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 13:23:35 by marirodr         ###   ########.fr       */
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
    *this = rhs;
    return;
}

Point::~Point()
{
    return;
}

/*const_cast<Fixed&>: es un operador que se utiliza para eliminar o agregar la calificacion const a una variable.
Es una de las pocas maneras en C++ de "romper" la  seguridad de los tipos.
eliminamos el const que estamos obligados a usar de _x e _y ne su definicion.
Entre los <> tenemos que usar un puntero o una referencia porque al modificar el valor de un 
const, y dicha operacion tiene sentido para esos tipos.*/

Point& Point::operator=(const Point& rhs)
{
    if (this != &rhs)
    {
        const_cast<Fixed&>(this->_x) = rhs.getX();
        const_cast<Fixed&>(this->_y) = rhs.getY();
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

std::ostream& operator<<(std::ostream& o, const Point& obj)
{
    o << "(" << obj.getX() << ", " << obj.getY() << ")";
    return o;
}