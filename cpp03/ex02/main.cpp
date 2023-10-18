#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main() {
    FragTrap def = FragTrap();
    FragTrap robox = FragTrap("Robo_x");
    def = robox;

    def.takeDamage(4);
    def.takeDamage(5);
    def.takeDamage(3);
    def.takeDamage(3);
    def.beRepaired(20);
    def.highFivesGuys();
    def.attack("Robo_x");
    return 0;
}