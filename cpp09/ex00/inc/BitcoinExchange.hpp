/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:31:37 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/16 11:57:46 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <map>
#include <exception>
#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define PURPLE "\033[34m"
#define END "\033[0m"

class BitcoinExchange
{
  private:
    std::map<std::string, float>  _database;

  public:
    BitcoinExchange();
    BitcoinExchange(std::map<std::string, float> database);
    BitcoinExchange(const BitcoinExchange& rhs);
    ~BitcoinExchange();

    BitcoinExchange& operator=(const BitcoinExchange& rhs);

    const std::map<std::string, float>& getDatabase() const;

    class  NegativeNumber : public std::exception {
      public:
        const char* what() const throw ();
    };
    class  BadInput : public std::exception {
      public:
        const char* what() const throw ();
    };
    class  OutLimitInteger : public std::exception {
      public:
        const char* what() const throw ();
    };
};

std::ostream& operator<<(std::ostream& o, const BitcoinExchange& obj);

#endif