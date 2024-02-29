/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:26:56 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:23:24 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "../inc/Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog& rhs);
        virtual ~Dog();

        Dog& operator=(const Dog& rhs);

        void makeSound() const;
};

#endif