#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook *phoneBook = new PhoneBook();
    std::string cmd;

    while (1)
    {
        std::getline(std::cin, cmd);
        if (cmd.compare(0, 4, "ADD") == 0)
        {
            phoneBook->addContact();
        }
        else if (cmd.compare(0, 7, "SEARCH") == 0)
        {
            std::string index;
            phoneBook->printList();
            std::cout << "index: ";
            std::cin >> index;
            phoneBook->printContact(std::stoi(index, NULL));
        }
        else if (cmd.compare(0, 5, "EXIT") == 0)
        {
            delete(phoneBook);
            return (0);
        }
    }
    return (0);
}