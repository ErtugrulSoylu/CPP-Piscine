#include "Brain.hpp"
#include <string>
#include <iostream>
#include <time.h>

// Constructors
Brain::Brain() {
    std::cout << "Brain constructor called!\n";
    this->ideaNum = 0;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copy contructor called!\n";
    this->ideaNum = 0;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
}

// Destructor
Brain::~Brain() {
    std::cout << "Brain destructor called!\n";
}

// Operators
Brain & Brain::operator=(const Brain &assign) {
	std::cout << "assign operator called\n";
    this->ideaNum = assign.ideaNum;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = assign.ideas[i];
    }
	return *this;
}

// Member Funcs
void Brain::addIdea(std::string idea) {
    if (this->ideaNum < 100) {
        this->ideas[this->ideaNum++] = idea;
        std::cout << "An idea has come along the way up to this creature's head!!!!!\n";
    }
    else
        std::cout << "THIS BRAIN IS FULL OF IDEAS!\n";
}

void Brain::randomIdea() const {
    std::cout << this->ideas[rand()%this->ideaNum] << std::endl;
}