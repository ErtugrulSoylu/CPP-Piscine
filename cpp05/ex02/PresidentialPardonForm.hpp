#ifndef PARDON_HPP
#define PARDON_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &form);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const &executor) const;
    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
private:
    const std::string target;
};

#endif