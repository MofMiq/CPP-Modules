/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:03:17 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/18 10:28:43 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

void test1()
{
    try
    {
        //Do some stuff here
        if (/*There's an error*/)
        {
            throw std::exception();
        }
        else
        {
            //Do some more stuff
        }
    }
    catch(const std::exception& e)
    {
        //Handle the error here
        std::cerr << e.what() << std::endl;
    }
}

void test2()
{
    //Do some stuff here
    if (/*there's an error*/)
    {
        throw std::exception();
    }
    else
    {
        //Do some more stuff
    }
}

void test3()
{
    try
    {
       test2();
    }
    catch(const std::exception& e)
    {
        //Handle the error here
        std::cerr << e.what() << '\n';
    }
}

void test4()
{
    /*Se define una clase de excepción personalizada llamada PEBKACException que hereda de std::exception.
    Esta clase tiene un método whate() que devuelve un mensaje de error personalizado.*/
    class  PEBKACException : public std::exception
    {
        public:
            virtual const char* whate() const throw()
            {
                return ("Problem exist between keyboard and chair");
            }
    };
    /*Luego, se llama a la función test3() dentro de un bloque try. Esto significa que el código está
    preparado para manejar cualquier excepción que test3() pueda manejar.*/
    try
    {
        test3();
    }
    /*Si test3() lanza una excepción de tipo PEBKACException, se captura en el primer bloque catch.*/
    catch(PEBKACException& e)
    {
        //Handle the fact that the user is an idiot
    }
    /*Además, tenemos otro bloque tipo catch para manejar otras excepciones de tipo std::exception, lo que
    permitirá que el código maneje diferentes tipos de excepciones de manera adecuada.*/
    catch(std::exception& e)
    {
        //Handle other exceprions that are like std::exception
    }
}
