#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main() {
    ClapTrap def = ClapTrap();
    ClapTrap robox = ClapTrap("Robo_x");
    def = robox;

    def.takeDamage(4);
    def.takeDamage(5);
    def.takeDamage(3);
    def.takeDamage(3);
    def.beRepaired(20);
    def.attack("Robo_x");
    return 0;
}