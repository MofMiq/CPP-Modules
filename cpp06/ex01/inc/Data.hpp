/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:30:31 by hunter            #+#    #+#             */
/*   Updated: 2024/03/28 12:34:28 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <string>

class Data
{
    private:
        int _nb;
        std::string _str;
    
    public:
        Data();
        Data(int nb, std::string str);
        Data(const Data& rhs);
        ~Data();

        Data& operator=(const Data& rhs);

        int getNb() const;
        std::string getStr() const;
};

std::ostream& operator<<(std::ostream& o, const Data& obj);

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define END "\033[0m"

#endif