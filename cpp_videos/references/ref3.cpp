#include <iostream>
#include <string>

class Student
{
    private:
        std::string _login;

    public:
        Student(std::string const &login) : _login(login)
        {

        }

        std::string&    getLoginRef()
        {
            return this->_login;
        }

        std::string const & getLoginRefConst() const
        {
            return this->_login;
        }

        std::string*    getLoginPtr()
        {
            return &(this->_login);
        }

        std::string const * getLoginPtrConst() const
        {
            return &(this->_login);
        }
};

int main(void)
{
    Student bob = Student("lala");
    Student const jim = Student("lolo");

    std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
    std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

    bob.getLoginRef() = "bububu";
    std::cout << bob.getLoginRefConst() << std::endl;

    *(bob.getLoginPtr()) = "bobby";
    std::cout << bob.getLoginRefConst() << std::endl;

    return 0;
}