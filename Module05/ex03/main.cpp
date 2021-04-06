/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 11:06:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/09 12:02:40 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void){
	Bureaucrat one("Micheal", 10);
	Intern sri = Intern();
	Form *rrf;
	Form *ppf;
	Form *scf;
	Form *notWorking;

	std::cout << std::endl;
	rrf = sri.makeForm("RobotomyRequestForm", "Robot Works");
	std::cout << std::endl;
	ppf = sri.makeForm("PresidentialPardonForm", "Presidential Works");
	std::cout << std::endl;
	scf = sri.makeForm("ShrubberyCreationForm", "Shrubbery Works");
	std::cout << std::endl;
	notWorking = sri.makeForm("ShrubberyCreationFor", "Doesn't Work");
	std::cout << std::endl << "Printing forms" << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		std::cout << *scf << std::endl;
	if (notWorking)
		std::cout << *notWorking << std::endl;
	std::cout << std::endl << "Signing and executing forms in two diff ways" << std::endl;
	rrf->beSigned(one);
	std::cout << std::endl;
	rrf->execute(one);
	std::cout << std::endl;
	ppf->beSigned(one);
	std::cout << std::endl;
	one.executeForm(*ppf);
	std::cout << std::endl << "---- DESTRUCTOR ----" << std::endl;
	delete rrf;
	delete ppf;
	delete scf;
}
