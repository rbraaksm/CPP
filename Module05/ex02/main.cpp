/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 11:06:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/08 16:54:12 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){
	Bureaucrat one("Micheal", 10);
	ShrubberyCreationForm scf("form1");
	ShrubberyCreationForm scf2("form2");
	RobotomyRequestForm rrf("robot1");
	RobotomyRequestForm rrf2("robot2");
	PresidentialPardonForm ppf("president1");
	PresidentialPardonForm ppf2("president2");
	srand (time(NULL));
	std::cout << std::endl;
	std::cout << std::endl << "--- SHRUBBERY CREATION FORM ---" << std::endl;
	std::cout << scf;
	try{
		std::cout << "---> trying to execute" << std::endl;
		scf.execute(one);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Bureaucrat tries to execute" << std::endl;
		one.executeForm(scf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Bureaucrat signed the form" << std::endl;
		scf.beSigned(one);
		scf.execute(one);
		one.executeForm(scf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Copy constructor <----" << std::endl;
		ShrubberyCreationForm scf3(scf);
		std::cout << std::endl << scf << std::endl << scf3;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Assignation <----" << std::endl;
		std::cout << scf << std::endl << scf2;
		scf2 = scf;
		std::cout << std::endl << scf2;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << "--- ROBOTOMY REQUEST FORM ---" << std::endl;
	std::cout << scf;
	try{
		std::cout << "---> trying to execute" << std::endl;
		rrf.execute(one);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Bureaucrat tries to execute" << std::endl;
		one.executeForm(rrf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Bureaucrat signed the form" << std::endl;
		rrf.beSigned(one);
		rrf.execute(one);
		one.executeForm(rrf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Copy constructor <----" << std::endl;
		RobotomyRequestForm rrf3(rrf);
		std::cout << std::endl << rrf << std::endl << rrf3;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Assignation <----" << std::endl;
		std::cout << rrf << std::endl << rrf2;
		rrf2 = rrf;
		std::cout << std::endl << rrf2;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << "--- PRESIDENT PARON FORM ---" << std::endl;
	std::cout << scf;
	try{
		std::cout << "---> trying to execute" << std::endl;
		ppf.execute(one);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Bureaucrat tries to execute" << std::endl;
		one.executeForm(ppf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Bureaucrat signed the form" << std::endl;
		ppf.beSigned(one);
		ppf.execute(one);
		one.executeForm(ppf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Copy constructor <----" << std::endl;
		PresidentialPardonForm ppf3(ppf);
		std::cout << std::endl << ppf << std::endl << ppf3;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl << "---> Assignation <----" << std::endl;
		std::cout << ppf << std::endl << ppf2;
		ppf2 = ppf;
		std::cout << std::endl << ppf2;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "---- DESTRUCTOR ----" << std::endl;
}
