#include "FragTrap.hpp"

#include <iostream>
#include <string>

// Constructors
FragTrap::FragTrap() {
	std::cout << "default FRAG constructor called\n";
    this->name = "Default FRAG";
	this->damage = 30;
	this->energy = 100;
	this->health = 100;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap() {
	std::cout << "FRAG copy constructor called\n";
	this->damage = copy.damage;
	this->energy = copy.energy;
	this->health = copy.health;
}

FragTrap::FragTrap(std::string _name) {
	std::cout << "FRAG name constructor called\n";
    this->name = _name;
	this->damage = 20;
	this->energy = 50;
	this->health = 100;
}

// Destructor
FragTrap::~FragTrap() {
	std::cout << "FRAG destructor called\n";
}

// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign) {
	std::cout << "FRAG assign operator called\n";
	this->name = assign.name;
	this->damage = assign.damage;
	this->energy = assign.energy;
	this->health = assign.health;
	return *this;
}

// Member Funcs
void    FragTrap::highFivesGuys() {
    std::cout << this->name << " give you a high five!\n";
}

void FragTrap::attack(const std::string& target) {
	std::cout << this->name << " is very angry and attacks " << target << ", " << this->damage << " amount of damage was done!\n";
}