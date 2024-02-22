/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 13:31:35 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
    Point a(-1, -1);
    Point b(8, -1);
    Point c(-1, 8);
    Point p(2, 3);

    if (a == b || a == c || b == c)
    {
        std::cout << "That's not a triangle" << std::endl;
        return 1;
    }

    if (bsp(a, b, c, p))
        std::cout << "✅ Point" << p << " is inside of the triangle" << std::endl;
    else
        std::cout << "❌ Point" << p << " outside of the triangle" << std::endl;
    
    p = Point(10, 2);
    if (bsp(a, b, c, p))
        std::cout << "✅ Point" << p << " is inside of the triangle" << std::endl;
    else
        std::cout << "❌ Point" << p << " is outside of the triangle" << std::endl;
    
    p = Point(-1, -1);
    //p = Point(3, -1);
    //p = Point(-1, 3);
    //p = Point(2, 5);
    //p = Point(5, 2);
    if (bsp(a, b, c, p))
        std::cout << "✅ Point" << p << " is inside of the triangle" << std::endl;
    else
        std::cout << "❌ Point" << p << " is outside of the triangle" << std::endl;
    
    return 0;
}
