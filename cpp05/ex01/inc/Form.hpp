/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:29:30 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/20 14:31:19 by marirodr         ###   ########.fr       */
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

        class GradeTooHighException
        {
            public:
                const char* what() const throw ()
                {
                    return "Error: bad number: grade can't be lower than 1";
                }
        };
        class GradeTooLowException
        {
            public:
                const char* what() const throw ()
                {
                    return "Error: bad number: grade can't be greater than 150";
                }
        };
};

std::ostream& operator<<(std::ostream& o, const Form& obj);

#endif