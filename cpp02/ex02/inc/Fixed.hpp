/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:13:55 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/20 17:18:14 by marirodr         ###   ########.fr       */
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

        bool operator>(const Fixed& rhs) const; //estos operadores necesitan ser const para que cuando queramos comparar dos objetos constante no tengamos problemas. De no ser asi, no admitiria que el objeto de la izquierda sea const. en definitiva, estamos indicando la funcion no modificara eel etado del objeto Fixed al que se aplica
        bool operator<(const Fixed& rhs) const;
        bool operator>=(const Fixed& rhs) const;
        bool operator<=(const Fixed& rhs) const;
        bool operator==(const Fixed& rhs) const;
        bool operator!=(const Fixed& rhs) const;
        
        Fixed& operator=(const Fixed& rhs);
        Fixed operator+(const Fixed& rhs) const;
        Fixed operator-(const Fixed& rhs) const;
        Fixed operator*(const Fixed& rhs) const;
        Fixed operator/(const Fixed& rhs) const;

        Fixed operator++(int);  //postdecremento: devuelven el valor original antes del cambio. pasamos un int por parametro sin "nombrar" simplemente porque es la menra de indicar que se trata de la version post-decremento del operador.
        Fixed operator--(int);  //postdecremento: devuelven el valor original antes del cambio. pasamos un int por parametro sin "nombrar" simplemente porque es la menra de indicar que se trata de la version post-decremento del operador.
        Fixed& operator++(void);    //preincremento: devuelve la referencia al objeto modificado
        Fixed& operator--(void);    //preincremento: devuelve la referencia al objeto modificado

        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;
        
        static Fixed& min(Fixed& n1, Fixed& n2);
        static const Fixed& min(const Fixed& n1, const Fixed& n2); //siempre que pasemos objectos constantes por parametros, nuestra funcion debe devolver una referencia const
        static Fixed& max(Fixed& n1, Fixed& n2);
        static const Fixed& max(const Fixed& n1, const Fixed& n2);

    private:
        int _i;
        static const int _f = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& obj);

#endif