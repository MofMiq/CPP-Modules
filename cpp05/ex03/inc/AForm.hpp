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
        ~AForm();

        AForm&          operator=(const AForm& rhs);

        std::string     getName() const;
        bool            getSign() const;
        int             getGradeSign() const;
        int             getGradeExec() const;

        void            setSign(bool status);

        bool            beSigned(const Bureaucrat& b);
        bool            execute(const Bureaucrat& b) const;
        virtual void    action(void) const = 0;

        class GradeTooHighException
        {
            public:
                const char* what() const throw ()
                {
                    return "\033[35mGrade of the form too high to be executed\033[0m";
                }
        };
        class GradeTooLowException
        {
            public:
                const char* what() const throw ()
                {
                    return "\033[35mGrade of the form too low to be executed\033[0m";
                }
        };
        class GradeInvalidException
        {
            public:
                const char* what() const throw ()
                {
                    return "\033[35mError: bad number: grade must be a number between 1 and 150\033[0m";
                }
        };
        class FormNotSignedException
        {
            public:
                const char* what() const throw ()
                {
                    return "\033[35mForm can't be executed without being signed beforehand\033[0m";
                }
        };
};

std::ostream& operator<<(std::ostream& o, const AForm& obj);

#endif