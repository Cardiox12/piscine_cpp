#include "Forms.hpp"

Forms::Forms(const std::string &name, int sign_grade, int exec_grade) :
    m_signed( false ),
    m_name( name ),
    m_sign_grade( sign_grade ),
    m_exec_grade(exec_grade)
{
    try {
        isValidGrade( sign_grade );
        isValidGrade( exec_grade );
    } catch ( const std::exception &e ){
        throw;
    }
}

Forms::Forms(const Forms &other) :
        m_signed( other.m_signed ),
        m_name( other.m_name ),
        m_sign_grade( other.m_sign_grade ),
        m_exec_grade( other.m_exec_grade ) {}

Forms &Forms::operator=(const Forms &other) {
    m_signed = other.m_signed;
    return *this;
}

Forms::~Forms() {

}

bool Forms::getSigned() const {
    return m_signed;
}

void Forms::setSigned(bool sign) {
    m_signed = sign;
}

const std::string &Forms::getName() const {
    return m_name;
}

void Forms::isValidGrade(int grade) {
    if ( grade < MAX_GRADE ){
        throw GradeTooHighException();
    }
    if ( grade > MIN_GRADE ){
        throw GradeTooLowException();
    }
}

int Forms::beSigned(Bureaucrat &bureaucrat) {
    const int signGrade = bureaucrat.getGrade();

    if (signGrade == m_sign_grade ){
        setSigned(true);
        return (0);
    }
    return ((signGrade > m_sign_grade) ? GRADE_TOO_LOW_REASON : GRADE_TOO_HIGH_REASON);
}

int Forms::getExecGrade() const {
    return m_exec_grade;
}

int Forms::getSignGrade() const {
    return m_sign_grade;
}


const char *Forms::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char *Forms::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

std::ostream &operator<<(std::ostream &os, const Forms &forms) {
    const char *status = (forms.getSigned()) ? "signed" : "not signed";

    os << "Forms " << forms.getName() << " is " << status;
    return os;
}
