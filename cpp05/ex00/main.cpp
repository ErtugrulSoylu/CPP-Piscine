#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

int main() {
    Bureaucrat bure(4, "Ali");
    Bureaucrat bure2 = bure;
    std::cout << bure2.getName() << std::endl;
    
    try {
        Bureaucrat bure(4, "John");
        std::cout << bure << std::endl;
        while (true)
            bure.incGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat bure(145, "John");
        std::cout << bure << std::endl;
        while (true)
            bure.decGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}