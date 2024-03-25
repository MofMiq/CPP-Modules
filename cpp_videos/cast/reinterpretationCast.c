/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpretationCast.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:21:40 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 13:24:08 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    float    a = 420.042f;             //Reference value

    void*    b = &a;              //Implicit reinterpretation cast
    void*    c = (void *)&a;      //Explicit reinterpretation cast

    void*    d = &a;              //Implicit promotion -> Ok
    int*     e = d;              //Implicit demotion -> hazardeous
    int*     f = (int*)d;         //Explicit demotion -> Ok, you're in  change

    printf("%p, %f\n", &a, a);

    printf("%p\n", b);
    printf("%p\n", c);
    
    printf("%p\n", d);
    printf("%p, %d\n", e, *e);
    printf("%p, %d\n", f, *f);

    return 0;
}

/*
    El casting reinterpretativo tiene que ver con cambiar el tipo de puntero que apunta
    a una direccion de memoria.
    Los números de punto flotante se almacenan en un formato llamado IEEE 754, que tiene
    una sección para el signo, una para el exponente y una para la parte fraccionaria del
    número. Cuando interpretas esta representación como un entero, obtienes un número que
    no tiene relación aparente con el valor de punto flotante original, que es la representación
    binaria del número de punto flotante interpretada como si fuera un entero.

    void* b = &a; -> Aqui realizamos yn casting reinterpretatico implicito. Tomamos la 
    doreccion de a (que es un puntero a float) y se la asignamos a b, que es un puntero 
    a void. En C, un puntero void puede apuntar a cualquier tipo de dato.

    void* = (void*)&a; -> Aqui se realiza un casting reinterpretatico explicito. Tomamos
    la doreccion de a y explicitamente la convertimos a un puntero a void antes de asignarla a c.

    int* e = d; -> Aqui realizamos una democion implicita. Tomamos un puntero a void y lo
    asignamos a un puntero a int. Esto es peligroso porque asumes que el puntero a void
    realmente apunta a un int, lo cual no es necesariamente cierto. 

    int* f = (int*)d; -> Aqui realizamos una democion explicita. Tomamos un puntero a void y
    explicitamente lo convertimos a un puntero a int antes de asignarlo a f.

    En todos estos casos, estamos cambiando el tipo de puntero, pero no cambiamos la direccion
    de memoria a la que apunta. Esto significa que estamos reinterpretando los datos en esa
    direccion de memoria como un tipo de dato diferente. Esto puede ser util en algunas
    situaciones, pero tambien puede ser peligroso si no estas segura de que tipo de datos
    hay en la direccion de memoria a la que estas apuntando.
*/