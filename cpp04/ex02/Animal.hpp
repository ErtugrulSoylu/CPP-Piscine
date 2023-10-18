#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal {
public:
	// Destructor
	virtual ~Animal();

	// Operators
	virtual Animal & operator=(const Animal &assign);

	// Member Funcs
    virtual void makeSound() const = 0;
    virtual std::string getType() const = 0;
protected:
    std::string type;
};

#endif