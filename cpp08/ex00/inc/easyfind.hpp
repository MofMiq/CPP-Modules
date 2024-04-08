/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:27:37 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/08 13:36:48 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
void easyfind(const T& cont, int value);

class ValueNotFound : public std::exception
{
  public:
    const char* what() const throw();
};

#include "easyfind.tpp"

#endif