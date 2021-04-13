#include "Form.hpp"

Form::Form(const std::string &name, int sign_grade, int exec_grade, const std::string &target) :
	m_signed( false ),
	m_name( name ),
	m_sign_grade( sign_grade ),
	m_exec_grade( exec_grade ),
	m_target( target )
{
	try {
		isValidGrade( sign_grade );
		isValidGrade( exec_grade );
	} catch ( const std::exception &e ){
		throw;
	}
}

Form::Form(const Form &other) :
		m_signed( other.m_signed ),
		m_name( other.m_name ),
		m_sign_grade( other.m_sign_grade ),
		m_exec_grade( other.m_exec_grade ) {}

Form &Form::operator=(const Form &other) {
	m_signed = other.m_signed;
	return *this;
}

Form::~Form() {

}

bool Form::getSigned() const {
	return m_signed;
}

void Form::setSigned(bool sign) {
	m_signed = sign;
}

const std::string &Form::getName() const {
	return m_name;
}

void Form::isValidGrade(int grade) {
	if ( grade < MAX_GRADE ){
		throw GradeTooHighException();
	}
	if ( grade > MIN_GRADE ){
		throw GradeTooLowException();
	}
}

int Form::beSigned(Bureaucrat &bureaucrat) {
	const int signGrade = bureaucrat.getGrade();

	if (signGrade == m_sign_grade ){
		setSigned(true);
		return (0);
	}
	return ((signGrade > m_sign_grade) ? GRADE_TOO_LOW_REASON : GRADE_TOO_HIGH_REASON);
}

int Form::getExecGrade() const {
	return m_exec_grade;
}

int Form::getSignGrade() const {
	return m_sign_grade;
}

void Form::execute(const Bureaucrat &executor) const {
    if ( !this->m_signed )
        throw FormNotSignedException();
    if ( executor.getGrade() < this->getExecGrade() )
        throw GradeTooHighException();
    if ( executor.getGrade() > this->getExecGrade() )
        throw GradeTooLowException();
}

const std::string &Form::getTarget() const {
    return m_target;
}


const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

std::ostream &operator<<(std::ostream &os, const Form &forms) {
	const char *status = (forms.getSigned()) ? "signed" : "not signed";

	os << "Form " << forms.getName() << " is " << status;
	return os;
}

const char *Form::FormNotSignedException::what() const throw() {
    return "Form not signed";
}
