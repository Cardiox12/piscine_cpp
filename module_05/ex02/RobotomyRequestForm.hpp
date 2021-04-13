//
// Created by tony on 13/04/2021.
//

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

struct RobotomyRequestForm : public Form {
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    void execute(const Bureaucrat &executor) const override;
};


#endif
