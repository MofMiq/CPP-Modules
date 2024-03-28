/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:21:11 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 12:28:55 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <stdint.h>
#include "../inc/Data.hpp"

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& rhs);
        ~Serializer();

        Serializer& operator=(const Serializer& rhs);
    
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

#endif