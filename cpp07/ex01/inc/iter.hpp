/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:04:36 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/02 12:16:12 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <string>
#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define END "\033[0m"

template <typename T, typename F>
void  iter(T* array, size_t size, F func)
{
  for (size_t i = 0; i < size; i++)
    func(array[i]);
}

void printInt(int& i)
{
  std::cout << "printInt: " << i << std::endl;
}

template <typename T>
void printT(T& t)
{
  std::cout << GREEN << "printT: " << t << END << std::endl;
}

template <typename T>
void add(T& t)
{
  t += 1;
  std::cout << RED << "add: " << t << END << std::endl;
}

template <typename T>
void sub(T& t)
{
  t -= 1;
  std::cout << YELLOW << "sub: " << t << std::endl;
}

#endif