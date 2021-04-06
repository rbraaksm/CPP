/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestFrom.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:43:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:07:44 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm",5, 25), _target(target){
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy){
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	_target = cpy._target;
	*this = cpy;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &nw){
	std::cout << "RobotomyRequestForm assignation called" << std::endl;
	if (this != &nw){
		_target = nw._target;
		Form::operator=(nw);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else if (this->getSigned() == false)
		throw Form::notSigned();
	else{
		int number = rand() % 2;
		if (number > 0)
			std::cout << "* TRRRRRRRRRRRRRR... *" << std::endl << _target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Sorry, better luck next time!" << std::endl;
	}
	return ;
}
