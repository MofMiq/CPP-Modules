/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upcastAndDowncat.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:59:48 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 15:29:51 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent                  {};
class Child1 : public Parent  {};
class Child2 : public Parent  {};

int main()
{
  Child1    a;                //Reference value
  Parent*   b = &a;           //Implicit 'reinterpretation' cast
  Parent*   c = (Parent*)&a;  //Explicit 'reinterpretation' cast

  Parent*   d = &a;           //Implicit upcast -> Ok
  Parent*   e = d;            //Implicit downcast -> Hell no
  Parent*   f = (Child2*)d;   //Explicit downcast -> Ok, but really

  return 0;
}

/*
  El upcasting y el downcasting son conceptos de la poo, especificamente en el contexto de
  la herencia.

  Upcasting es el proceso de convertir una referencia de un tipo de subclase a una superclase.
  Es seguro y no requiere de una sintaxis explicita porque una subclase siempre es un tipo de
  superclase. Ej: Parent* d= &a; -> a es de tipo Child1 (subclase de Parent), y se esta 
  asignando a d que es un puntero a Parent.

  Downcast es el proceso de convertir una referencia de un tipo de superclase a una subclase. 
  Esto no es seguro, porque la superclase no puede tener todos los metodos y campos que la 
  subclase podria tener. Por lo tanto, se requiere una sintaxis explicita para hacerlo. Ej:
  Parent* f = (Child2*)d; -> Aqui, d es un puntero a Parent, y se está intentando asignar a f
  que es un puntero a Child2. Esto es un downcast. Es importante notar que aunque esto es
  sintacticamente correcto, puede llevar a comportamientos no definidos si d no apunta realmente
  a un objeto de tipo Child2.
*/