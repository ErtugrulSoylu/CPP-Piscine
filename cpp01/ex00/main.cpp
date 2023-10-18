#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}

int main() {
    std::string name1, name2;
    std::cin >> name1 >> name2;
    randomChump(name1);
    Zombie *zombie = newZombie(name2);
    zombie->announce();
    delete zombie;
    return 0;
}