#include "PhoneBook.hpp"

std::string PhoneBook::trunc(std::string s)
{   
    if (s.size() > 10)
    {
        std::string truncated = s;
        truncated.resize(10);
        truncated.back() = '.';
        return truncated;
    }
    return s;
}

void PhoneBook::get_field_value(std::string *input, std::string field)
{
    std::cout << field << ": ";
    std::getline(std::cin, *input);
    while (input->empty())
    {
        std::cout << "field can not be empty" << std::endl;
        std::cout << field << ": ";
        std::getline(std::cin, *input);
    }
}

PhoneBook::PhoneBook()
{
    this->size = 0;
    this->oldest = 0;
}

PhoneBook::~PhoneBook()
{
    for(int i = 0; i < this->size; i++)
    {
        delete(this->contacts[i]);
    }
}

void PhoneBook::addContact()
{
    std::string     input;
    unsigned int    current;

    if (this->size == 8)
    {
        delete(this->contacts[oldest]);
        current = this->oldest;
        this->oldest++;
        this->size--;
    }
    else
        current = this->size;
    this->contacts[current] = new Contact();

    this->get_field_value(&input, "first name");
    this->contacts[current]->setFirstName(input);
    
    this->get_field_value(&input, "last name");
    this->contacts[current]->setLastName(input);

    this->get_field_value(&input, "nickname");
    this->contacts[current]->setNickname(input);

    this->get_field_value(&input, "phone number");
    this->contacts[current]->setPhoneNumber(input);

    this->get_field_value(&input, "darkest secret");
    this->contacts[current]->setSecret(input);

    this->size++;
}

void PhoneBook::printContact(unsigned int index)
{
    if (this->size == 0 || index >= this->size)
        std::cout << "Error: index out of range" << std::endl;
    else
    {
        std::cout << "first name: " << this->contacts[index]->getFirstName() << std::endl;
        std::cout << "last name: " << this->contacts[index]->getLastName() << std::endl;
        std::cout << "nickname: " << this->contacts[index]->getNickname() << std::endl;
        std::cout << "phone number: " << this->contacts[index]->getPhoneNumber() << std::endl;
        std::cout << "darkest secret: " << this->contacts[index]->getSecret() << std::endl;
    }
}

void PhoneBook::printList()
{
    for (int i = 0; i < this->size; i++)
    {
        std::string fn = this->trunc(this->contacts[i]->getFirstName());
        std::string ln = this->trunc(this->contacts[i]->getLastName());
        std::string nn = this->trunc(this->contacts[i]->getNickname());

        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << fn << "|";
        std::cout << std::setw(10) << ln << "|";
        std::cout << std::setw(10) << nn;
        std::cout << std::endl;
    }
}