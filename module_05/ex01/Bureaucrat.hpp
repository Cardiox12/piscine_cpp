//
// Created by kyoto on 01/04/2021.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>
#include "Forms.hpp"

class Forms;

class Bureaucrat {
    const int MIN_GRADE = 150;
    const int MAX_GRADE = 1;
    const std::string   m_name;
    int                 m_grade;
public:
    Bureaucrat( const std::string &name, int grade );
    Bureaucrat( const Bureaucrat *other );
    Bureaucrat &operator=( const Bureaucrat &other );
    virtual ~Bureaucrat();

    void    isGradeValid(int grade) const;
    void incGrade();
    void decGrade();
    const std::string &getName() const;
    int getGrade() const;
    void signForm(Forms &form);

    struct GradeTooLowException : public std::exception {
        virtual const char *what() const throw();
    };
    struct GradeTooHighException : public std::exception {
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<( std::ostream &os, const Bureaucrat &bureaucrat );

#endif //EX00_BUREAUCRAT_HPP
