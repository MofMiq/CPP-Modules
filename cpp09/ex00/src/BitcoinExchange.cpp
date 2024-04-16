/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:50:25 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/16 12:27:18 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"
#include <iomanip>

BitcoinExchange::BitcoinExchange() : _database()
{
  std::cout << GREEN << "BitcoinExchange default constructor called" << END << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange(std::map<std::string, float> database) : _database(database)
{
  std::cout << GREEN << "BitcoinExchange param constructor called" << END << std::endl;
  return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
  std::cout << GREEN << "BitcoinExchange copy constructor called" << END << std::endl;
  if (this != &rhs)
    this->_database = rhs._database;
  return ;
}

BitcoinExchange::~BitcoinExchange()
{
  std::cout << RED << "BitcoinExchange destructor called" << END << std::endl;
  return ;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
  std::cout << GREEN << "BitcoinExchange assigment operator copy called" << END << std::endl;
  if (this != &rhs)
    this->_database = rhs._database;
  return *this;
}

const std::map<std::string, float> &BitcoinExchange::getDatabase() const
{
  return this->_database;
}

const char *BitcoinExchange::NegativeNumber::what() const throw()
{
  return "Error: not a positive number";
}

const char *BitcoinExchange::BadInput::what() const throw()
{
  return "Error: bad input";
}

const char *BitcoinExchange::OutLimitInteger::what() const throw()
{
  return "Error: too large a number";
}

std::ostream& operator<<(std::ostream& o, const BitcoinExchange& obj)
{
  for (std::map<std::string, float>::const_iterator it = obj.getDatabase().begin(); it != obj.getDatabase().end(); ++it)
    o << YELLOW << "map[" << it->first << "]: " << std::fixed << std::setprecision(2) << it->second << std::endl;
  o << END;
  return o;
}
