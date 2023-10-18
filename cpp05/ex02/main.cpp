#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>

int main() {
    std::string name, process, form, target;
    Bureaucrat *bure;
    int grade;
    std::cout << "Type in the target name: ";
    std::cin >> target;
    ShrubberyCreationForm S(target);
    RobotomyRequestForm R(target);
    PresidentialPardonForm P(target);
    while (true) {
        std::cout << "Type in the Bureaucrat name: ";
        std::cin >> name;
        std::cout << "Type in " << name << "'s grade: ";
        while (true) {
            std::cin >> grade;
            try {
                bure = new Bureaucrat(grade, name);
                break;
            } catch (std::exception &e) {
                std::cout << "Couldn't create bureaucrat due to " << e.what() << std::endl;
                std::cout << "Please type in the grade again: ";
            }
        }
        std::cout << "Type in either EXECUTE or SIGN that your bureaucrat want to attempt: ";
        while (process != "EXECUTE" && process != "SIGN")
            std::cin >> process;
        std::cout << "Type in which form " << name << " wants to " << process << " [Shrub | Robo | Pardon]: ";
        while (form != "Shrub" && form != "Robo" && form != "Pardon")
            std::cin >> form;
        if (form == "Shrub") {
            if (process == "SIGN")
                bure->signForm(S);
            else if (process == "EXECUTE")
                bure->executeForm(S);
        } else if (form == "Robo") {
            if (process == "SIGN")
                bure->signForm(R);
            else if (process == "EXECUTE")
                bure->executeForm(R);
        } else if (form == "Pardon") {
            if (process == "SIGN")
                bure->signForm(P);
            else if (process == "EXECUTE")
                bure->executeForm(P);
        }
        delete bure;
        process = "";
        form = "";
    }
    return 0;
}