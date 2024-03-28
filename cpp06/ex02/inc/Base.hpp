/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:39:23 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 14:02:19 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

class Base
{
    public:
        virtual ~Base();

        Base* generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

#define RED "\033[31m"
#define END "\033[0m"

#endif