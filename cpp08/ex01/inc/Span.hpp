/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:18:34 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/10 11:32:45 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define PURPLE "\033[34m"
#define END "\033[0m"

#include <stdexcept>
#include <algorithm>
#include <vector>

class Span
{
  private:
    unsigned int      _size;
    std::vector<int>  _cont;
    bool              _flag;

  public:
    Span();
    Span(unsigned int N);
    Span(const Span& rhs);
    ~Span();

    Span& operator=(const Span& rhs);

    void  addNumber(int n);
    int   shortestSpan();
    int   longestSpan();
    void  fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    unsigned int            getSize() const;
    const std::vector<int>& getCont() const;
    bool                    getFlag() const;

    class ContAlreadyFilled : std::exception
    {
      public:
        const char* what() const throw();
    };

    class NotEnoughtElementsToSpan : std::exception
    {
      public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& o, const Span& obj);

#endif

/*
Acceso aleatorio: Los vectores permiten el acceso aleatorio a sus elementos, lo que significa
que puedes acceder a cualquier elemento en cualquier posición en tiempo constante O(1).

Redimensionamiento dinámico: A diferencia de los arrays nativos de C++, los vectores pueden
cambiar su tamaño en tiempo de ejecución. Si se agregan elementos más allá de su capacidad actual,
se redimensionan automáticamente.

Inserción y eliminación eficiente al final: Los vectores permiten la inserción y eliminación
de elementos al final en tiempo constante O(1). Sin embargo, la inserción o eliminación en
posiciones que no sean el final puede ser costosa, ya que puede requerir el desplazamiento
de elementos.

Uso de iteradores: Los vectores pueden ser recorridos utilizando iteradores, lo que facilita
su manipulación con algoritmos de la biblioteca estándar de C++.

Seguridad de tipo: A diferencia de los arrays de C, los vectores garantizan la seguridad de
tipo, evitando errores comunes como el desbordamiento de buffer.

Almacenamiento contiguo: Los elementos de un vector se almacenan en ubicaciones contiguas en
la memoria, lo que puede mejorar la localidad de referencia y, por lo tanto, el rendimiento.
*/