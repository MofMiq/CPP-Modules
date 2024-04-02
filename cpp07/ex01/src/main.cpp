/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:12:52 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/02 12:18:12 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main()
{
  int array[] = {1, 2, 3, 4, 5};
  size_t size = 5;

  ::iter(array, size, ::printInt);
  ::iter(array, size, ::printT<int>);
  std::cout << std::endl;
  ::iter(array, size, ::add<int>);
  ::iter(array, size, ::printT<int>);
  std::cout << std::endl;
  ::iter(array, size, ::sub<int>);
  ::iter(array, size, ::printT<int>);
  std::cout << "\n------------\n" << std::endl;

  float farray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

  //::iter(farray, size, printInt);
  ::iter(farray, size, ::printT<float>);
  std::cout << std::endl;
  ::iter(farray, size, ::add<float>);
  ::iter(farray, size, ::printT<float>);
  std::cout << std::endl;
  ::iter(farray, size, ::sub<float>);
  ::iter(farray, size, ::printT<float>);
  std::cout << "\n------------\n" << std::endl;

  char str[] = {'a', 'p', 'p', 'l', 'e'};

  //::iter(str, 5, printInt);
  ::iter(str, 5, ::printT<char>);
  std::cout << std::endl;
  ::iter(str, size, ::add<char>);
  ::iter(str, size, ::printT<char>);
  std::cout << std::endl;
  ::iter(str, size, ::sub<char>);
  ::iter(str, size, ::printT<char>);

  return 0;
}