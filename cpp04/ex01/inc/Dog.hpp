/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:26:56 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 14:13:55 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Dog : public Animal {
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog& rhs);
        virtual ~Dog();

        Dog& operator=(const Dog& rhs);

        void makeSound() const;
};

#endif