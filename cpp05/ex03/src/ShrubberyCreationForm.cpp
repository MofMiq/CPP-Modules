/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:48:34 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/21 18:48:35 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    //std::cout << "\033[32mShrubberyCreationForm default constructor called\033[0m" << std::endl;
    //this->_target = "None";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    //std::cout << "\033[32mShrubberyCreationForm default constructor called\033[0m" << std::endl;
    this->_target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec())
{
    //std::cout << "\033[32mShrubberyCreationForm copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "\033[31mShrubberyCreationForm destructor called\033[0m" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    //std::cout << "\033[32mShrubberyCreationForm copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->setSign(rhs.getSign());
        this->_target = rhs._target;
    }
    return *this;
}

/*Al usar el método c_str() de std::string para obtener una representación de const
char* de la cadena tipo std::string */

void ShrubberyCreationForm::action(void) const
{
    std::ofstream file((this->_target + "_shrubbery").c_str());
    
    if (!file)
        std::cerr << "Error: Failed to create " << this->_target << "_shrubbery file" << std::endl;
    
    file << "               ,@@@@@@@,\n";
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
    file << "       |o|        | |         | |\n";
    file << "       |.|        | |         | |\n";
    file << "     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_\n";
    file.close();
    return;
}
