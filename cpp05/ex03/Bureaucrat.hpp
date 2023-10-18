#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
    // Constructors
    Bureaucrat();
    Bureaucrat(const Bureaucrat &Copy);
    Bureaucrat(int _grade, std::string _name);

    // Operators
    Bureaucrat &operator=(const Bureaucrat &Bure);
    
    // Member Funcs
    std::string getName() const;
    int getGrade() const;
    void incGrade();
    void decGrade();
    void signForm(Form &form);
    void executeForm(Form const &form);
    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw() {return "GradeTooHighException";};
    };
    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw() {return "GradeTooLowException";};
    };
private:
    const std::string name;
    int grade;
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bure);

#endif