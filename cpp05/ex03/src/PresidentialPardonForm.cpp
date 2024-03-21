#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    //std::cout << "\033[32mPresidentialPardonForm default constructor called\033[0m" << std::endl;
    this->_target = "None";
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    //std::cout << "\033[32mPresidentialPardonForm default constructor called\033[0m" << std::endl;
    this->_target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec())
{
    //std::cout << "\033[32mPresidentialPardonForm copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "\033[31mPresidentialPardonForm destructor called\033[0m" << std::endl;
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    //std::cout << "\033[32mPresidentialPardonForm copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->setSign(rhs.getSign());
        this->_target = rhs._target;
    }
    return *this;
}

void PresidentialPardonForm::action(void) const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    return;
}
