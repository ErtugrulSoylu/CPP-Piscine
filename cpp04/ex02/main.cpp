#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>
#include <string>
#include <time.h>

int main() {
    srand(time(NULL));
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    Animal *animals[100];
    for (int i = 0; i < 50; i++)
        animals[i] = new Cat();
    for (int i = 50; i < 100; i++)
        animals[i] = new Dog();

    for (int i = 0; i < 100; i++)
        delete animals[i];
    
    const Cat* cat = new Cat();
    const Dog* dog = new Dog();
    cat->addIdea("I think i might be able to fly(?)");
    cat->addIdea("You are right!");
    cat->addIdea("I have ability to think!");
    cat->addIdea("Me-ow?");
    dog->addIdea("WO-of!");
    dog->addIdea("Wo wo of woof wof wof!");
    dog->addIdea("OwO!");
    
    cat->getIdea();
    cat->getIdea();
    cat->getIdea();
    dog->getIdea();
    dog->getIdea();
    dog->getIdea();

    delete cat;
    delete dog;

    return 0;
}