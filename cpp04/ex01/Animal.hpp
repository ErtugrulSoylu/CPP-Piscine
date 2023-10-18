#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal {
public:
    // Constructors
	Animal();
	Animal(const Animal &copy);

	// Destructor
	virtual ~Animal();

	// Operators
	Animal & operator=(const Animal &assign);

	// Member Funcs
    void makeSound() const;
    std::string getType() const;
protected:
    std::string type;
};

#endif