#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include "../inc/AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& rhs);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

        void action(void) const;
};

#endif