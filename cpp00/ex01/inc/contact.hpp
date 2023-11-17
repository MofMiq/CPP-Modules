/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:21:58 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/16 16:41:37 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
	void ft_create(void);
	void ft_print_contact(void);
};