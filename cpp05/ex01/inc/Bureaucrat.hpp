/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hunter <hunter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:01:54 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/19 13:10:18 by hunter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

class Form;

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

        void        signForm(Form& f);

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