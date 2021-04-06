/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresendentialPardonForm.cpp                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:43:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:07:32 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm",5, 25), _target(target){
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form(cpy){
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	_target = cpy._target;
	*this = cpy;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &nw){
	std::cout << "PresidentialPardonForm assignation called" << std::endl;
	if (this != &nw){
		_target = nw._target;
		Form::operator=(nw);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else if (this->getSigned() == false)
		throw Form::notSigned();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
