/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:59:04 by hunter            #+#    #+#             */
/*   Updated: 2024/02/21 21:04:35 by hunter           ###   ########.fr       */
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

#endif