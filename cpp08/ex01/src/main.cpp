/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:29:21 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/09 16:43:37 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"
#include <iostream>

int main()
{
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp;

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  Span  obj1(sp);

  std::cout << obj1;
  obj1.addNumber(1);

  Span  empty;
  std::cout << empty;
  empty.addNumber(1);
  empty.shortestSpan();
  empty.longestSpan();

  size_t  n = 100;
  std::vector<int>  v(n);
  for (size_t i = 0; i < n; i++)
  {
    v[i] = i + 1;
  }

  Span  obj2(80);

  obj2.fillSpan(v.begin(), v.end());
  std::cout << obj2;

  return 0; 
}