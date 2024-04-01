/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.cpp.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:00:53 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 17:30:43 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T, typename U> 
class Pair
{
  public:
    Pair<T, U>(const T& lhs, const U& rhs) : _lhs(lhs), _rhs(rhs) {
      std::cout << "Generic template" << std::endl;
      return;
    }
    ~Pair<T, U>(void) { }

    const T& fst(void) const { return this->_lhs; }
    const U& scd(void) const { return this->_rhs; }

  private:

    const T& _lhs;
    const U& _rhs;

    Pair<T, U>(void);
};

template <typename U>
class Pair<int, U>
{
  public:
    Pair<int, U>(int lhs, const U& rhs) : _lhs(lhs), _rhs(rhs) {
      std::cout << "Int partial specialization" << std::endl;
      return;
    }
    ~Pair<int, U>(void) { }

    int fst(void) const { return this->_lhs; }
    const U& scd(void) const { return this->_rhs; }

  private:
    int _lhs;
    const U& _rhs;

    Pair<int, U>(void);
};

template <>
class Pair<bool, bool>
{
  public:
    Pair<bool, bool>(bool lhs, bool rhs) {
      std::cout << "bool/bool specialization" << std::endl;
      this->_n = 0;
      this->_n |= static_cast<int>(lhs) << 0;
      this->_n |= static_cast<int>(rhs) << 1;
      return;
    }
    ~Pair<bool, bool>(void) { }

    bool fst(void) const { return this->_n & 0x001; }
    bool scd(void) const { return this->_n & 0x002; }

  private:
    bool _n;

    Pair<bool, bool>(void);
};

template< typename T, typename U>
std::ostream& operator<<(std::ostream& o, const Pair<T, U>& p)
{
  o << "Pair( " << p.fst() << ", " << p.scd() << " )";
  return o;
}


std::ostream& operator<<(std::ostream& o, const Pair<bool, bool>& p)
{
  o << std::boolalpha << "Pair( " << p.fst() << ", " << p.scd() << " )";
  return o;
}