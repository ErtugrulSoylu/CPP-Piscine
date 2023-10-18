#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    Harl Harl;
    if (argc == 2)
        Harl.complain(argv[1]);
    return 0;
}