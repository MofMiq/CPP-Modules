/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:08:33 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/17 13:44:50 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook()
{
    PhoneBook::c = 0;
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
    if (book->c < 8)
    {
        book->contatcs[book->c].ft_create();
        book->c++;
        std::cout << "book.c = " << book->c << std::endl;
    }
    //if (book.c > 8)
    // borrar el contacto mas antiguo es decir el 0
}
void PhoneBook::ft_search(PhoneBook *book)
{
    int i = 0;

    //if there isn't any contact yet, control it with message
    //std::cout << "en ft_search nombre del primer contacto: " << book->contatcs[0].ft_get_name() << std::endl;
    if (book->contatcs[0].ft_get_name() == "")
    {
        std::cout << "There aren't any contact saved yet to display" << std::endl;
        return ;
    }
    std::cout << "index\t|\tfirst name\t|\tlast name\t|\tnickname" << std::endl;
    while (i <= book->c)
    {
        std::cout << i << "\t|\t";
        book->contatcs[i].ft_search_format();
        i++;
    }
}
