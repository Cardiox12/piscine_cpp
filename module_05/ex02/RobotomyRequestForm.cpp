//
// Created by tony on 13/04/2021.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    Form::operator=(other);
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << "Bzzzzzzz. Bwzzzzzzzzzzz. Bzzzzzz. " << getTarget()
                << " has been Robotomized" << std::endl;
}
