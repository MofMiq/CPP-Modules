/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:39:17 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 15:58:12 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>

const T& max(const T& a, const T& b) //lo hacemos constantes y referencias para evitar copias y peor rendimiento
{
  return (a > b) ? a : b;
}

int foo(int x)
{
  std::cout << "Long computing time" << std::endl;
  return x;
}

int main()
{
  std::cout << max<int>(3, 9) << std::endl;
  std::cout << max<float>(12.63, 9.9) << std::endl;
  std::cout << max<std::string>("hello", "world!") << std::endl;
  std::cout << max<char>('z', 'a') << std::endl;

  int a = 21;
  int b = 42;

  std::cout << "Max of " << a << " and " << b << " is " << max<int>(a, b) << std::endl; //Explicit instanciation
  std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl; //Implicit instanciation

  int res = max<int>(foo(a), foo(b)); //Explicit instanciation
  std::cout << "Max of " << a << " and " << b << " is " << res << std::endl;
}