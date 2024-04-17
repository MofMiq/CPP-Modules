/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:59:05 by hunter            #+#    #+#             */
/*   Updated: 2024/04/17 21:13:16 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        return 0;
    }
    std::cout << "Error: usage: ./RPN <numbers>" << std::endl;
    return 1;
}