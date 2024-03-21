/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:29:30 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/21 17:53:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "../inc/Bureaucrat.hpp"

class Form
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeRequired;
        const int           _gradeExecution;
    public:
        Form();
        Form(const std::string name, const int gradeReq, const int gradeExec); //bool no hacce falta porque por defecto esta false, tal y commo nos piden
        Form(const Form& rhs);
        ~Form();

        Form& operator=(const Form& rhs);

        std::string getName() const;
        bool getSign() const;
        int getGradeReq() const;
        int getGradeExec() const;

        void setSign(bool status);

        bool beSigned(const Bureaucrat& b);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw ();
        };
};

std::ostream& operator<<(std::ostream& o, const Form& obj);

#endif