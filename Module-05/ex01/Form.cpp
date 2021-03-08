/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 14:20:01 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/08 13:00:30 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _signed(false), _name("basic"), _gradeExec(100), _gradeSign(100){
	std::cout << "Basic constructor has been called" << std::endl;
	return ;
}

Form::Form(const std::string name, int gradeExec, int gradeSign) : _signed(false), _name(name), _gradeExec(gradeExec), _gradeSign(gradeSign){
	if ((gradeSign >= 1 && gradeSign <= 150) && (gradeExec >= 1 && gradeExec <= 150) ){
		std::cout << "Constructor has been called" << std::endl;
		return ;
	}
	if (gradeSign > 150 || gradeExec > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

Form::Form(const Form &cpy) : _signed(cpy.getSigned()), _name(cpy.getName()), _gradeExec(cpy.getGradeExec()), _gradeSign(cpy.getGradeSign()){
	std::cout << "Copy constructor has been called" << std::endl;
	*this = cpy;
	return ;
}

Form&	Form::operator=(const Form &nw){
	std::cout << "Assignation has been called" << std::endl;
	if (this != &nw)
		_signed = nw.getSigned();
	return (*this);
}

Form::~Form(void){
	std::cout << "Destructor has been called" << std::endl;
	return ;
}

const std::string&	Form::getName(void) const{
	return (_name);
}

const int&	Form::getGradeExec(void) const{
	return (_gradeExec);
}

const int&	Form::getGradeSign(void) const{
	return (_gradeSign);
}

bool	Form::getSigned(void) const{
	return (_signed);
}

void	Form::beSigned(const Bureaucrat &nw){
	if (nw.getGrade() < this->getGradeSign())
		this->_signed = true;
	nw.signForm(*this);
	if (nw.getGrade() > this->getGradeSign())
		throw Bureaucrat::GradeTooLowException();
	return ;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Sorry, grade is too high. Your are so good!");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Sorry, grade is too low. Do your best, you can do it!");
}

std::ostream&	operator<<(std::ostream &output, const Form &form){
	output << "Form: " << form.getName() << "\nSign grade: " << form.getGradeSign();
	output << "\nExec grade: " << form.getGradeExec() << "\nSigned: ";
	if (form.getSigned())
		output << "true" << std::endl;
	else
		output << "false" << std::endl;
	return (output);
}
