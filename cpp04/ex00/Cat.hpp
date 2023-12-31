#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal {
public:
    // Constructors
	Cat();
	Cat(const Cat &copy);

	// Destructor
	~Cat();

	// Operators
	Cat & operator=(const Cat &assign);

	// Member Funcs
private:
};

#endif