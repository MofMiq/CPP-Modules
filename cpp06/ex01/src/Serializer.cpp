/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:08:32 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 13:09:12 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include <iostream>

Serializer::Serializer()
{
    std::cout << GREEN << "Serializer default constructor called\033[0m" << END << std::endl;
    return ;

}

Serializer::Serializer(const Serializer& rhs)
{
    std::cout << GREEN << "Serializer copy constructor called\033[0m" << END << std::endl;
    (void)rhs;
    return ;
}

Serializer::~Serializer()
{
    std::cout << RED << "Serializer destructor called\033[0m" << END << std::endl;
    return ;

}

Serializer &Serializer::operator=(const Serializer& rhs)
{
    std::cout << GREEN << "Serializer assigment copy operator called\033[0m" << END << std::endl;
    (void)rhs;
    return *this;
}

/*
    reinterpret_cast es un operador de c++ que convierte un tipo de puntero a otro tipo de puntero
    o un tipo integral a otro tipo integral. Esencialmente, te permite tratar una secuencia de bits
    como si fuera de un tipo completamente diferente.

    Es importante tener en cuenta que este casteo no realiza ninguna conversion de datos o ajuste de
    punteros. Simplemente trata la secuencia de bits de la entrada como si fuera del tipo de salida.
    Esto puede ser peligroso si no se utiliza correctamente, ya que puede resultar en punteros no
    validos o en comportamientos indefinidos.

    serialize: toma un puntero a Data y lo convierte a uintptr_t, que es un tipo entero sin signo
    lo suficientemente grande como para contener el valor de cualquier puntero. Esto es lo que se
    cuando usamos el reinterpret_cast del puntero de Data (ptr) al tipo uintptr_t. El resultado es
    un numero que representa la direccion de memoria del puntero.
*/

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

/*
    deserializer: toma un uintptr_t y l convierte de nuevo a un puntero a Data. Esto es lo que hace
    cuando usamos el reinterpret_cast del uintptr_t a puntero a Data. El resultado es un puntero que
    apunta a la misma direccion de memoria que el uintptr_t original.
*/

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

