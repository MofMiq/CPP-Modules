/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamicCast.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:10:34 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 16:57:03 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent                  {public: virtual ~Parent(void) {}};
class Child1 : public Parent  {};
class Child2 : public Parent  {};

class Unrelated               {};

int main()
{
  Child1      a;                              //Reference value
  Parent*     b = &a;                         //Implicit upcast -> Ok
  
  //Explicit downcast -> Suspens...
  Child1*     c = dynamic_cast<Child1 *>(b);
  if (c == NULL)
    std::cout << "Conversion is NOT Ok" << std::endl;
  else
    std::cout << "Conversion is Ok" << std::endl;

  //Explicit downcast -> Suspens...
  try
  {
    Child2& d = dynamic_cast<Child2 &>(*b);
    std::cout << "Conversion is Ok" << std::endl;
  }
  catch(std::bad_cast& e)
  {
    std::cout << "Conversion is NOT Ok" << std::endl;
    return 1;
  }
  
  return 0;
}