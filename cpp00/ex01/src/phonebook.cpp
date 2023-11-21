/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:08:33 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/21 13:19:25 by marirodr         ###   ########.fr       */
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
    book->contatcs[book->c_con].ft_create();
    book->c_con++;
}
void PhoneBook::ft_display(PhoneBook *book)
{
    int i = 0;

    if (book->contatcs[0].ft_get_name().empty())
    {
        std::cout << "There aren't any contact saved yet to display" << std::endl;
        return ;
    }
    std::cout << "index  | first name | last name | nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    while (i < 8)
    {
        if (book->contatcs[i].ft_get_name().empty())
            break ;
        std::cout << i << "\t|";
        book->contatcs[i].ft_search_format();
        i++;
    }
    book->ft_search(book);
}

/*std::cin.fail() ->check if the previous input operation failed. This could be due to an 
inapropiate type of input, or an input that is out of range for the variable type.
In this case, for example, if we enter a letter instead of a integer, std::cin.fail() will
return 'true' because the input operation failed.
*/


void PhoneBook::ft_search(PhoneBook *book)
{
    int i  = -1;
    
    std::cout << "Please enter the index of the contact you want to display full information for." << std::endl;
    std::cin >> i;
    while (std::cin.fail() || i < 0 || i > 7 || book->contatcs[i].ft_get_name().empty())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter the index you of a contact that is already displayed on screen:" << std::endl;
        std::cin >> i;
    }
    book->contatcs[i].ft_print_contact();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return ;
}
