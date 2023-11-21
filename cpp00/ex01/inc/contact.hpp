/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:21:58 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/20 12:33:00 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
public:
	Contact();
	//Contact(char *_name, char *_last_name, char *_nickname, int *_phone_number, char *_secret);
	~Contact();

private:
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

public:
	std::string ft_get_input(void);
	std::string ft_get_name(void);
	void ft_create(void);
	void ft_print_contact(void);
	void ft_search_format(void);
	void ft_free_contact(void);
};

#endif