/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:01:55 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/09 11:14:45 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

const char* ValueNotFound::what() const throw()
{
  return "Value not found";
}

template <typename T>
void easyfind(const T& cont, int value)
{
  typename T::const_iterator it; //cada tipo de contenedor tiene su "propio" iterador, por tanto aqui tenemos que hacerlo dependiente del template

  it = std::find(cont.begin(), cont.end(), value);
  if (it == cont.end())
    throw ValueNotFound();
  std::cout << "Value " << value << " found" << std::endl;
  return ;
}

/*
cont.end() = "mas alla del final" tipo como NULL

forma alternativa:
for(auto it = cont.begin(); it != cont.end(); ++it) {

}


Los iteradores son una parte fundamental de la biblioteca estándar de C++ y proporcionan una forma de
acceder a los elementos de un contenedor (como std::vector, std::list, std::set, etc.) de manera
uniforme, independientemente del tipo de contenedor.

Además, el uso de un iterador en lugar de un entero tiene varias ventajas:

Generalidad: Los iteradores pueden ser utilizados con cualquier contenedor de la biblioteca estándar de
C++, mientras que los índices enteros sólo pueden ser utilizados con contenedores que soportan el acceso
aleatorio, como std::vector y std::array.

Seguridad: Los iteradores son seguros de usar. Si intentas desreferenciar un iterador no válido, obtendrás
un error en tiempo de compilación. Por otro lado, si intentas acceder a un índice fuera de los límites de
un contenedor usando un entero, el comportamiento es indefinido y puede resultar en un error en tiempo de 
ejecución.

Eficiencia: Para algunos contenedores, como std::list y std::set, el acceso a los elementos mediante
iteradores es más eficiente que el acceso mediante índices enteros.
*/