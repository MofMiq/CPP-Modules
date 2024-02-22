/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:19:40 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 13:19:53 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool checkDiagonalLine(const Point& a, const Point& b, const Point& p)
{
    Fixed l;
    Fixed r;

    l = p.getY() - a.getY();
    r = (p.getX() - a.getX()) * ((b.getY() - a.getY()) / (b.getX() - a.getX()));

    if (l == r)
        return false;
    return true;
}

bool checkStraightLine(const Point& a, const Point& b, const Point& p)
{
    if ((p.getX() == a.getX() && p.getX() == b.getX()) && (a.getY() <= p.getY()) && p.getY() <= b.getY())
        return false;
    if ((p.getY() == a.getY() && p.getY() == b.getY()) && (a.getX() <= p.getX()) && p.getX() <= b.getX())
        return false;
    return true;
}

bool checkVertexEdges(const Point& a, const Point& b, const Point& c, const Point& p)
{
    if (a == p || b == p || c == p)
        return false;
    if (!checkStraightLine(a, b, p) || !checkStraightLine(a, c, p) || !checkStraightLine(b, c, p))
        return false;
    if (!checkDiagonalLine(a, b, p) || !checkDiagonalLine(a, c, p) || !checkDiagonalLine(b, c, p))
        return false;
    return true;
}
