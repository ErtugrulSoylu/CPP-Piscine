#include "ClapTrap.hpp"

#include <iostream>
#include <string>

// Constructors
ClapTrap::ClapTrap() : name("Default Robot") {
	std::cout << "default constructor called\n";
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "copy constructor called\n";
	this->damage = copy.damage;
	this->energy = copy.energy;
	this->health = copy.health;
}

ClapTrap::ClapTrap(std::string _name) : name(_name) {
	std::cout << "name constructor called\n";
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "destructor called\n";
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign) {
	std::cout << "assign operator called\n";
	this->name = assign.name;
	this->damage = assign.damage;
	this->energy = assign.energy;
	this->health = assign.health;
	return *this;
}

/// Member funcs
void ClapTrap::attack(const std::string& target) {
	if (this->health == 0)
		std::cout << this->name << " is dead and can't do anything..\n";
	else if (this->energy == 0)
		std::cout << this->name << " attempts to attack " << target << " but has no energy left!\n";
	else {
		std::cout << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!\n";
		this->energy-=1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->health == 0) {
		std::cout << this->name << " is already dead!\n";
		return ;
	}
	this->health = health > amount ? health - amount : 0;
	if (this->health > 0)
		std::cout << this->name << " takes " << amount << " points of damage and " << this->health << " health left!\n";
	else 
		std::cout << this->name << " takes " << amount << " points of damage and dies!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->health == 0)
		std::cout << this->name << " is dead and cant do anything..\n";
	if (this->energy > 0) {
		this->health += amount;
		std::cout << this->name << " gets repaired and recovers " << amount << " amount of health, " << this->health << " is new health point!\n";
		this->energy-=1;
	} else {
		std::cout << this->name << " attempts to repair itself but has no energy left!\n";
	}
}