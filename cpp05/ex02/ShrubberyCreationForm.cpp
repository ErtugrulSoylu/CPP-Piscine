#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form(145, 137, std::string("Shrubbery Creation")), target("default") {
    std::cout << "Default constructor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : Form(145, 137, std::string("Shrubbery Creation")), target(form.target) {
    std::cout << "Copy constructor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(145, 137, std::string("Shrubbery Creation")), target(target) {
    std::cout << "Constructor called!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &bure) const {
    if (this->isSigned() == false)
        throw(Form::IsNotSigned());
    if (bure.getGrade() > this->getExecGrade())
        throw(Form::GradeTooLowException());
    else {
        std::fstream out;
        out.open(this->target, std::fstream::out);
        out << "                                                         .\n";
        out << "                                              .         :\n";
        out << "                 .              .              ::     ::\n";
        out << "                   ,           ,                :::  ::\n";
        out << "                    :         :                   ::::'     .,\n";
        out << "           ,.        ::     ::            :        ::'    ,:\n";
        out << "             :       :::  :::        ,     ::    :::    ,:'\n";
        out << "              ::       ::::      ,  :       ::  :::   ,::'\n";
        out << "               :::      ::        :::        : :::  ,::'\n";
        out << "                `::.     :::     ::'         `::::.::'\n";
        out << "                 `:::.    :::. :::        :: :::::'\n";
        out << "                    `:::.  ::::::          :::::'\n";
        out << "                      `:::.  :::.         :::::'\n";
        out << "                        `::.  `:::.      :::::\n";
        out << "                          `:::. `:::    :::::\n";
        out << "                            :::. ::::  :::::\n";
        out << "                              :::::::::::::\n";
        out << "                                ::::::::::\n";
        out << "                                :::::::::\n";
        out << "                                :::::::::  . '\n";
        out << "                                :::::::::.,'\n";
        out << "                            `.. :::::::::\n";
        out << "                               `:::::::::\n";
        out << "                                :::::::::\n";
        out << "                               .:::::::::\n";
        out << "                               ::::::::::.\n";
        out << "                              ::::::::::::.\n";
        out << "                          ...::::::::::::::,..\n";
        out.close();
        std::cout << this->target << " has been created.\n";
    }
}