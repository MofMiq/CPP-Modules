/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:23:18 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/23 16:43:40 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

std::string matrixToString(char** argv)
{
  std::string str;
  for (int i = 1; argv[i]; i++)
  {
    str += argv[i];
    if (argv[i + 1])
      str += " ";
  }
  return str;
}

int main(int argc, char **argv)
{
  if (argc >= 2)
  {
    std::string str = matrixToString(argv);
    PmergeMe  obj(str);
    obj.sort();
    return 0;
  }
  std::cout << RED << "Error: usage: ./PmergeMe <numbers>" << END << std::endl;
  return 1;
}