#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name(copy.getName()), grade(copy.getGrade()) {
    std::cout << "Copy constructor called!\n";
}

Bureaucrat::Bureaucrat(int _grade, std::string _name) : name(_name) {
    std::cout << "Constructor called!\n";
    if (_grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->grade = _grade;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incGrade() {
    if (this->grade > 1) {
        this->grade--;
        std::cout << "[ICREMENT] new grade is: " << this->grade << std::endl;
    }
    else
        throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decGrade() {
    if (this->grade < 150) {
        this->grade++;
        std::cout << "[DECREMENT] new grade is: " << this->grade << std::endl;
    }
    else
        throw(Bureaucrat::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bure) {
    stream << bure.getName() << ", bureaucrat grade " << bure.getGrade() << ".";
    return stream;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bure) {
    this->grade = bure.getGrade();
    return *this;
}