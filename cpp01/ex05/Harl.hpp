#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
public:
    void    complain(std::string level);
private:
    typedef void(Harl::*funcs)();
    funcs f[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    debug();
    void    info();
    void    warning();
    void    error();
};

#endif