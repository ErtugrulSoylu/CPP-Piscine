#include "Animal.hpp"
#include <string>
#include <iostream>

// Destructor
Animal::~Animal() {
    std::cout << "Animal destructor called!\n";
}

// Operators
Animal & Animal::operator=(const Animal &assign) {
	std::cout << "assign operator called\n";
    (void)assign;
	return *this;
}

// Member Funcs