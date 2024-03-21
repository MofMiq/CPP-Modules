#include "../inc/AForm.hpp"

AForm::AForm() : _name("Default"), _gradeSign(75), _gradeExecution(5)
{
    //std::cout << "\033[32mAForm default constructor called\033[0m" << std::endl;
    return ;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExecution(gradeExec)
{
    //std::cout << "\033[32mAForm param constructor called\033[0m" << std::endl;
    try
    {
        if (gradeSign < 1 || gradeExec < 1)
            throw GradeInvalidException();
        else if (gradeSign > 150 || gradeExec > 150)
            throw GradeInvalidException();
    }
    catch (const GradeInvalidException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return ;
}

AForm::AForm(const AForm &rhs) : _name(rhs.getName()), _gradeSign(rhs.getGradeSign()), _gradeExecution(rhs.getGradeExec())
{
    //std::cout << "\033[32mAForm copy constructor called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getSign();
    }
    return ;
}

AForm::~AForm()
{
    //std::cout << "\033[31mAForm destructor called\033[0m" << std::endl;
    return;
}

AForm &AForm::operator=(const AForm &rhs)
{
    //std::cout << "\033[32mAForm copy assignment operator called\033[0m" << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs.getSign();
    }
    return *this;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSign() const
{
    return this->_isSigned;
}

int AForm::getGradeSign() const
{
    return this->_gradeSign;
}

int AForm::getGradeExec() const
{
    return this->_gradeExecution;
}

void AForm::setSign(bool status)
{
    this->_isSigned = status;
}

bool AForm::beSigned(const Bureaucrat &b)
{
    try
    {
        if (this->_gradeSign < 1 || this->_gradeExecution < 1)
            throw GradeInvalidException();
        else if (this->_gradeSign > 150 || this->_gradeExecution > 150)
            throw GradeInvalidException();
        else if (this->_gradeSign < b.getGrade())
            throw GradeSignTooHighException();
        this->setSign(true);
    }
    catch (const GradeInvalidException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    catch (const GradeSignTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    return this->_isSigned;
}

bool    AForm::execute(const Bureaucrat& b) const
{
    try
    {
        if (!this->_isSigned)
            throw FormNotSignedException();
        else if (this->_gradeExecution < b.getGrade())
            throw GradeExecTooHighException();
        //this->action();
    }
    catch (const FormNotSignedException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    catch (const GradeExecTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
    return true;
}

std::ostream &operator<<(std::ostream &o, const AForm &obj)
{
    std::string status;
    if (obj.getSign())
        status = "True";
    else
        status = "False";
    o << "\033[35mAForm name: " << obj.getName() << " / signed: " << status << " / grade required to sign it: " << obj.getGradeSign() << " / grade to executed it: " << obj.getGradeExec() << "\033[0m" << std::endl;
    //o << "\033[35mAForm name: " << obj.getName() << " / signed: " << obj.getSign() << " / grade required to sign it: " << obj.getGradeReq() << " / grade to executed it: " << obj.getGradeExec() << "\033[0m" << std::endl;
    return o;
}
