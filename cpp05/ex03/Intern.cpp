#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

// Constructors
Intern::Intern() {
    std::cout << "Intern constructor called!\n";
    this->names[0] = "Robotomy Request";
    this->names[1] = "Shrubbery Creation";
    this->names[2] = "Presidential Pardon";
}

Intern::Intern(Intern &intern) : Bureaucrat() {
    (void)intern;
    std::cout << "Intern copy constructor called!\n";
    this->names[0] = "Robotomy Request";
    this->names[1] = "Shrubbery Creation";
    this->names[2] = "Presidential Pardon";
}

// Destructors
Intern::~Intern() {
    std::cout << "Intern destructor called!\n";
}

// Operator
Intern &Intern::operator=(Intern &intern) {
    (void)intern;
    std::cout << "Intern copy operator called!\n";
    return *this;
}

// Member Funcs
Form *Intern::makeForm(std::string name, const std::string target) {
    int i = 0;
    for (; i < 3; i++) {
        if (name == names[i]) {
            switch (i) {
                case 0:
                    std::cout << "Intern creates " << name << std::endl;
                    return new RobotomyRequestForm(target);
                    break;
                case 1:
                    std::cout << "Intern creates " << name << std::endl;
                    return new ShrubberyCreationForm(target);
                    break;
                case 2:
                    std::cout << "Intern creates " << name << std::endl;
                    return new PresidentialPardonForm(target);
                    break;
                default:
                    throw NoFormFoundException();
            }
        }
    }
    throw NoFormFoundException();
}