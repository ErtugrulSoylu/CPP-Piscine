#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>

int main() {
    Bureaucrat bure(1, "John");
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
    rrf->beSigned(bure);
    rrf->execute(bure);
    delete rrf;

    std::cin.get();
    
    rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    rrf->beSigned(bure);
    rrf->execute(bure);
    delete rrf;

    std::cin.get();

    rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
    rrf->beSigned(bure);
    rrf->execute(bure);
    delete rrf;

    std::cin.get();

    try {
        rrf = someRandomIntern.makeForm("HAHAHAHA", "Bender");
        rrf->beSigned(bure);
        rrf->execute(bure);
        delete rrf;
    } catch(std::exception &e) {
        std::cout << e.what();
    }
    return 0;
}