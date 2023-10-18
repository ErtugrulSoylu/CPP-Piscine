#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

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
	void addIdea(std::string idea) const;
	void getIdea() const;
private:
	Brain* brain;
};

#endif