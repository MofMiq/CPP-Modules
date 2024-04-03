/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:40:07 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/03 16:06:32 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _n(0)
{
  std::cout << GREEN << "Array default constructor called" << END << std::endl;
  return ;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
  std::cout << GREEN << "Array param constructor called" << END << std::endl;
  this->_n = n;
  this->_array = new T[n](); //Los parentesis sirven para inicializar todos los valores
  return ;
}

/*copia profunda: borramos nuestro array, copiamos el valor del size, creamos un array nuevo con
ese nuevo tamaño y luego copiamos cada elemento uno a uno. */
template <typename T>
Array<T>::Array(const Array& rhs)
{
  std::cout << GREEN << "Array copy constructor called" << END << std::endl;
  if (this != &rhs)
  {
    this->_n = rhs._n;
    this->_array = new T[this->_n];
    for (unsigned int i = 0; i < this->_n; i++)
      this->_array[i] = rhs._array[i];
  }
  return ;
}

template <typename T>
Array<T>::~Array()
{
  std::cout << RED << "Array destructor called" << END << std::endl;
  if (this->_array != NULL)
  {
    delete[] this->_array;
    this->_array = NULL;
  }
  return ;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
  std::cout << GREEN << "Array assignment operator called" << END << std::endl;
  if (this != &rhs)
  {
    this->~Array();
    this->_n = rhs._n;
    this->_array = new T[this->_n];
    for (unsigned int i = 0; i < this->_n; i++)
      this->_array[i] = rhs._array[i];
  }
  return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) const
{
  if (i >= this->_n)
    throw std::out_of_range("Index out of range\n");
  return this->_array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
  return this->_n;
}

template<typename T>
std::ostream& operator<<(std::ostream& o, const Array<T>& obj)
{
  for (unsigned int i = 0; i < obj.size(); i++)
    o << YELLOW << "obj[" << i << "]: " << obj[i] << std::endl;
  o << "obj.size: " << obj.size() << END << std::endl;
  return o;
}

#endif