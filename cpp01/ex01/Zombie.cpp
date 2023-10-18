#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    this->name = "DEFAULT ZOMBIE";
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie(void) {
    std::cout << this->name << ": IM DYING FROM STARVING.." << std::endl;
}

void    Zombie::setName(std::string name) {
    this->name = name;
}