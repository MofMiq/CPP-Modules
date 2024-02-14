/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:01:10 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/14 19:23:39 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(void)
{
    std::cout << "\033[32m" << "Harl constructor called" << "\033[0m" << std::endl;    
}

Harl::~Harl(void)
{
    std::cout << "\033[31m" << "Harl destructor called" << "\033[0m" << std::endl;    
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;    
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;    
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;    
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;    
}

void Harl::complain(std::string level)
{
    void (Harl::*f[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = levelToInt(level);

    switch(i)
    {
        case 0:
            (this->*f[i])();
            i++;
        case 1:
            (this->*f[i])();
            i++;
        case 2:
            (this->*f[i])();
            i++;
        case 3:
            (this->*f[i])();
            i++;
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
    return ;
}

int levelToInt(std::string level)
{
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (lvl[i] == level)
            break ;
        i++;
    }
    return i;
}

/*          int j = i;
            while (j < 4)
            {
                (this->*f[j])();
                j++;
            }
            return ; */