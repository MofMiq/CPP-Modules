/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:40:07 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/02 16:41:31 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define END "\033[0m"

#include <iostream>

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

    unsigned int size();
};

#endif

template <typename T>
Array<T>::Array()
{
  std::cout << GREEN << "Array default constructor called" << END << std::endl;
  this->_array = NULL; //esto es un array vacio?
  this->_n = 0;
  return ;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
  std::cout << GREEN << "Array param constructor called" << END << std::endl;
  this->_array = new T[n](); //Los parentesis sirven para inicializar todos los valores
  this->_n = n;
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
    //delete[] this->_array;
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
  delete[] this->_array;
  return ;
}

template <typename T>
Array& Array<T>::operator=(const Array& rhs)
{
  std::cout << GREEN << "Array assignment operator called" << END << std::endl;
  if (this != &rhs)
  {
    delete[] this->_array;
    this->_n = rhs._n;
    this->_array = new T[this->_n];
    for (unsigned int i = 0; i < this->_n; i++)
      this->_array[i] = rhs._array[i];
  }
  return *this;
}

template <typename T>
unsigned int Array<T>::size()
{
  std::cout << YELLOW << "size function called" << END << std::endl;
  return this->_n;
}
