#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal {
public:
    // Constructors
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);

	// Destructor
	~WrongAnimal();

	// Operators
	WrongAnimal & operator=(const WrongAnimal &assign);

	// Member Funcs
    std::string getType() const;
    void makeSound() const;
protected:
    std::string type;
};

#endif