/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:55 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/19 18:43:08 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed& rhs);
        ~Fixed();

        Fixed& operator=(const Fixed& rhs);

        int getRawBits(void) const;
        void setRawBits(const int raw);

    private:
        int _i;
        static const int _f = 8; //los 8 bit menos significativos representan la parte fraccionaria
};

#endif