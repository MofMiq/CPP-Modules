/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:14:51 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 13:36:43 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"
#include <iostream>

int main()
{
    Data* data = new Data(12, "I like unicorns!");

    uintptr_t raw = Serializer::serialize(data);
    Data* data2 = Serializer::deserialize(raw);
    
    std::cout << *data << *data2;
    
    delete data;
    
    return 0;
}