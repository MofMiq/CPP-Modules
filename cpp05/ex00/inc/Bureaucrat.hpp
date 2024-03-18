/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:54 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/18 13:00:31 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, const int grade);
        Bureaucrat(const Bureaucrat& rhs);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat& rhs);

        const std::string   getName() const;
        int                 getGrade() const;

        void        incrementGrade();
        void        decrementGrade();

    class GradeTooHighException : public std::exception
    {
        public:
            const char* what () const throw ()
            {
                return "Grade is already the highest!";
            }
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char* what () const throw ()
            {
                return "Grade is already the lowest!";
            }
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj);

#endif