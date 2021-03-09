/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 10:35:49 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/09 11:59:25 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	std::cout << "Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	if (grade >= 1 && grade <= 150){
		std::cout << "Bureaucrat constructor called" << std::endl;
		return ;
	}
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy.getName()), _grade(cpy.getGrade()){
	std::cout << "Copy bureaucrat constructor called" << std::endl;
	*this = cpy;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &nw){
	std::cout << "Bureaucrat assignation called" << std::endl;
	if (this != &nw){
		_grade = nw._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

std::string const&	Bureaucrat::getName(void) const{
	return (_name);
}

int	Bureaucrat::getGrade(void) const{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= 1;
}

void	Bureaucrat::decrementGrade(void){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Sorry, bureaucrats grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Sorry, bureaucrats grade is too low!");
}

std::ostream&	operator<<(std::ostream &output, Bureaucrat const &bureaucrat){
	output << bureaucrat.getName() << ", with grade " << bureaucrat.getGrade() << "." << std::endl;
	return output;
}

void	Bureaucrat::signForm(Form const &form) const{
	std::cout << "Bureaucrat: " << _name << std::endl;
	std::cout << "Form: " << form.getName() << std::endl;
	std::cout << "Grade: " << _grade << std::endl;
	std::cout << "Signed grade: " << form.getGradeSign() << std::endl;
	std::cout << "Execute grade: " << form.getGradeExec() << std::endl;
	std::cout << "Signed: ";
	if (this->getGrade() <= form.getGradeSign()){
		std::cout << "SIGNED" << std::endl;
		std::cout << "Reason: The bureaucrats grade is high enough!" << std::endl;
	}
	else{
		std::cout << "NOT SIGNED" << std::endl;
		std::cout << "Reason: Bureaucrats grade isn't high enough" << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form){
	try{
		form.execute(*this);
		std::cout << "Bureaucrat: " << _name << " has executed the following form: " << form.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << this->getName() << " could not execute the form" << std::endl << e.what() << std::endl;
	}
}
