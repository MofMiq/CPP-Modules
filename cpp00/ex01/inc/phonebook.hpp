/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:15:08 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/22 13:57:59 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();

private:
    Contact contatcs[8];
    int c_con;

public:
    int ft_exit(void);
    void ft_add(PhoneBook *book);
    void ft_display(PhoneBook *book);
    void ft_search(PhoneBook *book);
};

#endif