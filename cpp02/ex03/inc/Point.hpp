/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:59:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/22 13:21:44 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "../inc/Fixed.hpp"

class Point {
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& rhs);
        ~Point();
    
        Point& operator=(const Point& rhs);
        bool operator==(const Point& rhs) const;

        Fixed getX(void) const;
        Fixed getY(void) const;

    private:
        const Fixed _x;
        const Fixed _y;
};

std::ostream& operator<<(std::ostream& o, const Point& obj);

#endif