/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:31:22 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 16:10:21 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int main()
{
  int a = 42;                        //Reference value

  double  b = a;                     //Implicit promotion -> Ok
  int     c = b;                     //Implicit demotion -> Hell no
  int     d = static_cast<int>(b);     //Implicit demotion -> Ok, I obey

  return 0;
} */

//g++ -Wall -Werror -Wextra -Wno-unused -Wconversion

#include <iostream>

class Parent                  {};
class Child1 : public Parent  {};
class Child2 : public Parent  {};

class Unrelated               {};

int main()
{
  Child1      a;                              //Reference value
  
  Parent*     b = &a;                         //Implicit upcast -> Ok
  Child1*     c = b;                          //Implicit downcast -> Hell no
  Child2*     d = static_cast<Child2 *>(b);    //Explicit downcast -> Ok, I obey
  
  Unrelated*  e = static_cast<Unrelated *>(&a);  //Explicit conversion -> No

  return 0;
}

/*
El casteo estatico o static_cast en cpp es un operador de casteo que realiza
conversiones en timepo de compilacion. Se utiliza para conversiones que son seguras, 
como convertir un int a un double (promotion), o para realizar conversiones
explicitas que el programador sabe que son seguras, como convertir un puntero a una
superclase en un puntero a una subclase.
  Ej: double b = a;
      int d = static_cast<int>(b);

Tambien podemos usar el static_cast para realizar un downcast de un puntero Parent
a un puntero Child2. Esto es seguro solo si el objeto al que apunta b es realmente
de tipo Child2. si no es asi, el comportamiento es indefinido.

Es importante tener en cuenta que static_cast no realiza comprobaciones de seguridad
en tiempo de ejecucion, por lo que es responsabilidad del programador asegurarse de
que el casteo es seguro. Si necesitas una comprobacion de seguridad en timepo de
ejecicion, puedes usar, dynamic_cast en su lugar (aunque esto tiene un coste de rendimiento).
*/
