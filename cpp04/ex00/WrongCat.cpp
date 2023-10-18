#include "WrongCat.hpp"
#include <string>
#include <iostream>

// Constructors
WrongCat::WrongCat() {
    std::cout << "Wrong Cat constructor called!\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal() {
    std::cout << "Wrong Cat copy contructor called!\n";
    (void)copy;
    this->type = "WrongCat";
}

// Destructor
WrongCat::~WrongCat() {
    std::cout << "Wrong Cat destructor called!\n";
}

// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign) {
	std::cout << "assign operator called\n";
    (void)assign;
	return *this;
}

// Member Funcs