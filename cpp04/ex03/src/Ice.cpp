/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:51:19 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 17:29:35 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria(type)
{
    std::cout << "\033[32mIce constructor called\033[0m" << std::endl;
    this->_type = "ice";
    return;
}

Ice::Ice(const Ice& rhs)
{
    std::cout << "\033[32mIce copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return;
}

Ice::~Ice()
{
    std::cout << "\033[31mIce destructor called\033[0m" << std::endl;
    return;
}

Ice& Ice::operator=(const Ice& rhs)
{
    std::cout << "\033[32mIce copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

Ice* Ice::clone() const
{
    return new Ice;
}
void Ice::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
    return;
}