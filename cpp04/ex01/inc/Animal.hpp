/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:08:01 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:23:10 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& rhs);
        virtual ~Animal();

        Animal& operator=(const Animal& rhs);

        virtual void makeSound(void) const;

        std::string getType(void) const;
        void setType(std::string newType);
};

#endif