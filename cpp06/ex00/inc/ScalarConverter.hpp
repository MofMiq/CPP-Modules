/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:02:05 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 10:19:43 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

#include <iostream>
#include <limits.h>
#include <cmath>
#include <string>
#include <sstream>
#include <stdlib.h>

enum e_dataType {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    PSF,
    PSD,
    INVALID
};

class ScalarConverter
{
    /*Al declarar el constructor privado evitamos que la clase pueda ser instanciada
    fuera de la clase. Esto es util con ciertos patrones de diseño, como el patron Singleton,
    donde solo quieres permitir una unica instancia de la clase.
    Ademas, tambien se utiliza para prevenir la creacion de objetos si la clase solo
    contiene metodos estaticos. El metodo estatico convert() se podrá usar sin instanciar la clase.*/
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& rhs);
        ~ScalarConverter();

        ScalarConverter& operator=(const ScalarConverter& rhs);
    
    public:
        static void convert(const std::string str);
};

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

#endif

/*
    -> -inff y -inf: representan el "menos infinito". Se utliza cuando un numero es
    demasiado pequeño para ser representado en el sistema de punto flotante del pc.
    -> +inff y +inf: representan el "más infinito". Se utliza cuando un numero es
    demasiado grande para ser representado en el sistema de punto flotante del pc.
    -> nan: representa "Not a Number". Se utiliza para representar resultados de
    operaciones matematicas indefinidas, como la division por cero.
*/