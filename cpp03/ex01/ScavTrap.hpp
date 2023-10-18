#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap {
public:
	// Constructors
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap(std::string _name);

	// Destructor
	~ScavTrap();
	
	// Operators
	ScavTrap & operator=(const ScavTrap &assign);
	
	// Member Funcs
	void	guardGate();
	void attack(const std::string& target);
private:
	bool	keeper;
};

#endif