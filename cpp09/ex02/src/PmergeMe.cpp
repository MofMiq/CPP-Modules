/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:22:02 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/23 12:47:01 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"
#include <sstream>
#include <ctime>
#include <iomanip>

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

void PmergeMe::printTime(size_t size, int i, double time) //refes
{
  std::cout << YELLOW << "Time to process a range of " << size << " elemtens with std::";
  if (i == 0)
    std::cout << "vector<int> : ";
  else
    std::cout << "list<int> : ";
  std::cout << std::fixed << std::setprecision(6) << time << " us" << END << std::endl;
}

bool  PmergeMe::checkArg()
{
  if (this->_numbers.empty())
    throw EmptyCont();

  std::istringstream nb(this->_numbers);
  std::string token;

  try
  {
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

void PmergeMe::sortVector()
{
  if (!this->checkArg())
    return ;

  std::istringstream nb(this->_numbers);
  std::string token;
  clock_t start = clock();

  try
  {
    while (nb >> token)
      this->_vector.push_back(std::atoi(token.c_str()));
    if (this->_vector.size() < 2 || this->_vector.size() > 3000)
      throw InvalidSize();
  }
  catch (const InvalidSize& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return ;
  }

  this->printCont(this->_vector, 0);
  this->algoVector(this->_vector);

  clock_t end = clock();
  double diff = static_cast<double>(end - start) / CLOCKS_PER_SEC;
  this->printCont(this->_vector, 1);
  this->printTime(this->_vector.size(), 0, diff);
}

/*   static int i = 0;
  static int j = 0; */

void  PmergeMe::algoVector(std::vector<int>& vector)
{
  if (vector.size() < 2) //para salir de la recursividad
    return ;
  std::vector<int>::iterator mid = vector.begin();
  std::advance(mid, vector.size() / 2);
  
  std::vector<int> left(vector.begin(), mid);
  std::vector<int> right(mid, vector.end());

  this->algoVector(left);
  this->algoVector(right);

  std::merge(left.begin(), left.end(), right.begin(), right.end(), vector.begin());
}

void PmergeMe::sortList()
{
  std::istringstream nb(this->_numbers);
  std::string token;
  clock_t start = clock();

  try
  {
    while (nb >> token)
    {
      if (std::isdigit(static_cast<char>(token[0])))
        throw NotNumericArgs();
      //this->_list.push_back(std::atoi(token.c_str()));
    }
    if (this->_list.size() < 2 || this->_list.size() > 3000)
      throw InvalidSize();
    this->printCont(this->_list, 0);
  }
  catch (const NotNumericArgs& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return ;
  }
  catch (const InvalidSize& e)
  {
    std::cerr << RED << e.what() << END << std::endl;
    return ;
  }

  clock_t end = clock();
  double diff = static_cast<double>(end - start) / CLOCKS_PER_SEC;
  this->printCont(this->_list, 1);
  this->printTime(this->_list.size(), 1, diff);
}

const char* PmergeMe::NotNumericArgs::what() const throw()
{
  return "Error: argument must be only numbers";
}

const char* PmergeMe::InvalidSize::what() const throw()
{
  return "Error: container's size must be between 2 and 3000 numbers to sort";
}

const char* PmergeMe::EmptyCont::what() const throw()
{
  return "Error: container is empty";
}
