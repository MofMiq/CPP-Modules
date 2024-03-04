/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:31:27 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/01 12:06:09 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[32mBrain default constructor called\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "";
    return;
}

Brain::Brain(const Brain& rhs)
{
    std::cout << "\033[32mBrain copy constructor called\033[0m" << std::endl;
    *this = rhs;
    return;
}

Brain::~Brain()
{
    std::cout << "\033[31mBrain Destructor called\033[0m" << std::endl;
    return;
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "\033[32mBrain copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}
