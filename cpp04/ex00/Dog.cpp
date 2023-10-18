#include "Dog.hpp"
#include <string>
#include <iostream>

// Constructors
Dog::Dog() {
    std::cout << "Dog constructor called!\n";
    this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal() {
    std::cout << "Dog copy contructor called!\n";
    (void)copy;
    this->type = "Dog";
}

// Destructor
Dog::~Dog() {
    std::cout << "Dog destructor called!\n";
}

// Operators
Dog & Dog::operator=(const Dog &assign) {
	std::cout << "assign operator called\n";
    (void)assign;
	return *this;
}

// Member Funcs