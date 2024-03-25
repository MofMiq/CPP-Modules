/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:21:40 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 12:21:48 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void dump_32bits_integer(const int n);
void dump_64bits_double(const double z);

int main()
{
    int     a = 42;             //Reference value

    double  b = a;              //Implicit conversion cast
    double  c = (double)a;      //Explicit conversion cast

    double  d = a;              //Implicit promotion -> Ok
    int     e = d;              //Implicit demotion -> hazardeous
    int     f = (int)d;         //Explicit demotion -> Ok, you're in  change

    dump_32bits_integer(a);

    dump_64bits_double(b);
    dump_64bits_double(c);

    dump_64bits_double(d);
    dump_32bits_integer(e);
    dump_32bits_integer(f);

    return 0;
}

/*
    double b = a; -> Esto es un ejemplo de casting implicito. La variable a es un entero 
    y se esta asignando a b, que es un double. C automaticamente convierte el entero a
    double. Esto se llama "promocion" porque se está convirtiendo un tipo de menor 
    presicion (int) a uno de mayor precision (double).

    double c = (double)a; -> Este es un ejemplo de casting explicito. Aqui, estas diciendo
    explicitamente a C que convierta a a double antes de asignarlo a c. En este caso, el 
    resultado es el mismo que en el ejemplo anterior, pero el casting explicito es una
    buena practica cuando quieres asegurarte de que la conversion se realiza especialmente
    cuando la promocion automatica no ocurre.

    int e = d; -> Este es un ejemplo de "democion" implicita. Estas asignando un double a 
    un int. Esto puede ser peligroso porque el double puede tener un valor que no puede ser
    representado por un int (por ejemplo, puede ser demasiado grande o puede tener una
    parte fraccionaria), y la democion puede resultar en una perdida de datos.

    int f = (int)d; -> Este es un ejemplo de democion explicita. Estas diciendo explicitamente
    a C que convierta d a int. Esto todavia puede resultar en una perdida de datos si d
    no puede ser representado por un int, pero al menos estas haciendo la democion de 
    manera consciente.
*/