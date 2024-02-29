/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:21:38 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:24:55 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& rhs);
        virtual ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& rhs);

        void makeSound(void) const;

        std::string getType(void) const;
        void setType(std::string newType);
};

#endif