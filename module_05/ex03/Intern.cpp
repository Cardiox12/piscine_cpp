/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:18:51 by bbellavi          #+#    #+#             */
/*   Updated: 2021/04/25 21:24:59 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {};
Intern::Intern(const Intern &other) { (void)other; };
Intern &Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
};

Intern::~Intern() {}

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
	for (int index = 0 ; index < FORM_PAIR_SIZE ; index++){
		if ( funcs[index].isEqualForm(formName) ){
			std::cout << "Intern creates " << formName << std::endl;
			return ( funcs[index].create(target) );
		}
	}
	throw Intern::FormNotFound();
}

Intern::FormPair::FormPair(const std::string &name, create_func func) : 
	m_name{ name }, m_func{ func } {}

Intern::FormPair::FormPair(const Intern::FormPair &other) : 
	m_name{ other.m_name }, m_func{ other.m_func } {}

Intern::FormPair &Intern::FormPair::operator=(const Intern::FormPair &other) {
	m_name = other.m_name;
	m_func = other.m_func;
	return (*this);
}

bool Intern::FormPair::isEqualForm(const std::string &formName) {
	return (formName == m_name);
}

Form *Intern::FormPair::create(const std::string &target) {
	return (m_func(target));
}

Form	*createPresidentialForm(const std::string &target){
	return ( new PresidentialPardonForm(target) );
}

Form	*createRobotomyForm(const std::string &target){
	return ( new RobotomyRequestForm(target) );
}

Form	*createShrubberyForm(const std::string &target){
	return ( new ShrubberyCreationForm(target) );
}

const char *Intern::FormNotFound::what() const throw () {
	return "Form not found";
}