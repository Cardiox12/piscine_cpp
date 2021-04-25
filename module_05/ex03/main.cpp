//
// Created by kyoto on 01/04/2021.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int     main(){
	Bureaucrat signer("Poutou", 25);
	Bureaucrat executor("Bayou", 5);
	Intern someRandomIntern;
	Form *rff;

	try {
		rff = someRandomIntern.makeForm("presidential pardon", "Bender");
		signer.signForm(*rff);
		executor.executeForm(*rff);
		delete rff;
	} catch ( const std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================================" << std::endl;

	try {
		signer = Bureaucrat("Poutou", 145);
		executor = Bureaucrat("Bayou", 137);
		rff = someRandomIntern.makeForm("shrubbery", "Bender");
		signer.signForm(*rff);
		executor.executeForm(*rff);
		delete rff;
	} catch ( const std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================================" << std::endl;

	try {
		signer = Bureaucrat("Poutou", 72);
		executor = Bureaucrat("Bayou", 45);
		rff = someRandomIntern.makeForm("robotomy request", "Bender");
		signer.signForm(*rff);
		executor.executeForm(*rff);
		delete rff;
	} catch ( const std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================================" << std::endl;

	try {
		rff = someRandomIntern.makeForm("slug", "Bender");
		delete rff;
	} catch ( const std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
