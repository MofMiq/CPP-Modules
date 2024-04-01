/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:27:34 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 17:29:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pair.cpp.tpp"

int main()
{
  Pair<int, int> p1(12, 23);
  Pair<std::string, float> p2("pi", 23.3f);
  Pair<float, bool> p3(1.2f, true);
  Pair<bool, bool> p4(true, true);

  std::cout << p1 << std::endl;
  std::cout << p2 << std::endl;
  std::cout << p3 << std::endl;
  std::cout << p4 << std::endl;

  return 0;
}