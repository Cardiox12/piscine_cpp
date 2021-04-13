#ifndef FORMS_HPP
#define FORMS_HPP

#include <exception>
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

# define GRADE_TOO_LOW_REASON 1
# define GRADE_TOO_HIGH_REASON 2

class Form
{
private:
	const int           MIN_GRADE = 150;
	const int           MAX_GRADE = 1;
	bool                m_signed;
	const std::string   m_name;
	const int           m_sign_grade;
	const int           m_exec_grade;
	std::string         m_target;
public:
	Form(const std::string &name, int sign_grade, int exec_grade, const std::string &target);
	Form(const Form &other);
	Form   &operator=(const Form &other);
	virtual ~Form();

	int beSigned(Bureaucrat &bureaucrat);
	bool getSigned() const;
	void setSigned(bool sign);
	const std::string &getName() const;
	int getExecGrade() const;
	int getSignGrade() const;
	const std::string &getTarget() const;

    virtual void execute(const Bureaucrat &executor) const;
	void isValidGrade(int grade);

	struct GradeTooHighException : public std::exception {
		virtual const char *what() const throw();
	};

	struct GradeTooLowException : public std::exception {
		virtual const char *what() const throw();
	};

    struct FormNotSignedException : public std::exception {
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<( std::ostream &os, const Form &forms );

#endif
