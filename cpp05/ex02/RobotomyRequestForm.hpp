#ifndef REQ_HPP
#define REQ_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &form);
    virtual ~RobotomyRequestForm();
    void execute(Bureaucrat const &executor) const;
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
private:
    const std::string target;
};

#endif