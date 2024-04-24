/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:22:02 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/23 16:43:56 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"
#include <sstream>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <cstdlib>

PmergeMe::PmergeMe(std::string& numbers) : _numbers(numbers), _vector(), _list()
{
  std::cout << GREEN << "PmergeMe param constructor called" << END << std::endl;
  return ;
}

PmergeMe::PmergeMe(const PmergeMe& rhs)
{
  std::cout << GREEN << "PmergeMe copy constructor called" << END << std::endl;
  if (this != &rhs)
  {
    this->_numbers = rhs._numbers;
    this->_vector = rhs._vector;
    this->_list = rhs._list;
  }
  return ;
}

PmergeMe::~PmergeMe()
{
  std::cout << RED << "PmergeMe destructor called" << END << std::endl;
  return ;
}

PmergeMe &PmergeMe::operator=(const PmergeMe& rhs)
{
  std::cout << GREEN << "PmergeMe copy assigment operator called" << END << std::endl;
  if (this != &rhs)
  {
    this->_numbers = rhs._numbers;
    this->_vector = rhs._vector;
    this->_list = rhs._list;
  }
  return *this;
}

std::vector<int> PmergeMe::getVector() const
{
  return this->_vector;
}

std::list<int> PmergeMe::getList() const
{
  return this->_list;
}

bool  PmergeMe::checkArg()
{
  std::istringstream nb(this->_numbers);
  std::string token;

  try
  {
    if (this->_numbers.empty())
      throw EmptyCont();
    while (nb >> token)
    {
      if (!std::isdigit(static_cast<char>(token[0])))
        throw NotNumericArgs();
    }
    return true;
  }
  catch (const NotNumericArgs& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
  }
  catch (const EmptyCont& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
  }
  return false;
}

void  PmergeMe::printCont(int i) const
{
  if (i == 0)
    std::cout << GREEN << "Before: ";
  else
    std::cout << PURPLE << "After: ";
  std::vector<int>::const_iterator it = this->_vector.begin();
  for (; it != this->_vector.end(); ++it)
    std::cout << *it << " ";
  std::cout << END << std::endl;
}

void PmergeMe::printTime(size_t size, int i, double time) //refes
{
  std::cout << YELLOW << "Time to process a range of " << size << " elemtens with std::";
  if (i == 0)
    std::cout << "vector<int> : ";
  else
    std::cout << "list<int> : ";
  std::cout << std::fixed << std::setprecision(6) << time << " us" << END << std::endl;
}

template <typename T>
void  mergeSort(T& vector)
{
  if (vector.size() < 2)
    return ;
  typename T::iterator mid = vector.begin();
  std::advance(mid, vector.size() / 2);
  
  T left(vector.begin(), mid);
  T right(mid, vector.end());

  mergeSort(left);
  mergeSort(right);

  std::merge(left.begin(), left.end(), right.begin(), right.end(), vector.begin());
}

void PmergeMe::sort()
{
  if (!this->checkArg())
    return ;

  std::string copy = this->_numbers;
  std::istringstream nb(this->_numbers);
  std::string token;
  clock_t start = clock();

  try
  {
    while (nb >> token)
      this->_vector.push_back(std::atoi(token.c_str()));
    if (this->_vector.size() < 2)
      throw InvalidSize();
  }
  catch (const InvalidSize& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return ;
  }

  this->printCont(0);
  mergeSort(this->_vector);

  clock_t end = clock();
  double diff = static_cast<double>(end - start) / CLOCKS_PER_SEC;
  this->printCont(1);
  this->printTime(this->_vector.size(), 0, diff);

  start = clock();
  std::istringstream nb2(copy);
  while (nb2 >> token)
    this->_list.push_back(std::atoi(token.c_str()));
  mergeSort(this->_list);

  end = clock();
  diff = static_cast<double>(end - start) / CLOCKS_PER_SEC;
  this->printTime(this->_list.size(), 1, diff);
}

const char* PmergeMe::NotNumericArgs::what() const throw()
{
  return "Error: argument must be only numbers";
}

const char* PmergeMe::InvalidSize::what() const throw()
{
  return "Error: container must have at least 2 numbers to be sorted";
}

const char* PmergeMe::EmptyCont::what() const throw()
{
  return "Error: container is empty";
}
