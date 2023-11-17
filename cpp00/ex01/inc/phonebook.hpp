/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:15:08 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/16 15:38:59 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();

private:
    Contact contatcs[8];

public:
    void add(void);
};