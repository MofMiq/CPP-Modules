/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:48:31 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/21 18:48:32 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    //std::cout << "\033[32mRobotomyRequestForm default constructor called\033[0m" << std::endl;
    this->_target = "None";
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    //std::cout << "\033[32mRobotomyRequestForm default constructor called\033[0m" << std::endl;
    this->_target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec())
{
    //std::cout << "\033[32mRobotomyRequestForm copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "\033[31mRobotomyRequestForm destructor called\033[0m" << std::endl;
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    std::cout << "\033[32mRobotomyRequestForm copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->setSign(rhs.getSign());
        this->_target = rhs._target;
    }
    return *this;
}

/*La función rand() genera un número entero pseudoaleatorio entre 0 y RAND_MAX, un valor definido en
la biblioteca que es al menos 32767.
La función srand(time(0)) se utiliza para inicializar el generador de números aleatorios en C++. Si
no se llama a srand(), rand() generará la misma secuencia de números cada vez que se ejecute el programa.
Al pasar time(NULL) a srand(), estás utilizando el tiempo actual como semilla, lo que significa que la
secuencia de números generada por rand() será diferente cada vez que se ejecute el programa,*/

void RobotomyRequestForm::action(void) const
{
    srand(time(NULL));
    int i = rand() % 2;

    std::cout << "[Drilling noise]..." << std::endl;
    if (i == 1)
        std::cout << this->_target << " has succesfully robotomiezed" << std::endl;
    else
        std::cout << "The robotomy process for " << this->_target << " has failed" << std::endl;
    return;
}
