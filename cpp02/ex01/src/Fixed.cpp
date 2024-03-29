/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:55:05 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 14:11:01 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _i(0)
{
    std::cout << "\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
    return;
}

/* Este constructor debe convertir un int a su valor de punto fijo correspondiente.
   Como el valor de los bits fraccionales se inicializa en 8, los 8 bits menos
   significativos de tu numero de punto fijo representaran la parte fraccionaria
   del numero. Para convertir un numero entero a un numero de punto fijo, solo 
   debemos desplazar el numero entero 8 bits a la izquierda.*/

Fixed::Fixed(const int i)
{
    std::cout << "\033[32m" << "Int constructor called" << "\033[0m" << std::endl;
    this->_i = i << this->_f;
    std::cout << this->_i << std::endl;
    return;
}

/* Este constructor debe convertir un float a su valor de punto fijo correspondiente.
   Se multiplica el flotante por 2 elevado a la potencia de_f y luego se redondea al
   entero mas cercano. En este caso, la parte fraccionaria se representa como una
   fraccion de 2^8 (o 256 porque s eel resultado de desplazar 1 << 8 bits hacia la
   izquierda). De esta forma, cuando multiplicamos el flotante por 256 nos devuleve
   el numero en la representacion de punto fijo. (punto fijo / pt fraccionaria) = numero flotante .*/

Fixed::Fixed(const float f)
{
    std::cout << "\033[32m" << "Float constructor called" << "\033[0m" << std::endl;
    this->_i = roundf(f * (1 << this->_f));
    std::cout << this->_i << std::endl;
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
    return;
}

Fixed &Fixed::operator=(const Fixed& rhs)
{
    std::cout << "\033[32m" << "Copy assignment operator called" << "\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_i = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_i;
}

void Fixed::setRawBits(const int raw)
{
    this->_i = raw;
    return;
}

/*Para convertir un numero de punto fijo a float debemos hacer la operacion contraria
que en el float constructor, es decir, dividir el numero de punto fijo por la parte
fraccionaria, en este caso 256 como resultado de haver movido 8 bits (_f) a la izquierda
el 1.*/

float Fixed::toFloat(void) const
{
    return (float)this->_i / (1 << this->_f);
}

/*Para convertir un numero punto fijo en decimal debemos hacer la operacion contraria,
a la que hemos hecho en el Int constructor, es decir, dezplazar los 8 bit que representa
la parte fraccionaria (_f) hacia la derecha.*/

int Fixed::toInt(void) const
{
    return this->_i >> this->_f;
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj)
{
    o << obj.toFloat();
    return o;
}
