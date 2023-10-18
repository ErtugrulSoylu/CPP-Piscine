#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : Form(72, 45, std::string("Robotomy Request")), target("default") {
    std::cout << "Default constructor called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : Form(72, 45, std::string("Robotomy Request")), target(form.target) {
    std::cout << "Copy constructor called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(72, 45, std::string("Robotomy Request")), target(target) {
    std::cout << "Constructor called!\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &bure) const {
    if (this->isSigned() == false)
        throw(Form::IsNotSigned());
    if (bure.getGrade() > this->getExecGrade())
        throw(Form::GradeTooLowException());
    else {
        std::cout << "Bzzt Bzzzzt...\nDrrrt Drrt...\n";
        if (rand()%2) {
            std::fstream out;
            remove(&this->target[0]);
            out.open("Robotomized " + this->target, std::fstream::out);
            out << "                                                         .\n";
            out << "                                              .         ;\n";
            out << "                 .              .              ;%     ;;\n";
            out << "                   ,           ,                :;%  %;\n";
            out << "                    :         ;                   :;%;'     .,\n";
            out << "           ,.        %;     %;            ;        %;'    ,;\n";
            out << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
            out << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n";
            out << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
            out << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
            out << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
            out << "                    `:%;.  :;bd%;          %;@%;'\n";
            out << "                      `@%:.  :;%.         ;@@%;'\n";
            out << "                        `@%.  `;@%.      ;@@%;\n";
            out << "                          `@%%. `@%%    ;@@%;\n";
            out << "                            ;@%. :@%%  %@@%;\n";
            out << "                              %@bd%%%bd%%:;\n";
            out << "                                #@%%%%%:;;\n";
            out << "                                %@@%%%::;\n";
            out << "                                %@@@%(o);  . '\n";
            out << "                                %@@@o%;:(.,'\n";
            out << "                            `.. %@@@o%::;\n";
            out << "                               `)@@@o%::;\n";
            out << "                                %@@(o)::;\n";
            out << "                               .%@@@@%::;\n";
            out << "                               ;%@@@@%::;.\n";
            out << "                              ;%@@@@%%:;;;.\n";
            out << "                          ...;%@@@@@%%:;;;;,..\n";
            out.close();
            std::cout << this->target << " has been robotomized succesfully.";
        } else {
            std::cout << "Robotomy failed.";
        }
    }
}