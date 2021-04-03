//
// Created by kyoto on 01/04/2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : m_name{ name } {
    try {
        isGradeValid( grade );
    } catch ( const std::exception &e ){
        throw;
    }
    m_grade = grade;
}

Bureaucrat::~Bureaucrat() {

}

void Bureaucrat::isGradeValid(int grade) const {
    if ( grade < MAX_GRADE ){
        throw GradeTooHigh();
    }
    if ( grade > MIN_GRADE ){
        throw GradeTooLow();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat *other) : m_name( other->getName() ), m_grade{ other->getGrade() } {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    m_grade = other.getGrade();
    return *this;
}

const std::string &Bureaucrat::getName() const {
    return m_name;
}

int Bureaucrat::getGrade() const {
    return m_grade;
}

void Bureaucrat::incGrade() {
    try {
        isGradeValid( m_grade - 1 );
    } catch ( const std::exception &e ){
        throw;
    }
    m_grade--;
}

void Bureaucrat::decGrade() {
    try {
        isGradeValid( m_grade + 1 );
    } catch ( const std::exception &e ){
        throw;
    }
    m_grade++;
}

const char *Bureaucrat::GradeTooHigh::what() const throw() {
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLow::what() const throw() {
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
