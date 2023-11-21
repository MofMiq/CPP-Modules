/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:08:33 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/20 18:39:44 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
    PhoneBook::c_con = 0;
}

PhoneBook::~PhoneBook()
{
}
int PhoneBook::ft_exit(void)
{
    //liberar todos los contactos, cómo no lo sé
    std::cout << "CHAO" << std::endl;
    exit(0);
}
void PhoneBook::ft_add(PhoneBook *book)
{
    if (book->c_con == 8)
        book->c_con = 0;
    //std::cout << "book->c = " << i << std::endl; //
    book->contatcs[book->c_con].ft_create();
    book->c_con++;
    std::cout << "i = " << book->c_con << std::endl; //
}
void PhoneBook::ft_display(PhoneBook *book)
{
    int i = 0;

    if (book->contatcs[0].ft_get_name() == "")
    {
        std::cout << "There aren't any contact saved yet to display" << std::endl;
        return ;
    }
    std::cout << "index  | first name | last name | nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    while (i < 8)
    {
        if (book->contatcs[i].ft_get_name() == "")
            break ;
        std::cout << i << "\t|";
        book->contatcs[i].ft_search_format();
        i++;
    }
    book->ft_search(book);
}

void PhoneBook::ft_search(PhoneBook *book)
{
    int i  = -1;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter the index you want to display full information contact" << std::endl;
    std::cin >> i;
    if (i >= 0 && i < 8)
    {
        if (book->contatcs[i].ft_get_name() != "")
        {
            book->contatcs[i].ft_print_contact();
            std::cin.ignore();
            return ;
        }
    }
    // else
    // {
    //     std::cin.clear();
    //     book->ft_search(book);
    // }
    // //bucle infitnito si le meto letras, señal o otra mierda
    // std::cout << "Please enter a valid index, one you alredy see un the screen" << std::endl;
    return ;
}
