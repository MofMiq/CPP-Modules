/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:29:13 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/11 14:39:49 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"
#include <iostream>

Span::Span() : _size(0) , _cont()
{
  this->_cont.reserve(0);
  std::cout << GREEN << "Span default constructor called" << END << std::endl;
  return ;
}
Span::Span(unsigned int N) : _size(N) , _cont()
{
  this->_cont.reserve(N);
  std::cout << GREEN << "Span param constructor called" << END << std::endl;
  return ;
}

Span::Span(const Span &rhs)
{
  std::cout << GREEN << "Span param constructor called" << END << std::endl;
  if (this != &rhs)
  {
    this->_size = rhs.getSize();
    this->_cont = rhs.getCont();
    this->_flag = rhs.getFlag();
  }
  return ;
}

Span::~Span()
{
  std::cout << RED << "Span destructor called" << END << std::endl;
  return ;
}

Span &Span::operator=(const Span &rhs)
{
  std::cout << GREEN << "Span assigment operator overload called" << END << std::endl;
  if (this != &rhs)
  {
    this->_size = rhs.getSize();
    this->_cont = rhs.getCont();
    this->_flag = rhs.getFlag();
  }
  return *this;
}

void Span::addNumber(int n)
{
  try
  {
    if (this->_cont.size() == this->_size)
      throw ContAlreadyFilled();
    this->_cont.push_back(n);
  }
  catch (const ContAlreadyFilled& e)
  {
    this->_flag = true;
    std::cerr << RED << e.what() << END << std::endl;
  }
}

/*hago una copia del vector, lo ordeno, voy comparando en el actual y el siguiente,
guardo en un temporal la diferencia e itero sobre el vector hasta el final
y actualizando el temporal el caso de que haya una diferencia menor*/
int Span::shortestSpan()
{
  int res = 0;
  try
  {
    if (this->_size <= 1)
      throw NotEnoughtElementsToSpan();
    std::vector<int> copy(this->_cont);
    std::vector<int>::const_iterator it = copy.begin();
    std::sort(copy.begin(), copy.end());
    res = *(it + 1) - *it;
    for (; it != copy.end() - 1; ++it) //cuando en el for, en la parte de inicializar el valor, si este ya  se encuentra inicializado previamente como es este caso, se puede dejar vacia
    {
      int tmp = *(it + 1) - *it;
      if (tmp < res)
        res = tmp;
    }
  }
  catch(const NotEnoughtElementsToSpan& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return (-1);
  }
	return (res);
}

/*Busco los valores minimos y maximos del vextor y saco la diferencia*/
int Span::longestSpan()
{
  int res = 0;
  try
  {
    if (this->_size <= 1)
      throw NotEnoughtElementsToSpan();
    std::vector<int> copy(this->_cont);
    std::sort(copy.begin(), copy.end());
    std::vector<int>::const_iterator min = copy.begin();
    std::vector<int>::const_iterator max = copy.end() - 1;
    res = *max - *min;
  }
  catch (const NotEnoughtElementsToSpan& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return (-1);
  }
	return (res);
}

void Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
  srand(time(NULL));
  this->_cont.clear();
  for (std::vector<int>::iterator it = begin; it != end && !this->_flag; ++it)
  {
    int i = rand() % 1000;
    this->addNumber(i);
  }
  this->_flag = false;
}

unsigned int Span::getSize() const
{
  return this->_size;
}

const std::vector<int>& Span::getCont() const
{
  return this->_cont;
}

bool Span::getFlag() const
{
  return this->_flag;
}

const char* Span::ContAlreadyFilled::what() const throw()
{
  return "This vector is already filled";
}

const char* Span::NotEnoughtElementsToSpan::what() const throw()
{
  return "There isn't enought elements in this vector to calculte span";
}

std::ostream& operator<<(std::ostream& o, const Span& obj)
{
  o << YELLOW << "Size: " << obj.getSize() << " / Vector: ";
  for (std::vector<int>::const_iterator it = obj.getCont().begin(); it != obj.getCont().end(); ++it)
    o << *it << " ";
  o << END << std::endl;
  return o;
}
