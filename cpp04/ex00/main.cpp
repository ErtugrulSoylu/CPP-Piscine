#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
 
    std::cout << j->getType() << ": ";
    j->makeSound();
    std::cout << i->getType() << ": ";
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    const WrongAnimal* a = new WrongAnimal();
    const WrongCat* kitty = new WrongCat();

    std::cout << kitty->getType() << ": ";
    kitty->makeSound();
    a->makeSound();
    
    delete a;
    delete kitty;

    return 0;
}