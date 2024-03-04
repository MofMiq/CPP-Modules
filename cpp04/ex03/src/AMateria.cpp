/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:20:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 14:22:30 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("")
{
    std::cout << "\033[32mAMateria constructor called\033[0m" << std::endl;
    return;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
    std::cout << "\033[32mAMateria constructor called\033[0m" << std::endl;
    return;
}

AMateria::AMateria(const AMateria& rhs)
{
    std::cout << "\033[32mAMateria copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

AMateria::~AMateria()
{
    std::cout << "\033[31mAMateria destructor called\033[0m" << std::endl;
    return;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    std::cout << "\033[32mAMateria copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

const std::string& AMateria::getType() const
{
    return this->_type;
}
