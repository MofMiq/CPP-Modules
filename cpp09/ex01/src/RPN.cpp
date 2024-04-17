/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:00:43 by hunter            #+#    #+#             */
/*   Updated: 2024/04/17 21:12:36 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

RPN::RPN() : _stack()
{
  std::cout << GREEN << "RPN default constructor called" << END << std::endl;
  return ;
}

RPN::RPN(std::stack<int> stack) : _stack(stack)
{
  std::cout << GREEN << "RPN param constructor called" << END << std::endl;
  return ;
}

RPN::RPN(const RPN &rhs)
{
  std::cout << GREEN << "RPN copy constructor called" << END << std::endl;
  if (this != &rhs)
    this->_stack = rhs._stack;
  return ;
}

RPN::~RPN()
{
  std::cout << RED << "RPN destructor called" << END << std::endl;
  return ;
}

RPN &RPN::operator=(const RPN &rhs)
{
  std::cout << GREEN << "RPN copy assigment operator called" << END << std::endl;
  if (this != &rhs)
    this->_stack = rhs._stack;
  return *this;
}

const std::stack<int> &RPN::getStack() const
{
    return this->_stack;
}
