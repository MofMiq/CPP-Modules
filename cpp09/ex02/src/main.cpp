/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:23:18 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/23 11:32:47 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int argc, char **argv)
{
  //check args
  //intanciate with argv[1]
  //time start
  //insert while checking isdigit (character and negative numbers)
  //print before 
  //check size + 3000
  //sort
  //time end
  // print after and time
  if (argc == 2)
  {
    std::string str = std::string(argv[1]);
    PmergeMe  obj(str);
    obj.sortVector();
    //obj.sortList();
    return 0;
  }
  std::cout << RED << "Error: usage: ./PmergeMe \"<numbers>\"" << END << std::endl;
  return 1;
}