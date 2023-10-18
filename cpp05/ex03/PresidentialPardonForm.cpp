#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : Form(25, 5, std::string("Presidential Pardon")), target("default") {
    std::cout << "Default constructor called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : Form(25, 5, std::string("Presidential Pardon")), target(form.target) {
    std::cout << "Copy constructor called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(25, 5, std::string("Presidential Pardon")), target(target) {
    std::cout << "Constructor called!\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &bure) const {
    if (this->isSigned() == false)
        throw(Form::IsNotSigned());
    if (bure.getGrade() > this->getExecGrade())
        throw(Form::GradeTooLowException());
    else {
        std::fstream out;
        remove(&this->target[0]);
        remove(&("Robotomized " + this->target)[0]);        
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.";
    }
}