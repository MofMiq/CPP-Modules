/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:50:25 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/17 16:53:28 by marirodr         ###   ########.fr       */
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

float BitcoinExchange::findValue(std::string& date, float& value) const
{
  std::map<std::string, float>::const_iterator it = this->_database.lower_bound(date);
  //std::cout << YELLOW << "En findValue: lower_bound() es: " << it->first << END << std::endl;
  if (it != this->_database.begin() && (it == this->_database.end() || it->first != date))
    --it;
  //std::cout << YELLOW << "En findValue: despues de restar es: " << it->first << END << std::endl;
  //std::cout << GREEN << "En findValue: res: " << it->second * value << END << std::endl;
  return it->second * value;
}

std::ostream& operator<<(std::ostream& o, const BitcoinExchange& obj)
{
  for (std::map<std::string, float>::const_iterator it = obj.getDatabase().begin(); it != obj.getDatabase().end(); ++it)
    o << YELLOW << "map[" << it->first << "]: " << std::fixed << std::setprecision(2) << it->second << std::endl;
  o << END;
  return o;
}
