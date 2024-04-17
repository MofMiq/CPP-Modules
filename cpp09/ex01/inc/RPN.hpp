/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:56:24 by hunter            #+#    #+#             */
/*   Updated: 2024/04/17 21:10:47 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define PURPLE "\033[34m"
#define END "\033[0m"

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> _stack;

    public:
        RPN();
        RPN(std::stack<int> stack);
        RPN(const RPN& rhs);
        ~RPN();

        RPN& operator=(const RPN& rhs);

        const std::stack<int>& getStack() const;
};

#endif