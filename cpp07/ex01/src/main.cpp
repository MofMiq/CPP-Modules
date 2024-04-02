/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:12:52 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/02 13:17:55 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main()
{
  int array[] = {1, 2, 3, 4, 5};
  size_t size = 5;

  ::iter(array, size, ::printInt);
  ::iter(array, size, ::printT<int>);
  std::cout << std::endl;
  ::iter(array, size, ::add<int>);
  ::iter(array, size, ::printT<int>);
  std::cout << std::endl;
  ::iter(array, size, ::sub<int>);
  ::iter(array, size, ::printT<int>);
  std::cout << "\n------------\n" << std::endl;

  float farray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

  //::iter(farray, size, printInt);
  ::iter(farray, size, ::printT<float>);
  std::cout << std::endl;
  ::iter(farray, size, ::add<float>);
  ::iter(farray, size, ::printT<float>);
  std::cout << std::endl;
  ::iter(farray, size, ::sub<float>);
  ::iter(farray, size, ::printT<float>);
  std::cout << "\n------------\n" << std::endl;

  char str[] = {'a', 'p', 'p', 'l', 'e'};

  //::iter(str, 5, printInt);
  ::iter(str, 5, ::printT<char>);
  std::cout << std::endl;
  ::iter(str, size, ::add<char>);
  ::iter(str, size, ::printT<char>);
  std::cout << std::endl;
  ::iter(str, size, ::sub<char>);
  ::iter(str, size, ::printT<char>);

  return 0;
}

/* class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
} */