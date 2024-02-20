/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/20 14:49:20 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
    Fixed   a(10);
    //Fixed   const b(Fixed(5.05f) * Fixed(2));
    Fixed   b(2);


    std::cout << "a: " << a << std::endl;
/*     std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl; */
    
    std::cout << "b: " << b << std::endl;
    //std::cout << "Max: " << Fixed::max(a, b) << std::endl;

/*     if (a == b)
        std::cout << "a y b son iguales" << std::endl;
    if (a != b)
        std::cout << "a y b NO son iguales" << std::endl;
    if (a > b)
        std::cout << "a mayor que b" << std::endl;
    if (a < b)
        std::cout << "a menor que b" << std::endl;
    if (a >= b)
        std::cout << "a mayor/igual que b" << std::endl;
    if (a <= b)
        std::cout << "a menor/igual que b" << std::endl; */
    
/*     Fixed   c(a + b);
    std::cout << "[SUMA] c: " << c << std::endl;
    Fixed   d(a - b);
    std::cout << "[RESTA] d: " << d << std::endl;
    Fixed   e(a * b);
    std::cout << "[MULTIPLICACION] e: " << e << std::endl;
    Fixed   f(a / b);
    std::cout << "[DIVISION] f: " << f << std::endl; */

/*     Fixed res;
    res = a + b; //el operador + crea un objeto temporal con el resultado de a + b, despues se llama a operador de asignacion de copia y cuando se completa la asignacion, ese objeto temporal ya no se necesita y se destruye -> res = Fixed(12)
    std::cout << "[SUMA] res: " << res << std::endl;
    res = a - b;
    std::cout << "[RESTA] d: " << res << std::endl;
    res = a * b;
    std::cout << "[MULTIPLICACION] e: " << res << std::endl;
    res = a / b;
    std::cout << "[DIVISION] f: " << res << std::endl; */
    
    return 0;
}
