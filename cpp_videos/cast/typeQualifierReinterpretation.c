/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeQualifierReinterpretation.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:28:03 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 13:40:15 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
  int    a = 42;                        //Reference value

  int const*    b = &a;                 //Implicit type cualifier cast
  int const*    c = (int const *)&a;    //Explicit type cualifier cast

  int const*    d = &a;                 //Implicit promotion -> Ok
  int*     e = d;                       //Implicit demotion -> Hell no
  int*     f = (int*)d;                 //Explicit demotion -> Ok, I obey

  return 0;
}

/*
  int const* b = &a; -> Aquí estás realizando un casting implícito de calificador de tipo. Estás tomando la
  dirección de a (que es un puntero a int) y la estás asignando a b, que es un puntero a const int. Esto es
  seguro porque estás añadiendo un calificador const, lo que significa que no puedes modificar el valor al
  que apunta b.

  int const* c = (int const *)&a; -> Aquí estás realizando un casting explícito de calificador de tipo. Estás
  tomando la dirección de a y explícitamente la estás convirtiendo a un puntero a const int antes de asignarla a c.

  int* e = d; - Aquí estás realizando una "democión" implícita. Estás tomando un puntero a const int y lo
  estás asignando a un puntero a int. Esto es peligroso porque estás eliminando el calificador const, lo que
  significa que podrías modificar el valor al que apunta e, lo cual no es seguro si d apunta a un objeto constante.
  Esto directamente no compila.

  int* f = (int*)d; - Aquí estás realizando una "democión" explícita. Estás tomando un puntero a const int y
  explícitamente lo estás convirtiendo a un puntero a int antes de asignarlo a f.
*/