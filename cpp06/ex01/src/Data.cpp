/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:08:23 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 12:34:59 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"
#include <iostream>

Data::Data() : _nb(42), _str("Hello world!")
{
    std::cout << GREEN << "Data default constructor called\033[0m" << END << std::endl;
    return ;

}

Data::Data(int nb, std::string str) : _nb(nb), _str(str)
{
    std::cout << GREEN << "Data param constructor called\033[0m" << END << std::endl;
    return ;

}

Data::Data(const Data &rhs)
{
    std::cout << GREEN << "Data copy constructor called\033[0m" << END << std::endl;
    if (this != &rhs)
        *this = rhs;
    return ;
}

Data::~Data()
{
    std::cout << GREEN << "Data destructor called\033[0m" << END << std::endl;
    return ;
}

Data &Data::operator=(const Data &rhs)
{
    std::cout << GREEN << "Data assignment copy operator called\033[0m" << END << std::endl;
    if (this != &rhs)
    {
        this->_nb = rhs.getNb();
        this->_str = rhs.getStr();
    }
    return *this;
}

int Data::getNb() const
{
    return this->_nb;
}

std::string Data::getStr() const
{
    return this->_str;
}

std::ostream& operator<<(std::ostream& o, const Data& obj)
{
    o << YELLOW << "Data number: " << obj.getNb() << " , Data string: " << obj.getStr() << END << std::endl;
    return o;
}
