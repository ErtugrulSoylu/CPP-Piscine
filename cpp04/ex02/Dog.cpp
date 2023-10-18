#include "Dog.hpp"
#include <string>
#include <iostream>

// Constructors
Dog::Dog() {
    std::cout << "Dog constructor called!\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy) {
    std::cout << "Dog copy contructor called!\n";
    (void)copy;
    this->type = "Dog";
    this->brain = new Brain();
}

// Destructor
Dog::~Dog() {
    std::cout << "Dog destructor called!\n";
    delete this->brain;
}

// Operators
Dog & Dog::operator=(const Dog &assign) {
	std::cout << "assign operator called\n";
    (void)assign;
	return *this;
}

// Member Funcs
void Dog::addIdea(std::string idea) const {
    this->brain->addIdea(idea);
}

void Dog::getIdea() const {
    this->brain->randomIdea();
}

std::string Dog::getType() const {
    return this->type;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof\n";
}