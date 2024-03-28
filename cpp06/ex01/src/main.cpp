/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:14:51 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 13:30:01 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"
#include <iostream>

void printMsg(Data* ptr, Data& data)
{
    if (ptr == &data)
        std::cout << GREEN << "Deserialization succesfull\n" << END << "ptr memory adress: " << ptr << ", data memory adress: " << &data << std::endl;
    else
        std::cout << RED << "Deserialization failed\n" << END << "ptr memory adress: " << ptr << ", data memory adress: " << &data << std::endl;
    return ;
}

int main()
{
    Data* data = new Data(12, "I like unicorns!");

    uintptr_t raw = Serializer::serialize(data);
    Data* data2 = Serializer::deserialize(raw);
    
    std::cout << *data << *data2;

    //printMsg(ptr, *data);
/*     
    raw = Serializer::serialize(&data2);
    ptr = Serializer::deserialize(raw);

    printMsg(ptr, data2);
    
    //Forzar un error
    uintptr_t badRaw = 12345;
    Data* badPtr = Serializer::deserialize(badRaw);

    printMsg(badPtr, data); */
    
    delete data;
    
    return 0;
}