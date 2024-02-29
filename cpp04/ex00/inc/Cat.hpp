/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:28:23 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:23:26 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "../inc/Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat& rhs);
        virtual ~Cat();

        Cat& operator=(const Cat& rhs);

        void makeSound() const;
};

#endif