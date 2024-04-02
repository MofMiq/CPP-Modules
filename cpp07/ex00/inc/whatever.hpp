/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:17:33 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/02 13:13:00 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

/* La forma mas comun de trabajar con funciones templates es declarar y definir la
funcion en el mismo archivo (header). Esto es porque el compilador necesita ver la
definicion completa de la funcion template en el momento de la compilacion para 
generar el codigo para cada tipo de dato con el que se usa la funcion. */

template <typename T>
void         swap(T& a, T& b)
{
  T tmp;

  tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
const T&     min(const T& a, const T& b)
{
  return (a < b ? a : b);
}

template <typename T>
const T&     max(const T& a, const T& b)
{
  return (a > b ? a : b);
}

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define END "\033[0m"

#endif