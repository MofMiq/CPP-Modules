/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:28:23 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:27:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "../inc/WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& rhs);
        virtual ~WrongCat();

        WrongCat& operator=(const WrongCat& rhs);

        void makeSound() const;
};

#endif