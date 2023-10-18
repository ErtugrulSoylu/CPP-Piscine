#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

// Constructors
WrongAnimal::WrongAnimal() {
    std::cout << "Wrong Animal constructor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "Wrong Animal copy contructor called!\n";
    (void)copy;
}

// Destructor
WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong Animal destructor called!\n";
}

// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign) {
	std::cout << "assign operator called\n";
    (void)assign;
	return *this;
}

// Member Funcs
std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    if (this->type == "WrongCat")
        std::cout << "Selamun Aleyküm\n";
}