#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
    // Constructors
	Brain();
	Brain(const Brain &copy);

	// Destructor
	~Brain();

	// Operators
	Brain & operator=(const Brain &assign);

	// Member Funcs
	void addIdea(std::string idea);
	void randomIdea() const;
protected:
    std::string ideas[100];
	int ideaNum;
};

#endif