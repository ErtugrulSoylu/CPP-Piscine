#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
public:
    // Constructors
	Dog();
	Dog(const Dog &copy);

	// Destructor
	~Dog();

	// Operators
	Dog & operator=(const Dog &assign);

	// Member Funcs
	void addIdea(std::string idea) const;
	void getIdea() const;
	std::string getType() const;
	void makeSound() const;
private:
	Brain* brain;
};

#endif