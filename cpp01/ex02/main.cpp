/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:43:51 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/08 12:21:59 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout <<  "Direccion de memoria de str: " << &str << std::endl;
    std::cout <<  "Direccion de memoria de stringPTR: " << &stringPTR << std::endl;
    std::cout <<  "Direccion de memoria de stringREF: " << &stringREF << std::endl;

    std::cout <<  "Valor de str: " << str << std::endl;
    std::cout <<  "Valor de stringPTR: " << *stringPTR << std::endl;
    std::cout <<  "Valor de stringREF: " << stringREF << std::endl;
    
    return 0;
}