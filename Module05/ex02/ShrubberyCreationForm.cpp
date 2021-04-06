/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/08 13:43:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/30 14:06:11 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm",137, 145), _target(target){
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	_target = cpy._target;
	*this = cpy;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &nw){
	std::cout << "ShrubberyCreationForm assignation called" << std::endl;
	if (this != &nw){
		_target = nw._target;
		Form::operator=(nw);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else if (this->getSigned() == false)
		throw Form::notSigned();
	else{
		std::ofstream _file;
		std::string file_name = _target + "_shrubbery";
		_file.open(file_name);
		if (_file.fail()){
			std::cout << "FAILURE" << std::endl;
			exit(EXIT_FAILURE);
		}
		_file << std::endl;
		_file << "                 X                 " << std::endl;
		_file << "                XXX                " << std::endl;
		_file << "              XXXXXXX              " << std::endl;
		_file << "            XXXXXXXXXXX            " << std::endl;
		_file << "              XXXXXXX              " << std::endl;
		_file << "            XXXXXXXXXXX            " << std::endl;
		_file << "          XXXXXXXXXXXXXXX          " << std::endl;
		_file << "        XXXXXXXXXXXXXXXXXXX        " << std::endl;
		_file << "          XXXXXXXXXXXXXXX          " << std::endl;
		_file << "        XXXXXXXXXXXXXXXXXXX        " << std::endl;
		_file << "      XXXXXXXXXXXXXXXXXXXXXXX      " << std::endl;
		_file << "    XXXXXXXXXXXXXXXXXXXXXXXXXXX    " << std::endl;
		_file << "      XXXXXXXXXXXXXXXXXXXXXXX      " << std::endl;
		_file << "    XXXXXXXXXXXXXXXXXXXXXXXXXXX    " << std::endl;
		_file << "  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX  " << std::endl;
		_file << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
		_file << "               XXXXX               " << std::endl;
		_file << "               XXXXX               " << std::endl;
		_file << "               XXXXX               " << std::endl;
	}
	return ;
}
