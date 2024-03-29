/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/20 14:31:09 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
    Bureaucrat  bob;
    Bureaucrat  jim("Jim", 5);
    Form        a1("A1-H5", 5, 2);
    Form        b3("B3-P7", -5, 9);

    std::cout << bob << jim << a1 << b3;
    bob.signForm(a1);
    jim.signForm(a1);
    jim.signForm(a1);
    jim.signForm(b3);

    std::cout << a1 << b3;

    return 0;
}