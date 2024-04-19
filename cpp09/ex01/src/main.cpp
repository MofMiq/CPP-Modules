/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:59:05 by hunter            #+#    #+#             */
/*   Updated: 2024/04/19 15:59:00 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"
#include <algorithm>

void print_stack(const std::stack<float>& stack)
{
    std::stack<float> copy = stack;
    while (!copy.empty())
    {
        std::cout << "stack: " << copy.top() << std::endl;
        copy.pop();
    }
}

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        std::string str = std::string(argv[1]);
        RPN obj(str);
        obj.calculate();
        return 0;
    }
    std::cout << "Error: usage: ./RPN <numbers>" << std::endl;
    return 1;
}