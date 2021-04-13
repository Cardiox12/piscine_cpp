//
// Created by kyoto on 01/04/2021.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

int     main(){
	Bureaucrat signer("Signer", 145);
	Bureaucrat executor("Executor", 137);
	ShrubberyCreationForm shrub("Home");
	RobotomyRequestForm robotomy("Ford Prefect");
	PresidentialPardonForm presidentForm("Trump");

	signer.signForm(shrub);
	executor.executeForm(shrub);

	signer = Bureaucrat("Signer", 72);
	executor = Bureaucrat("Executor", 45);
	signer.signForm(robotomy);
	executor.executeForm(robotomy);

	signer = Bureaucrat("Signer", 25);
	executor = Bureaucrat("Executor", 5);
	signer.signForm(presidentForm);
	executor.executeForm(presidentForm);

	signer.signForm(shrub);
	return (0);
}
