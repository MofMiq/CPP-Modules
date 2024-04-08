/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:43:12 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/08 10:42:04 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main()
{
  std::list<int>                      lst1;
  std::map<std::string, IOperation*>  map1;
  std::vector<int>                    v1;
  std::vector<int>                    v1(42, 100);

  lst1.push_back(1);
  lst1.push_back(17);
  lst1.push_back(42);

  map1["opA"] = new OperationA;
  map1["opB"] = new OperationB;

  std::list<int>::const_iterator      it;
  std::list<int>::const_iterator      ite = lst1.end();

  for (it = lst1.begin(); it != ite; ++it)
    std::cout << *it << std::endl;

  return 0;
}