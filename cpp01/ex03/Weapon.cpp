#include "Weapon.hpp"
#include <iostream>
#include <string>

void    Weapon::setType(std::string _type) {
    this->type = _type;
}

const   std::string Weapon::getType(void) {
    return this->type;
}

Weapon::Weapon(std::string _type) {
    this->type = _type;
}

Weapon::Weapon() {
    this->type = "DEFAULT TYPE";
}