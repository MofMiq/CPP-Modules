/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:28 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/19 14:15:27 by hunter           ###   ########.fr       */
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