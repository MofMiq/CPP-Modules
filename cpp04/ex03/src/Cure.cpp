/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:53:02 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 17:29:26 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure() : AMateria(type)
{
    std::cout << "\033[32mCure constructor called\033[0m" << std::endl;
    this->_type = "cure";
    return;
}

Cure::Cure(const Cure& rhs)
{
    std::cout << "\033[32mCure copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return;
}

Cure::~Cure()
{
    std::cout << "\033[31mCure destructor called\033[0m" << std::endl;
    return;
}

Cure& Cure::operator=(const Cure& rhs)
{
    std::cout << "\033[32mCure copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

Cure* Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}