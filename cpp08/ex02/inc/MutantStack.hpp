/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:09 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/11 11:49:35 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <algorithm>
#include <stack>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define END "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack& rhs) : std::stack<T>(rhs) {};
    ~MutantStack() {};

    MutantStack& operator=(const MutantStack& rhs)
    {
      if (this != &rhs)
        std::stack<T>::operator=(rhs);
      return *this;
    };

    /*Como std::stack es un contenedor adaptador que se basa en otro contenedor subyacente
    (por defecto std::deque), necesitarás acceder a ese contenedor subyacente para
    proporcionar la funcionalidad de iteración. Puedes hacer esto utilizando la función
    miembro c de std::stack, que devuelve una referencia constante al contenedor subyacente.*/
    
    iterator begin()
    {
      return this->c.begin();
    }

    iterator end()
    {
      return this->c.end();
    }
};

#endif

/*typedef: Esta es una palabra clave en C++ que se utiliza para definir un alias
para un tipo existente.

typename: Esta es otra palabra clave en C++ que se utiliza para indicar que el
nombre que sigue es un tipo. Es necesario aquí porque
std::stack<T>::container_type::iterator depende del parámetro de plantilla T, y
el compilador no puede saber a priori si container_type es un tipo o una variable estática.

std::stack<T>::container_type::iterator: Aquí estamos accediendo al tipo de
iterador del contenedor subyacente de std::stack<T>. std::stack<T>::container_type
es el tipo del contenedor subyacente, y ::iterator es el tipo de iterador de ese contenedor.

it: Este es el alias que estamos definiendo para el tipo de iterador del contenedor subyacente.*/