/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:08:01 by marirodr          #+#    #+#             */
/*   Updated: 2024/02/29 14:18:28 by marirodr         ###   ########.fr       */
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
        /* virtual  */~Brain();

        Brain& operator=(const Brain& rhs);
};

#endif