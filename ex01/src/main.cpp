/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:24:32 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/17 13:26:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

void ft_initial_msg(void)
{
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

    ft_initial_msg();
    while (1)
    {
        std::getline(std::cin, input);
        if (!input.compare("ADD"))
            book.ft_add(&book);
        else if (!input.compare("SEARCH"))
            book.ft_search(&book);
        else if (!input.compare("EXIT"))
            book.ft_exit();
        else
            std::cout << "Invalid command. Please enter a valid option." << input << std::endl;
    }
    //lala.ft_create();
    //lala.ft_print_contact();
    return (0);
}