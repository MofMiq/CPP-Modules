/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:56:24 by hunter            #+#    #+#             */
/*   Updated: 2024/04/22 11:32:23 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define END "\033[0m"

#include <iostream>
#include <stack>
#include <string>

class RPN
{
    private:
        std::stack<float>   _stack;
        std::string         _numbers;
        RPN();

    public:
        RPN(std::string& numbers);
        RPN(const RPN& rhs);
        ~RPN();

        RPN& operator=(const RPN& rhs);

        const std::stack<float>&    getStack() const;
        const std::string&          getNumbers() const;
        void                        calculate();
        bool                        isSign(std::string& c);
        float                       operation(std::string& token, float n1, float n2);

        class InvalidFormat : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif