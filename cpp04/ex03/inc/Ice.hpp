/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:45:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 17:13:45 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& rhs);
        ~Ice();

        Ice& operator=(const Ice& rhs);

        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};

#endif