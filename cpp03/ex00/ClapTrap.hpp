#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
public:
	// Constructors
	ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap(std::string _name);

	// Destructor
	~ClapTrap();
	
	// Operators
	ClapTrap & operator=(const ClapTrap &assign);
	
	// Member Funcs
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string name;
	float	health;
	float	energy;
	float	damage;
};

#endif