/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:43:12 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/08 12:34:17 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i)
{
  std::cout << i << std::endl;
}

int main()
{
  std::list<int>                      lst1;

  lst1.push_back(10);
  lst1.push_back(23);
  lst1.push_back(3);
  lst1.push_back(17);
  lst1.push_back(20);

  for_each(lst1.begin(), lst1.end(), displayInt);

  return 0;
}