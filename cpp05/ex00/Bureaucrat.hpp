#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

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