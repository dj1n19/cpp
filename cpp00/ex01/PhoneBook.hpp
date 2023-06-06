#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact         *contacts[8];
        unsigned int    size;
        unsigned int    oldest;
        
        std::string trunc(std::string s);
        void get_field_value(std::string *input, std::string field);

    public:
        PhoneBook();
        ~PhoneBook();

        void addContact();
        void printContact(unsigned int index);
        void printList();
};

#endif