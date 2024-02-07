/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classAndInstance.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:07:04 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/01 18:20:33 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classAndInstance.hpp"

Sample::Sample(void) {
    std::cout << "Constructor called" << std::endl;
    return ;
}

Sample::~Sample(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

int main() {
    Sample obj;
    std::cout << "Hola" << std::endl;
}
