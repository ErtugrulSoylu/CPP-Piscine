#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook() : i(0) {};
	Contact Contacts[8];
	void	addOne(Contact Con);
	int i;
};
#endif
