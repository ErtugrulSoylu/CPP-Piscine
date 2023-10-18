#include "Cat.hpp"
#include <string>
#include <iostream>

// Constructors
Cat::Cat() {
    std::cout << "Cat constructor called!\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy) {
    std::cout << "Cat copy contructor called!\n";
    this->type = "Cat";
    this->brain = copy.brain;
}

// Destructor
Cat::~Cat() {
    std::cout << "Cat destructor called!\n";
    delete this->brain;
}

// Operators
Cat & Cat::operator=(const Cat &assign) {
	std::cout << "assign operator called\n";
    this->brain = assign.brain;
	return *this;
}

// Member Funcs
void Cat::addIdea(std::string idea) const {
    this->brain->addIdea(idea);
}

void Cat::getIdea() const {
    brain->randomIdea();
}

std::string Cat::getType() const {
    return this->type;
}

void Cat::makeSound() const {
    std::cout << "Meow\n";
}