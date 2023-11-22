/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:24:32 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/22 13:58:02 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

void ft_initial_msg(int i)
{
    if (i == 0)
        std::cout << "Welcome to the 80s and their unbelievable technology!" << std::endl;
    std::cout << "To use this PhoneBook, you have three options:" << std::endl;
    std::cout << " - ADD: save a new contact." << std::endl;
    std::cout << " - SEARCH: display a specific contact information." << std::endl;
    std::cout << " - EXIT: to exit the program." << std::endl;
}

int main(void)
{
    std::string input;
    PhoneBook book;

    ft_initial_msg(0);
    while (1)
    {
        std::getline(std::cin, input);
        if (!input.compare("ADD"))
            book.ft_add(&book);
        else if (!input.compare("SEARCH"))
            book.ft_display(&book);
        else if (!input.compare("EXIT"))
            book.ft_exit();
        else
            std::cout << "Invalid command. Please enter a valid option: ADD, SEARCH or EXIT" << std::endl;
        ft_initial_msg(1);
    }
    return (0);
}