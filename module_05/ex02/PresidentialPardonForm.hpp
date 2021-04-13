//
// Created by tony on 13/04/2021.
//

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

struct PresidentialPardonForm : public Form {
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    void execute(const Bureaucrat &executor) const override;
};


#endif
