#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "../inc/AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& rhs);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

        void action(void) const;
};

#endif