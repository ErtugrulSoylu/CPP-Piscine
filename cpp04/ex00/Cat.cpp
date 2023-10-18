#include "Cat.hpp"
#include <string>
#include <iostream>

// Constructors
Cat::Cat() {
    std::cout << "Cat constructor called!\n";
    this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal() {
    std::cout << "Cat copy contructor called!\n";
    (void)copy;
    this->type = "Cat";
}

// Destructor
Cat::~Cat() {
    std::cout << "Cat destructor called!\n";
}

// Operators
Cat & Cat::operator=(const Cat &assign) {
	std::cout << "assign operator called\n";
    (void)assign;
	return *this;
}

// Member Funcs