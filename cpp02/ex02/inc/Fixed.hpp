/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:55 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/20 13:22:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed& rhs);
        ~Fixed();

        bool operator>(const Fixed& rhs);
        bool operator<(const Fixed& rhs);
        bool operator>=(const Fixed& rhs);
        bool operator<=(const Fixed& rhs);
        bool operator==(const Fixed& rhs);
        bool operator!=(const Fixed& rhs);
        
        Fixed& operator=(const Fixed& rhs);
        Fixed operator+(const Fixed& rhs);
        Fixed operator-(const Fixed& rhs);
        Fixed operator*(const Fixed& rhs);
        Fixed operator/(const Fixed& rhs);

        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;
        
        //static Fixed& min(Fixed& n1, Fixed& n2);
        //static /*const*/ Fixed& min(const Fixed& n1, const Fixed& n2);
        //static Fixed& max(Fixed& n1, Fixed& n2);
        //static /*const*/ Fixed& max(const Fixed& n1, const Fixed& n2);

    private:
        int _i;
        static const int _f = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& obj);

#endif