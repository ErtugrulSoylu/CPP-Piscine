#include "Harl.hpp"
#include <iostream>
#include <string>

void    Harl::complain(std::string level) {
    int i;
    for (i = 0; i < 4; i++)
        if (arr[i] == level)
            break ;
    switch (i) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            this->debug();
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            this->info();
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void    Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}