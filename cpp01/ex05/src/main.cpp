/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:00:39 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/13 15:35:34 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

/* int main(int argc, char **argv)
{
    if (argc == 2)
    {
        return 0;
    }
    std::cout << "Error: usage: ./Harl <instruction>" std::endl << "Instructions can be: DEBUG, INFO, WARNING or ERROR" << std::endl;
    return (1)
} */

int main(void)
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR"); 
    harl.complain("JUAN");
    harl.complain("DEBUG");

    return 0;
}