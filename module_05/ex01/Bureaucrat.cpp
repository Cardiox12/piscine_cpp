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
        throw GradeTooHighException();
    }
    if ( grade > MIN_GRADE ){
        throw GradeTooLowException();
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

void Bureaucrat::signForm(Forms &form) {
    const int status = form.beSigned(*this);

    if (!status)
        std::cout << m_name << " signs " << form.getName() << std::endl;
    else {
        std::cout << m_name << " can't sign " << form.getName() << " because grade too "
            << (const char[2][100]){"low", "high"}[status - 1] << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
