/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:51:59 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 13:20:12 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool checkDiagonalLine(const Point& a, const Point& b, const Point& p);
bool checkStraightLine(const Point& a, const Point& b, const Point& p);
bool checkVertexEdges(const Point& a, const Point& b, const Point& c, const Point& p);

Fixed abs(Fixed& nb)
{
    if (nb < 0)
        return  nb * -1;
    return nb;
}

Fixed auxArea(const Point& m, const Point& r1, const Point& r2)
{
    Fixed res;

    res = m.getX() * (r1.getY() - r2.getY());

    return  res;
}

Fixed triangleArea(const Point& a, const Point& b, const Point& c)
{
    Fixed area;

    area = (auxArea(a, b, c) + auxArea(b, c, a) + auxArea(c, a, b));

    return abs(area) / 2;
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    Fixed areaABC;
    Fixed areaABP;
    Fixed areaACP;
    Fixed areaBCP;

    areaABC = triangleArea(a, b, c);
    areaABP = triangleArea(a, b, point);
    areaACP = triangleArea(a, c, point);
    areaBCP = triangleArea(b, c, point);
    
    if (!checkVertexEdges(a, b, c, point))
        return false;
    if (areaABC == (areaABP + areaACP + areaBCP))
        return true;
    return false;
}