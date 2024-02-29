/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:26:56 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 19:11:34 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "../inc/AAnimal.hpp"
#include "../inc/Brain.hpp"

class Dog : public AAnimal {
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