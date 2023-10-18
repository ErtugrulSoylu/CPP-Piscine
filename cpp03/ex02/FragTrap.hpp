#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap {
public:
	// Constructors
	FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap(std::string _name);

	// Destructor
	~FragTrap();
	
	// Operators
	FragTrap & operator=(const FragTrap &assign);
	
	// Member Funcs
	void highFivesGuys();
	void attack(const std::string& target);
};

#endif