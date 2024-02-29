/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:28:23 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 19:11:31 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "../inc/AAnimal.hpp"
#include "../inc/Brain.hpp"

class Cat : public AAnimal {
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