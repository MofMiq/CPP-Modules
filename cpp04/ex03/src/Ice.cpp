/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:51:19 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 20:06:11 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    //std::cout << "\033[32mIce constructor called\033[0m" << std::endl;
    this->_type = "ice";
    return;
}

Ice::Ice(const Ice& rhs) : AMateria()
{
    //std::cout << "\033[32mIce copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return;
}

Ice::~Ice()
{
    //std::cout << "\033[31mIce destructor called\033[0m" << std::endl;
    return;
}

Ice& Ice::operator=(const Ice& rhs)
{
    //std::cout << "\033[32mIce copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

Ice* Ice::clone() const
{
    return new Ice();
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}