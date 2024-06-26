/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:29:37 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/23 13:55:24 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define PURPLE "\033[34m"
#define END "\033[0m"

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <exception>

class PmergeMe {
  private:
    std::string       _numbers;
    std::vector<int>  _vector;
    std::list<int>    _list;
    PmergeMe();

  public:
    PmergeMe(std::string& numbers);
    PmergeMe(const PmergeMe& rhs);
    ~PmergeMe();

    PmergeMe& operator=(const PmergeMe& rhs);

    std::vector<int>  getVector() const;
    std::list<int>    getList() const;

    bool  checkArg();
    void  printCont(int i) const;

    void  printTime(size_t size, int i, double time);
  
    void  sort();

    class NotNumericArgs : std::exception
    {
      public:
        const char* what() const throw();
    };
  
    class InvalidSize : std::exception
    {
      public:
        const char* what() const throw();
    };

    class EmptyCont : std::exception
    {
      public:
        const char* what() const throw();
    };

};

#endif