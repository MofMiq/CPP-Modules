/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:23:12 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/02 10:59:08 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Template.cpp.tpp"
#include <iostream>

/* El operador :: se utiliza para especificar el ambito de una funcion o variable,
normalmente referidos a clases o namespaces. En este caso, donde el operador no tiene
nada delante y luego le sigue el nombre de la funcion - ::swap() - significa que se
esta llamanfo la funcion en el ambito global. Esto se hace para asegurarse que se
esta llamando a la version correcta de estas funciones, en caso de que existan otras
funciones con el mismo nombre en otros ambitos (ya existen std::min() y std::max()). */

int main()
{
  int a = 2;
  int b = 3;

  ::swap(a, b);
  std::cout << GREEN << "a = " << a << ", b = " << b << std::endl;
  std::cout << RED << "min(a, b) = " << ::min(a, b) << std::endl;
  std::cout << YELLOW << "max(a, b) = " << ::max(a, b) << std::endl << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);

  std::cout << GREEN << "c = " << c << ", d = " << d << std::endl;
  std::cout << RED << "min(c, d) = " << ::min(c, d) << std::endl;
  std::cout << YELLOW << "max(c, d) = " << ::max(c, d) << std::endl << std::endl;

  float e = 42.5f;
  float f = 21.1f;

  ::swap(e, f);

  std::cout << GREEN << "e = " << e << ", f = " << f << std::endl;
  std::cout << RED << "min(e, f) = " << ::min(e, f) << std::endl;
  std::cout << YELLOW << "max(e, f) = " << ::max(e, f) << std::endl << std::endl;

  double g = 66.5;
  double h = 66.5;

  ::swap(g, h);

  std::cout << GREEN << "g = " << g << ", h = " << h << std::endl;
  std::cout << RED << "min(g, h) = " << ::min(g, h) << std::endl;
  std::cout << YELLOW << "max(g, h) = " << ::max(g, h) << std::endl << std::endl;

  char i = 'A';
  char j = '*';

  ::swap(i, j);

  std::cout << GREEN << "i = " << i << ", j = " << j << std::endl;
  std::cout << RED << "min(i, j) = " << ::min(i, j) << std::endl;
  std::cout << YELLOW << "max(i, j) = " << ::max(i, j) << std::endl << std::endl << END;

  return 0; 
}