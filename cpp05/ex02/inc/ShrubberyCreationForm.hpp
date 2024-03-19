#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "../inc/AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

        void action(void) const;
};

#endif