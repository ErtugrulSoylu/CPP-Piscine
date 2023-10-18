#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    // Constructors
    Form();
    Form(int _signGrade, int execGrade, std::string _name);
    Form(const Form &Copy);
    // Operators
    Form &operator=(const Form &Bure);
    
    // Destructor
    virtual ~Form();
    
    // Member Funcs
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    int isSigned() const;
    virtual void execute(Bureaucrat const &executor) const = 0;
    void beSigned(Bureaucrat &bure);
    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw() {return "Grade is too low";};
    };
    class IsNotSigned : public std::exception {
        virtual const char *what() const throw() {return "Form is not signed";};
    };
private:
    bool Signed;
    const std::string name;
    const int signGrade;
    const int execGrade;
};

std::ostream &operator<<(std::ostream &stream, Form const &form);

#endif