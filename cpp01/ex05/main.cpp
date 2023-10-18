#include "Harl.hpp"
#include <iostream>
#include <string>

int main() {
    Harl Harl;
    std::string line;
    while (true) {
        std::getline(std::cin, line);
        Harl.complain(line); 
    }
    return 0;
}