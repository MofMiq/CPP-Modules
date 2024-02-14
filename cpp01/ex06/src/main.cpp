/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:00:39 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/14 19:31:56 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        harl.complain(argv[1]);
        return 0;
    }
    std::cout << "Error: usage: ./harlFilter <instruction>" << std::endl;
    return 1;
}