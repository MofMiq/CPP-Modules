/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/21 21:14:51 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
    Point a(1, 1);
    Point b(1, 6);
    Point c(6, 1);
    Point inside(2, 3);
    Point ouside(10, 2);
    Point vertex(6, 1); //darle una vuelta a esto mañana

    if (bsp(a, b, c, inside))
        std::cout << "Point is inside of the triangle" << std::endl;
    else
        std::cout << "Point is ouside of the triangle" << std::endl;
    
    if (bsp(a, b, c, ouside))
        std::cout << "Point is inside of the triangle" << std::endl;
    else
        std::cout << "Point is ouside of the triangle" << std::endl;
    
    if (bsp(a, b, c, vertex))
        std::cout << "Point is inside of the triangle" << std::endl;
    else
        std::cout << "Point is ouside of the triangle" << std::endl;
    
    return 0;
}
