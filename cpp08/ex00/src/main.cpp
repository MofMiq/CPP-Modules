/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:28:32 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/08 13:44:45 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <list>
#include <vector>

int main()
{
  std::list<int>  lst;

  lst.push_back(42);
  lst.push_back(21);
  lst.push_back(13);
  lst.push_back(5);

  try
  {
    easyfind(lst, 21);
    easyfind(lst, 42);
    easyfind(lst, 5);
    easyfind(lst, 1);
  }
  catch(const ValueNotFound& e)
  {
    std::cerr << e.what() << " in lst<int>" << std::endl;
  }
  
  std::list<char>  lst2;

  lst2.push_back('a');
  lst2.push_back('b');
  lst2.push_back('c');
  lst2.push_back('d');

  try
  {
    easyfind(lst2, 'c');
    easyfind(lst2, 'b');
    easyfind(lst2, 'e');
  }
  catch(const ValueNotFound& e)
  {
    std::cerr << e.what() << " in lst<char>"  << std::endl;
  }
  
  std::vector<int>  vec;

  vec.push_back(42);
  vec.push_back(21);
  vec.push_back(13);
  vec.push_back(5);

  try
  {
    easyfind(vec, 42);
    easyfind(vec, 13);
    easyfind(vec, 1);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << " in vector<int>"  << '\n';
  }

  return 0;
}