/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:00:39 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/13 18:08:42 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

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

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        int i = levelToInt(argv[1]);
        switch (i)
        {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
        return 0;
    }
    std::cout << "Error: usage: ./harlFilter <instruction>" << std::endl;
    return 1;
}