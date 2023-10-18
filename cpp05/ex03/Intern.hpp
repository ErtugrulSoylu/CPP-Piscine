#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include <exception>

class Intern : public Bureaucrat {
public:
    // Constructors
    Intern();
    Intern(Intern &intern);
    
    // Destructors
    ~Intern();

    // Operator
    Intern &operator=(Intern &intern);

    // Member Funcs
    Form *makeForm(std::string _name, std::string _target);

    // Exceptions
    class NoFormFoundException : public std::exception {
        virtual const char *what() const throw() {return "No form found by the given name.";}
    };
private:
    std::string names[3];
};


#endif