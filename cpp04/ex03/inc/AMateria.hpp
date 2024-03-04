/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:25:36 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/04 14:18:46 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "../inc/ICharacter.hpp"

class AMateria
{
    protected:
        const std::string _type;

    public:
        AMateria();
        AMateria(const std::string& type);
        AMateria(const AMateria& rhs);
        ~AMateria();

        AMateria& operator=(const AMateria& rhs);

        const std::string& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif