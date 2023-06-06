#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string secret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->secret = secret;
}

Contact::Contact()
{}

Contact::~Contact()
{
    std::cout << "DESTRUCTOR CALLED" << std::endl;
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setSecret(std::string secret)
{
    this->secret = secret;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}

std::string Contact::getLastName()
{
    return this->lastName;
}

std::string Contact::getNickname()
{
    return this->nickname;
}

std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

std::string Contact::getSecret()
{
    return this->secret;
}
