#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string getDarkestSecret();
    void        setDarkestSecret(std::string _darkestSecret);
private:
    std::string darkestSecret;
};
#endif