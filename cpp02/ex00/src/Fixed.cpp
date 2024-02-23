/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:14:21 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 14:09:17 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _i(0)
{
    std::cout << "\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
    return;
}

/*en el constructor de copia se usa el operador de asignacion para coppiar los
valores de rhs (obj copiado) al objeto actual (*this). 
En este caso, el operador * se utiliza para desreferenciar al puntero this,
que apunta al al objeto actual. Por lo tanto, *this se refiere al objeto actual.
Segun esta forma, se asume que el operador de asignacion esta correctamente
sobrecargado (todas las variables miembro deseadas).*/

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

//this != &rhs : this es puntero y &rhs se obtienee la direccion de memoria como cualquier otro tipo de variable; luego se comparan

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
