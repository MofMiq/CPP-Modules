/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:49:52 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 19:09:34 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "\033[32mCat default constructor called\033[0m" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    return;
}

Cat::Cat(const Cat& rhs) : AAnimal()
{
    std::cout << "\033[32mCat copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "\033[31mCat Destructor called\033[0m" << std::endl;
    return;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "\033[32mCat copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "\033[33m*Miau miau!!!*\033[0m" << std::endl;
    return ;
}