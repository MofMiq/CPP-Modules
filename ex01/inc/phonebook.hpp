/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:15:08 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/17 13:22:54 by marirodr         ###   ########.fr       */
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
    int     c;

public:
    int ft_exit(void);
    void ft_add(PhoneBook *book);
    void ft_search(PhoneBook *book);
};

#endif