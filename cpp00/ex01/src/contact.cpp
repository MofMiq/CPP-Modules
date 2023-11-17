#include "../inc/contact.hpp"

Contact::Contact()
{
    Contact::name = "";
    Contact::last_name = "";
    Contact::nickname = "";
    Contact::phone_number = "";
    Contact::secret = "";
}

Contact::~Contact()
{
}

std::string Contact::ft_get_input(void)
{
    std::string input;

    std::cin.clear();
    std::getline(std::cin, input);
    //std::cout << "en ft_get:input string es: " << input << std::endl;
    return (input);
}

void Contact::ft_create(void)
{
    std::cout << "Please enter a name: ";
    Contact::name = Contact::ft_get_input();
    std::cout << "Please enter a last name: ";
    Contact::last_name = Contact::ft_get_input();
    std::cout << "Please enter a nickname: ";
    Contact::nickname = Contact::ft_get_input();
    std::cout << "Please enter a phone number: ";
    Contact::phone_number = Contact::ft_get_input();
    std::cout << "Please enter the darkest number ;): ";
    Contact::secret = Contact::ft_get_input();
    std::cout << "The contact has been added sucssefully" << std::endl;
}

void Contact::ft_print_contact(void)
{
    std::cout << "Name: " << Contact::name << std::endl;
    std::cout << "Last name: " << Contact::name << std::endl;
    std::cout << "Nickname: " << Contact::name << std::endl;
    std::cout << "Phone number: " << Contact::name << std::endl;
    std::cout << "Darkest secret: " << Contact::name << std::endl;
}

//Contact::name.clear(). -> this will clear the string