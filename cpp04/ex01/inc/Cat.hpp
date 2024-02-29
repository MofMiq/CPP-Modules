/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:28:23 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 14:13:52 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "../inc/Animal.hpp"
#include "../inc/Brain.hpp"

class Cat : public Animal {
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& rhs);
        virtual ~Cat();

        Cat& operator=(const Cat& rhs);

        void makeSound() const;
};

#endif