/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:08:01 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/01 12:03:07 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& rhs);
        ~Brain();

        Brain& operator=(const Brain& rhs);
};

#endif