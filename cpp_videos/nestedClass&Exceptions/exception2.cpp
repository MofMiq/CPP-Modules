/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:52:42 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/18 10:33:22 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int divide(int num, int denom)
{
    if (denom == 0)
        throw std::invalid_argument("El denominador no puede ser 0"); // throw "El denominador no puede ser 0";
    if (denom == 1)
        throw std::invalid_argument("Are you serious?"); // una tonteria para probar
    return num / denom;
}

int main ()
{
    try
    {
        std::cout << divide(10, 1) << std::endl;
    }
    /* Si se lanza una excepción dentro del bloque try, la ejecución del programa
    se desvía a un bloque catch correspondiente. En este caso, el bloque catch
    captura cualquier excepción que sea de tipo std::exception o que herede de
    std::exception. No es necesario usar std::exception pero es buena practica
    ya que proporciona el metodo what() */
    catch (const std::exception& e) //catch (const char* e)
    {
        /* Dentro del bloque catch, se maneja la excepción. En este caso, se
        imprime un mensaje de error que incluye la descripción de la excepción,
        que se obtiene llamando al método e.what(). */
        std::cerr << "Se atrapó una excepción: " << e.what() << std::endl; // << e <<
    }
    return 0;
}