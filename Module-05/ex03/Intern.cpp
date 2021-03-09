/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 17:12:06 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/09 11:35:00 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){
	std::cout << "Intern constructor called" << std::endl;
	_func[0] = &Intern::retShrubbery;
	_func[1] = &Intern::retRobotomy;
	_func[2] = &Intern::retPresidential;
	return ;
}

Intern::Intern(Intern const &cpy){
	std::cout << "Intern copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Intern&	Intern::operator=(Intern const &nw){
	if (this != &nw)
		std::cout << "Intern assignation called" << std::endl;
	return (*this);
}

Intern::~Intern(void){
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

Form*	Intern::makeForm(std::string const form, std::string const target){
	std::string Forms[3];
	Forms[0] = "ShrubberyCreationForm";
	Forms[1] = "RobotomyRequestForm";
	Forms[2] = "PresidentialPardonForm";
	for (int i = 0; i < 3; i++){
		if (Forms[i] == form){
			std::cout << "The intern creates a form called: " << Forms[i] << std::endl;
			return (this->*_func[i])(target);
		}
	}
	std::cout << "The intern couldn't find the right form!" << std::endl;
	return (NULL);
}

Form*	Intern::retPresidential(std::string const target) {
	return (new PresidentialPardonForm(target));
}

Form*	Intern::retRobotomy(std::string const target) {
	return (new RobotomyRequestForm(target));
}

Form*	Intern::retShrubbery(std::string const target) {
	return (new ShrubberyCreationForm(target));
}
