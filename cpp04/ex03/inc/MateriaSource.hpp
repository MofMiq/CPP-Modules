/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:13:37 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 19:38:48 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_H
# define MATERIA_H

#include "../inc/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria*   _slots[4];
        int         _count;
        
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& rhs);
        ~MateriaSource();

        MateriaSource& operator=(const MateriaSource& rhs);

        void learnMateria(AMateria* m);
        AMateria* createMateria(const std::string& type);
};

#endif