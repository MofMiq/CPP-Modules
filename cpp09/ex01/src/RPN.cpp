/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:00:43 by hunter            #+#    #+#             */
/*   Updated: 2024/04/19 16:21:49 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"
#include <cstdlib>
#include <sstream>

RPN::RPN() : _stack(), _numbers("")
{
  std::cout << GREEN << "RPN default constructor called" << END << std::endl;
  return ;
}

RPN::RPN(std::string& numbers) : _stack(), _numbers(numbers)
{
  std::cout << GREEN << "RPN param constructor called" << END << std::endl;
  return ;
}

RPN::RPN(const RPN &rhs)
{
  std::cout << GREEN << "RPN copy constructor called" << END << std::endl;
  if (this != &rhs)
  {
    this->_stack = rhs._stack;
    this->_numbers = rhs._numbers;
  }
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
  {
    this->_stack = rhs._stack;
    this->_numbers = rhs._numbers;
  }
  return *this;
}

const std::stack<float> &RPN::getStack() const
{
  return this->_stack;
}

const std::string&  RPN::getNumbers() const
{
  return this->_numbers;
}

bool RPN::isSign(std::string& c)
{
  if (c == "+" || c == "-" || c == "*" || c == "/")
    return true;
  return false;
}

float RPN::operation(std::string& token, float n1, float n2)
{
  //std::cout << RED << "n1: " << n1 << " n2: " << n2 << END << std::endl;
  if (token == "+")
    return n1 + n2;
  else if (token == "-")
    return n1 - n2;
  else if (token == "*")
    return n1 * n2;
  else if (token == "/")
  {
    if (n2 == 0)
      throw std::runtime_error("Error: Division by zero");
    return n1 / n2;
  }
  return 0; //nunca llega
}

/*Un flujo de entrada de cadena se utiliza para realizar operaciones de
entrada (como la extracción de datos) en una cadena de la misma manera que
se realizarían en std::cin o en un archivo.
Cuando usas el operador >> para extraer datos de un flujo de entrada, por
defecto se extrae hasta el próximo espacio en blanco (espacio, tabulación,
nueva línea, etc.).
*/

void  RPN::calculate()
{
  std::istringstream nb(this->_numbers);
  std::string token;

  try
  {
    while (nb >> token)
    {
      if (std::isdigit(static_cast<char>(token[0])))
        this->_stack.push(std::atoi(token.c_str()));
      else if (this->isSign(token))
      {
        if (this->_stack.size() < 2)
          throw InvalidFormat();
        float n2 = this->_stack.top();
        this->_stack.pop();
        float n1 = this->_stack.top();
        this->_stack.pop();
        float res = this->operation(token, n1, n2);
        //std::cout << YELLOW << res << END << std::endl;
        this->_stack.push(res);
      }
      else
        throw InvalidFormat();
    }
    if (this->_stack.size() != 1)
      throw InvalidFormat();
    std::cout << this->_stack.top() << std::endl;
  }
  catch (const InvalidFormat& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
  }
}

const char* RPN::InvalidFormat::what() const throw()
{
  return ("Error: string format is incorrect\nMust be <number> <number> <sign> ...\nThere has to be one number more than a sign");
}