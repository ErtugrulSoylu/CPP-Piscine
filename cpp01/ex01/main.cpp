#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return zombies;
}

int main() {
    int         N = 5;
    std::string name = "ert";
    Zombie *zombies = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete [] zombies;
    Zombie myzombie = Zombie();
    myzombie.announce();
    return 0;
}