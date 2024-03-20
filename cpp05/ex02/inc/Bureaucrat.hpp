/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:54 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/20 14:24:14 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

class AForm;

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

        void        signForm(AForm& f);
        void        executeForm(const AForm& f);

    class GradeTooHighException : public std::exception
    {
        public:
            const char* what () const throw ()
            {
                return "\033[35mGrade is already the highest!\033[0m";
            }
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char* what () const throw ()
            {
                return "\033[35mGrade is already the lowest!\033[0m";
            }
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj);

#endif