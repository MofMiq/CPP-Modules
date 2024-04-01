/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:14:51 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/01 11:10:08 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"
#include <iostream>

int main()
{
    Data data;

    data._nb = 12;
    data._str = "Hello world!";

    uintptr_t raw = Serializer::serialize(&data);
    Data* data2 = Serializer::deserialize(raw);
    
    std::cout << "Memory address: " << &data << ", data nb: " << data._nb << ", data str: " << data._str << std::endl;
    std::cout << "Memory address: " << data2 << ", data nb: " << data2->_nb << ", data str: " << data2->_str << std::endl;

    data._nb *= 4;

    std::cout << "Memory address: " << &data << ", data nb: " << data._nb << ", data str: " << data._str << std::endl;
    std::cout << "Memory address: " << data2 << ", data nb: " << data2->_nb << ", data str: " << data2->_str << std::endl;
    
    return 0;
}