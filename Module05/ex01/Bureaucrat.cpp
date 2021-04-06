/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 10:35:49 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:03:58 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	if (grade >= 1 && grade <= 150){
		std::cout << "Constructor has been called" << std::endl;
		return ;
	}
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy.getName()), _grade(cpy.getGrade()){
	std::cout << "Copy constructor has been called" << std::endl;
	*this = cpy;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &nw){
	std::cout << "Assignation has been called" << std::endl;
	if (this != &nw){
		_grade = nw._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Destructor has been called" << std::endl;
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
	return ("Sorry, grade is too high. Your are so good!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Sorry, grade is too low. Do your best, you can do it!");
}

std::ostream&	operator<<(std::ostream &output, Bureaucrat const &bureaucrat){
	output << bureaucrat.getName() << ", with grade " << bureaucrat.getGrade() << "." << std::endl;
	return output;
}

void	Bureaucrat::signForm(const Form &form) const{
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
