/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:20:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:39 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria()
{
    //std::cout << "\033[32mAMateria constructor called\033[0m" << std::endl;
    return;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
    //std::cout << "\033[32mAMateria constructor called\033[0m" << std::endl;
    return;
}

AMateria::AMateria(const AMateria& rhs)
{
    //std::cout << "\033[32mAMateria copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return;
}

AMateria::~AMateria()
{
    //std::cout << "\033[31mAMateria destructor called\033[0m" << std::endl;
    return;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    //std::cout << "\033[32mAMateria copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

const std::string& AMateria::getType() const
{
    return this->_type;
}
