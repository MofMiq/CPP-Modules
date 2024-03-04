/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:45:15 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 17:13:37 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure& rhs);
        ~Cure();

        Cure& operator=(const Cure& rhs);

        virtual Cure* clone() const;
        virtual void use(ICharacter& target);

};

#endif