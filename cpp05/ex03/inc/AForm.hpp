/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:39:13 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/21 18:41:39 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include "../inc/Bureaucrat.hpp"

class AForm
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeSign;
        const int           _gradeExecution;
    public:
        AForm();
        AForm(const std::string name, const int gradeSign, const int gradeExec);
        AForm(const AForm& rhs);
        virtual ~AForm();

        AForm&          operator=(const AForm& rhs);

        std::string     getName() const;
        bool            getSign() const;
        int             getGradeSign() const;
        int             getGradeExec() const;

        void            setSign(bool status);

        bool            beSigned(const Bureaucrat& b);
        bool            execute(const Bureaucrat& b) const;
        virtual void    action(void) const = 0;

        class GradeExecTooHighException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class GradeSignTooHighException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class GradeInvalidException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
};

std::ostream& operator<<(std::ostream& o, const AForm& obj);

#endif