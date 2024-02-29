/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:08:01 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 19:10:21 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal& rhs);
        virtual ~AAnimal();

        AAnimal& operator=(const AAnimal& rhs);

        virtual void makeSound(void) const = 0;

        std::string getType(void) const;
        void setType(std::string newType);
};

#endif