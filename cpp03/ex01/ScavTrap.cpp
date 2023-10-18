#include "ScavTrap.hpp"

#include <iostream>
#include <string>

// Constructors
ScavTrap::ScavTrap() {
	std::cout << "default SCAV constructor called\n";
    this->name = "Default Scav";
	this->damage = 20;
	this->energy = 50;
	this->health = 100;
	this->keeper = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap() {
	std::cout << "SCAV copy constructor called\n";
	this->damage = copy.damage;
	this->energy = copy.energy;
	this->health = copy.health;
	this->keeper = copy.keeper;
}

ScavTrap::ScavTrap(std::string _name) {
	std::cout << "SCAV name constructor called\n";
    this->name = _name;
	this->damage = 20;
	this->energy = 50;
	this->health = 100;
	this->keeper = false;
}

// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "SCAV destructor called\n";
}

// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign) {
	std::cout << "SCAV assign operator called\n";
	this->name = assign.name;
	this->damage = assign.damage;
	this->energy = assign.energy;
	this->health = assign.health;
	this->keeper = assign.keeper;
	return *this;
}

// Member Funcs
void    ScavTrap::guardGate() {
    std::cout << "Now in Gate Keeper mode\n";
    this->keeper = true;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << this->name << " is very angry and attacks " << target << ", " << this->damage << " amount of damage was done!\n";
}