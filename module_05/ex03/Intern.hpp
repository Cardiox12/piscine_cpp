#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define FORM_PAIR_SIZE 3

Form	*createPresidentialForm(const std::string &target);
Form	*createRobotomyForm(const std::string &target);
Form	*createShrubberyForm(const std::string &target);
typedef Form *(*create_func)(const std::string &);

class Intern {
	class FormPair {
			std::string m_name;
			create_func m_func;
		public:
			FormPair(const std::string &name, create_func func);
			FormPair(const FormPair &other);
			FormPair &operator=(const FormPair &other);
			bool isEqualForm(const std::string &formName);
			Form *create(const std::string &target);
	};
	FormPair funcs[FORM_PAIR_SIZE] = {
		{"robotomy request", createRobotomyForm},
		{"shrubbery", createShrubberyForm},
		{"presidential pardon", createPresidentialForm}
	};
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	virtual ~Intern();

	Form *makeForm(const std::string &formName, const std::string &target);

	struct FormNotFound : public std::exception {
		virtual const char *what() const throw();
	};
};

#endif /* INTERN_HPP */
