/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:27:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/10 18:43:06 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << YELLOW << "Top element: " << mstack.top() << END << std::endl;
  mstack.pop();
  std::cout << BLUE << "Size of the stack: " << mstack.size() << END << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  ++it;
  --it;

  int i = 0;
  while (it != ite)
  {
    std::cout << GREEN << "Stack[" << i << "]: " << *it << END << std::endl;
    ++it;
    ++i;
  }

  std::stack<int> s(mstack);
  std::cout << YELLOW << "Top element: " << s.top() << END << std::endl;
  std::cout << BLUE << "Size of the stack: " << s.size() << END << std::endl;

  MutantStack<int>  m2;
  std::cout << BLUE << "Size of the stack: " << m2.size() << END << std::endl;

  m2.push(4);
  m2.push(42);
  m2.push(91);
  m2.push(1232);

  std::cout << YELLOW << "Top element: " << m2.top() << END << std::endl;
  std::cout << BLUE << "Size of the stack: " << m2.size() << END << std::endl;

  m2.pop();
  std::cout << YELLOW << "Top element: " << m2.top() << END << std::endl;
  std::cout << BLUE << "Size of the stack: " << m2.size() << END << std::endl;

  MutantStack<int>::iterator it2 = m2.begin();
  i = 0;
  while (it2 != m2.end())
  {
    std::cout << GREEN << "m2[" << i << "]: " << *it2 << END << std::endl;
    ++it2;
    ++i;
  }

  MutantStack<int>  m3 = m2;
  std::cout << YELLOW << "Top element: " << m3.top() << END << std::endl;
  std::cout << BLUE << "Size of the stack: " << m3.size() << END << std::endl;

  MutantStack<int>  m4;
  std::cout << BLUE << "Size of the stack: " << m4.size() << END << std::endl;
  m4 = mstack;
  std::cout << YELLOW << "Top element: " << m4.top() << END << std::endl;
  std::cout << BLUE << "Size of the stack: " << m4.size() << END << std::endl;

  MutantStack<int>  m5;
  m5.push(89);
  m5.push(52);
  m5.push(36);
  m5.push(1);
  m5.push(199);

  MutantStack<int>::iterator it5 = m5.begin();
  i = 0;
  while (it5 != m5.end())
  {
    std::cout << GREEN << "m5[" << i << "]: " << *it5 << END << std::endl;
    ++it5;
    ++i;
  }

  std::list<int> lst;
  lst.push_back(89);
  lst.push_back(52);
  lst.push_back(36);
  lst.push_back(1);
  lst.push_back(199);

  std::list<int>::iterator lstart = lst.begin();
  std::list<int>::iterator lend = lst.end();
  i = 0;
  while (lstart != lend)
  {
    std::cout << GREEN << "lst[" << i << "]: " << *lstart << END << std::endl;
    ++lstart;
    ++i;
  }

  return 0;
}