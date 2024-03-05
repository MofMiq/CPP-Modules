/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:25:36 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 12:55:06 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "../inc/ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        AMateria(const std::string& type);
        AMateria(const AMateria& rhs);
        virtual ~AMateria();

        AMateria& operator=(const AMateria& rhs);

        const std::string& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif