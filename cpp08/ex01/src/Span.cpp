/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:29:13 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/09 16:44:01 by marirodr         ###   ########.fr       */
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
  }
  return *this;
}

void Span::addNumber(int n)
{
  std::vector<int>::iterator it;
  it = this->_cont.end();
  //std::cout << "it.end(): " << *it << " y cont.size(): " << this->_cont.size() << " y size: " << this->getSize() << std::endl;
  try
  {
    if (this->_cont.size() == this->_size)
      throw ContAlreadyFilled();
    this->_cont.push_back(n);
  }
  catch (const ContAlreadyFilled& e)
  {
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
    //std::cout << "en shortestSpan: *it +1: " << *(it + 1) << " *it: " << *it << std::endl;
    for (it = copy.begin(); it != copy.end() - 1; ++it)
    {
      int tmp = *(it + 1) - *it;
      //std::cout << "en shortestSpan: res: " << res << std::endl;
      //std::cout << "en shortestSpan: tmp: " << tmp << std::endl;
      if (tmp < res)
        res = tmp;
    }
  }
  catch(const NotEnoughtElementsToSpan& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
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
  }
	return (res);
}

void Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
  this->_cont.clear();
  for (std::vector<int>::iterator it = begin; it != end; ++it)
  {
    this->addNumber(*it);
  }
}

unsigned int Span::getSize() const
{
  return this->_size;
}

const std::vector<int>& Span::getCont() const
{
  return this->_cont;
}

const char *Span::ContAlreadyFilled::what() const throw()
{
  return "This vector is already filled";
}

const char *Span::NotEnoughtElementsToSpan::what() const throw()
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
