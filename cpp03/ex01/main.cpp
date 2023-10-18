#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main() {
    ScavTrap def = ScavTrap();
    ScavTrap robox = ScavTrap("Robo_x");
    def = robox;

    def.takeDamage(4);
    def.takeDamage(5);
    def.takeDamage(3);
    def.takeDamage(3);
    def.beRepaired(20);
    def.attack("Robo_x");
    return 0;
}