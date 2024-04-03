/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:40:07 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/03 16:50:28 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define END "\033[0m"

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
  private:
    T* _array;
    unsigned int _n;

  public:
    Array();
    Array(unsigned int n);
    Array(const Array& rhs);
    ~Array();

    Array& operator=(const Array& rhs);
    T& operator[](unsigned int i) const; //sobrecarga del operador de suscripcion ([]).

    unsigned int size() const;
};

template<typename T>
std::ostream& operator<<(std::ostream& o, const Array<T>& obj);

/*Para tener bien enlazado el .hpp de una clase template con su .tpp hay que incluir
el archivo .tpp al final. Esto es porque necesitamos asegurarnos de que todas las
declaraciones del template estan disponibles antes de que las definiciones en el
archivo .tpp sean compiladas.*/
#include "Array.tpp"

#endif