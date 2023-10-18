#include <iostream>
#include <string>
#include "Form.hpp"

Form::Form() : name("Empty Form"), signGrade(150) , execGrade(150) {}

Form::Form(int _signGrade, int _execGrade, std::string _name) : name(_name), signGrade(_signGrade), execGrade(_execGrade), Signed(false) {
    std::cout << "constructor called!\n";
}

Form::Form(const Form &form) : name(form.name), signGrade(form.signGrade), execGrade(form.execGrade), Signed(form.Signed) {
    std::cout << "copy constructor called!\n";
}

Form::~Form() {}

std::string Form::getName() const {
    return this->name;
}

int Form::getSignGrade() const {
    return this->signGrade;
}

int Form::getExecGrade() const {
    return this->execGrade;
}

int Form::isSigned() const {
    return this->Signed;
}

std::ostream &operator<<(std::ostream &stream, Form const &form) {
    stream << "Form name: " << form.getName() << "\nSign grade: " << form.getSignGrade() << "\nExecute grade: " << form.getExecGrade() << std::endl;
    return stream;
}

Form &Form::operator=(Form const &form) {
    (void)form;
    std::cout << "const attributes can't be assigned after construction.\n";
    return *this;
}

void Form::beSigned(Bureaucrat &bure) {
    if (bure.getGrade() <= this->getSignGrade())
        this->Signed = true;
    else
        throw(Form::GradeTooLowException());
}