#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal {
public:
    // Constructors
	Dog();
	Dog(const Dog &copy);

	// Destructor
	~Dog();

	// Operators
	Dog & operator=(const Dog &assign);

	// Member Funcs
private:
};

#endif