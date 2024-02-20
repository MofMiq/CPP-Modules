/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/20 19:02:06 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
    Fixed   a;
    Fixed   const b(Fixed(5.05f) * Fixed(2));
    //Fixed   res(b / a);
    //std::cout << res << std::endl;
    //const Fixed   c(Fixed(8) + b);


    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    //std::cout << c << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

/*     std::cout << "Min: " << Fixed::min(a, b) << std::endl;
    std::cout << "Max: " << Fixed::max(a, c) << std::endl;
    std::cout << "Min: " << Fixed::min(a, c) << std::endl;
    std::cout << "Max: " << Fixed::max(c, b) << std::endl;
    std::cout << "Min: " << Fixed::min(c, b) << std::endl; */

/*     if (a == c)
        std::cout << "a y c son iguales" << std::endl;
    if (a != c)
        std::cout << "a y c NO son iguales" << std::endl;
    if (a > c)
        std::cout << "a mayor que c" << std::endl;
    if (a < c)
        std::cout << "a menor que c" << std::endl;
    if (a >= c)
        std::cout << "a mayor/igual que c" << std::endl;
    if (a <= c)
        std::cout << "a menor/igual que c" << std::endl; */

/*     Fixed res;
    res = c + b; //el operador + crea un objeto temporal con el resultado de a + b, despues se llama a operador de asignacion de copia y cuando se completa la asignacion, ese objeto temporal ya no se necesita y se destruye -> res = Fixed(12)
    std::cout << "[SUMA] " << res << std::endl;
    res = c - b;
    std::cout << "[RESTA] " << res << std::endl;
    res = c * b;
    std::cout << "[MULTIPLICACION] " << res << std::endl;
    res = c / b;
    std::cout << "[DIVISION] " << res << std::endl; */
    
    return 0;
}
