/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:53:02 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:57 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    //std::cout << "\033[32mCure constructor called\033[0m" << std::endl;
    this->_type = "cure";
    return;
}

Cure::Cure(const Cure& rhs) : AMateria()
{
    //std::cout << "\033[32mCure copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
        *this = rhs;
    return;
}

Cure::~Cure()
{
    //std::cout << "\033[31mCure destructor called\033[0m" << std::endl;
    return;
}

Cure& Cure::operator=(const Cure& rhs)
{
    //std::cout << "\033[32mCure copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

/*Cuando se utiliza el operador new con un tipo de objeto y argumentos de constructor,
como en new Cure(*this), se está creando un nuevo objeto en el heap y se está llamando
al constructor correspondiente. En este caso, se está llamando al constructor de copia
de Cure, que toma una referencia constante a otro objeto Cure (recuerda que como this
es un puntero al objeto actual, *this es el valor 'real' del objeto).
El puntero this apunta al objeto actual, por lo que *this es el objeto actual. Al pasar
*this al constructor de copia, se está creando una nueva copia del objeto actual en el
heap.*/

Cure* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
    return;
}