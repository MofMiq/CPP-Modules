/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.cpp.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:13:57 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 16:46:10 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T = float> //Default type: sirve para que si no precisamos el tipo en el codigo, va a usar el tipo float de forma predeterminada
class Vertex
{
  public:
    Vertex(const T& x, const T& y, const T& z) : _x(x), _y(y), _z(z) { }
    ~Vertex(void) { }

    const T& getX(void) const { return this->_x; }
    const T& getY(void) const { return this->_y; }
    const T& getZ(void) const { return this->_z; }

  private:

    const T _x;
    const T _y;
    const T _z;

    Vertex(void);
};

template<typename T>
std::ostream& operator<<(std::ostream& o, const Vertex<T>& v)
{
  std::cout.precision(1);
  o << std::setiosflags(std::ios::fixed);
  o << "Vertex( ";
  o << v.getX() << " , ";
  o << v.getY() << " , ";
  o << v.getZ();
  o << " )";
  return o;
}