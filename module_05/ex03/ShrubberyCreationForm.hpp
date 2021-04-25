//
// Created by tony on 13/04/2021.
//

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include <string>
#include "Form.hpp"

struct ShrubberyCreationForm : public Form {
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    virtual ~ShrubberyCreationForm();
    void execute(const Bureaucrat &executor) const override;
};


#endif
