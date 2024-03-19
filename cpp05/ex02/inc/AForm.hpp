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
                    return "Grade of the form too high to be executed";
                }
        };
        class GradeTooLowException
        {
            public:
                const char* what() const throw ()
                {
                    return "Grade too low";
                }
        };
        class GradeInvalidException
        {
            public:
                const char* what() const throw ()
                {
                    return "Error: bad number: grade can't be greater than 150";
                }
        };
        class FormNotSignedException
        {
            public:
                const char* what() const throw ()
                {
                    return "Form can't be executed without being signed beforehand";
                }
        };
};

std::ostream& operator<<(std::ostream& o, const AForm& obj);

#endif