/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 11:06:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/08 13:04:17 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void){
	std::cout <<  "--- Create two Bureacrats with a valid grade ---" << std::endl;
	Bureaucrat one("Micheal", 90);
	std::cout << one << std::endl;
	Bureaucrat two("Katie", 140);
	std::cout << two << std::endl;

	std::cout << "--- Trying to create some forms with an execute grade too high ---" << std::endl;
	try{
		Form rene("rene", 0, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", -1, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Trying to create some forms with a signed grade too high ---" << std::endl;
	try{
		Form rene("rene", 100, 0);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", 100, -1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "--- Trying to create some forms with an execute grade too low ---" << std::endl;
	try{
		Form rene("rene", 151, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", 600, 100);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Trying to create some forms with a signed grade too low ---" << std::endl;
	try{
		Form rene("rene", 100, 151);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form rene("rene", 100, 600);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a valid form ---" << std::endl;
	try{
		Form form1("form1", 10, 130);
		std::cout << form1;
		std::cout << one;
		std::cout << "--> Bureaucrat will sign the form" << std::endl;
		one.signForm(form1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a valid form ---" << std::endl;
	try{
		Form form1("form1", 120, 10);
		std::cout << form1;
		std::cout << one;
		std::cout << "--> Bureaucrat can't sign the form" << std::endl;
		one.signForm(form1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a valid form and increment bureaucrats grade to sign the form ---" << std::endl;
	try{
		Form form1("form1", 120, 89);
		std::cout << form1;
		std::cout << one;
		std::cout << "--> Bureaucrat can't sign the form" << std::endl;
		one.signForm(form1);
		std::cout << "--> Increment bureaucrats grade to sign the form" << std::endl;
		one.incrementGrade();
		std::cout << "--> Bureaucrat can sign the form" << std::endl;
		one.signForm(form1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Create a form with a copy constructor ---" << std::endl;
	try{
		Form uno("rene", 100, 90);
		Form dos(uno);
		std::cout << uno;
		std::cout << dos;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl <<  "--- Assignation ---" << std::endl;
	try{
		Form test1("test1", 20, 140);
		Form test2("test2", 4, 2);
		std::cout << test1;
		std::cout << std::endl << test2 << std::endl;
		test1.beSigned(one);
		test2 = test1;
		std::cout << std::endl << test2 << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "---- DESTRUCTOR ----" << std::endl;
}
