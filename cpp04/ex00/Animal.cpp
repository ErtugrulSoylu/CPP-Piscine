#include "Animal.hpp"
#include <string>
#include <iostream>

// Constructors
Animal::Animal() {
    std::cout << "Animal constructor called!\n";
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal copy contructor called!\n";
    (void)copy;
}

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
std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    if (this->type == "Cat")
        std::cout << "Meow\n";
    if (this->type == "Dog")
        std::cout << "Woof Woof\n";
}