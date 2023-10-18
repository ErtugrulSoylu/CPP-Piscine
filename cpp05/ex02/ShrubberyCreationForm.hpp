#ifndef CREAT_HPP
#define CREAT_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &form);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
private:
    const std::string target;
};

#endif