#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie(void) {
    std::cout << this->name << ": IM DYING FROM STARVING.." << std::endl;
}