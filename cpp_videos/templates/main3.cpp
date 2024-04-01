/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:24:43 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 16:26:42 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vertex.cpp.tpp"

int main()
{
  Vertex<int> v1(12, 23, 34);
  Vertex<> v2(12, 23, 34);

  std::cout << v1 << std::endl;
  std::cout << v2 << std::endl;

  return 0;
}