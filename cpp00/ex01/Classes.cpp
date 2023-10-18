#include "PhoneBook.hpp"

std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}

void    Contact::setDarkestSecret(std::string str) {
    this->darkestSecret = str;
}

void    PhoneBook::addOne(Contact Con) {
    this->Contacts[this->i % 8] = Con;
    this->i++;
}